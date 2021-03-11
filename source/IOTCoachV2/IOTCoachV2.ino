/**
 * Author: Ramandeep Singh
 * Email : passionatecuriosity@gmail.com (Feel free to contact).
 * This is a free to distribute demo program to display IoTCoach training kit features.Kit is based on ESP32
 * Wroom-32. 
 * This also supports OTA via WiFi. You need Arduino 1.8 or higher. 
 */

//OTA Support
#include <WiFi.h>
#include <ESPmDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>
#include <NTPClient.h>

//MQTT Support
#include "PubSubClient.h" 

//WebSocket Support
#include <ESPAsyncWebServer.h>

#include<Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <TimeLib.h>
//#include"SSD1306.h"
#include <HCSR04.h>
#include <Tone32.h>
#include "Freenove_WS2812_Lib_for_ESP32.h"
#include "constants.h"

#define BUZZER_PIN 27
#define BUZZER_CHANNEL 0

#define ONBOARDLED 2

#define RELAY 25
#define USRSWT1 35
#define USRSWT2 34

//For WS2812b Leds
#define WS2812_LEDS_COUNT  6
#define WS2812_LEDS_DIN  33
#define WS2812_CHANNEL   0
Freenove_ESP32_WS2812 strip = Freenove_ESP32_WS2812(WS2812_LEDS_COUNT, WS2812_LEDS_DIN, WS2812_CHANNEL, TYPE_GRB);

//For BME280 Sensor
#define SEALEVELPRESSURE_HPA (1013.25)
Adafruit_BME280 bme;

//Open Source Hardware Icon Pad
#define TOUCHPAD 14


// Temporary variables
static char celsiusTemp[7];
static char fahrenheitTemp[7];
static char humidityTemp[7];


//NTP Time Sync to show a digital clock
#define NTP_OFFSET  19800 // In seconds
#define NTP_INTERVAL 60 * 1000    // In miliseconds
#define NTP_ADDRESS  "1.asia.pool.ntp.org"

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, NTP_ADDRESS, NTP_OFFSET, NTP_INTERVAL);

String days[7] = {"SUN","MON","TUE","WED","THR","FRI","SAT"};

/* 
 *  Replace ssid and password with your wifi credentials 
 *  to use OTA 
*/
const char* ssid = "";
const char* password = "";

TaskHandle_t UltrasonicTask;

WiFiClient wifiClient;


#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET     -1 
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

//SSD1306  display(0x3c, 21, 22);

int triggerPin = 13;
int echoPin = 12;
int buzzerPin = 14;
//HCSr04 Ultrasonic Sensor  
UltraSonicDistanceSensor distanceSensor(triggerPin, echoPin);


long elapsedTime = 0;
long publishInterval = 0;

String lastStatus = "Connecting..";
String clientName = "";


int currentLevel = 0;

String twoDigits(int digits){
  if(digits < 10) {
    String i = '0'+String(digits);
    return i;
  }
  else {
    return String(digits);
  }
}

unsigned bmestatus;

// Motor A
int motor1Pin1 = 15; 
int motor1Pin2 = 26; 
int enable1Pin = 4; 

//Motor B
int motor2Pin1 = 5; 
int motor2Pin2 = 18; 
int enable2Pin = 19; 

void setup() {

  pinMode(ONBOARDLED,OUTPUT);
  pinMode(RELAY,OUTPUT);
   // sets the pins as outputs:
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(enable1Pin, OUTPUT);

  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  pinMode(enable2Pin, OUTPUT);
  
  //Usr Switch
  pinMode(USRSWT1,INPUT);
  pinMode(USRSWT2,INPUT); 
  
  //OLED Initialization
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3C for 128x32
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }
  display.clearDisplay();
  //display.setFont(ArialMT_Plain_24);
  //display.flipScreenVertically();
  display.setTextSize(3);
  display.setTextColor(WHITE);
  display.setCursor(0, 20);
  display.cp437(true);
  display.print("Welcome");

  display.setTextSize(2);
  display.setCursor(70, 50); 
  display.print("From");
   
  display.display();
  delay(2000);        
  display.clearDisplay();
   
  // Display bitmap
  display.drawBitmap(0, 0,  GrpLabsText, 128, 64, WHITE);
  display.display();
  display.clearDisplay(); 
  //display.print("Setting Up");
  //display.display();
  //display.setFont(ArialMT_Plain_16);  
  display.setTextSize(1);
  
  bmestatus = bme.begin(0x76);
  
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  /*while (WiFi.waitForConnectResult() != WL_CONNECTED) {
    Serial.println("Connection Failed! Rebooting...");
    delay(5000);
    ESP.restart();
  }*/

  /*
   * OTA Handler functions.
   */
    ArduinoOTA
    .onStart([]() {
      String type;
      if (ArduinoOTA.getCommand() == U_FLASH)
        type = "sketch";
      else // U_SPIFFS
        type = "filesystem";

      // NOTE: if updating SPIFFS this would be the place to unmount SPIFFS using SPIFFS.end()
      Serial.println("Start updating " + type);
      display.clearDisplay();
      display.setCursor(0,0);
      display.print("Start updating");
      //display.drawString(0, 0, "Start updating");
      display.display();
      //display.setFont(ArialMT_Plain_24);
      display.setTextSize(2);

    })
    .onEnd([]() {
      Serial.println("\nEnd");
      display.clearDisplay();
      display.setCursor(0,20);
      display.print("Done");
      //display.drawString(0, 20, "Done");
      display.display();

    })
    .onProgress([](unsigned int progress, unsigned int total) {
      Serial.printf("Progress: %u%%\r", (progress / (total / 100)));
      display.clearDisplay();
      display.setCursor(0,20);    
      display.print("Burn..." + String((progress / (total / 100))) + +"%");
      //display.drawString(0, 20, "Burn..." + String((progress / (total / 100))) + +"%");
      display.display();

    })
    .onError([](ota_error_t error) {
      Serial.printf("Error[%u]: ", error);
      display.clearDisplay();
      //display.drawString(0, 0, "Progress" + String((progress / (total / 100)));
      //display.display();
      display.setCursor(0,0);
      if (error == OTA_AUTH_ERROR) display.print("Auth Failed");
      else if (error == OTA_BEGIN_ERROR) display.print("Begin Failed");
      else if (error == OTA_CONNECT_ERROR) display.print("Connect Failed");
      else if (error == OTA_RECEIVE_ERROR) display.print("Receive Failed");
      else if (error == OTA_END_ERROR) display.print("End Failed");
      display.display();
    });

  ArduinoOTA.begin();

  
  Serial.begin(115200);
  timeClient.begin();
  timeClient.update();


  elapsedTime = millis();
  publishInterval = millis();

  //Initializing tone generator
  tone(BUZZER_PIN, NOTE_E4, 500, BUZZER_CHANNEL);

  //Initializing WS2812 strip
  strip.begin();
  
  Serial.print("My Ip - ");
  Serial.println(WiFi.localIP());

  for(int i = 0; i < 56; i++)
  {
    tone(BUZZER_PIN, MarioUW_note[i],MarioUW_duration[i]*10, BUZZER_CHANNEL);
  }
   display.clearDisplay();
  // Display bitmap
  display.drawBitmap(0, 0,  Thumbsup, 128, 64, WHITE);
  display.display();
  delay(2000);  
  display.clearDisplay(); 

   //Ultrasonic Task 
  xTaskCreatePinnedToCore(
    UltrasonicHandler, /* Function to implement the task */
    "UltrasonicTask", /* Name of the task */
    100,  /* Stack size in words */
    NULL,  /* Task input parameter */
    2,  /* Priority of the task */
    &UltrasonicTask,  /* Task handle. */
    0); /* Core where the task should run */  
}

bool ledState = 0;
bool touchState = 0;
void loop() {
  
  ArduinoOTA.handle();
 
  if( (millis()-elapsedTime) > 500)
    {
      UpdateData();
      elapsedTime = millis();
      digitalWrite(ONBOARDLED,ledState);
      ledState = !ledState;
      Serial.print("Usr Swt1 - ");
      Serial.println( digitalRead(USRSWT1));
      Serial.print("Usr Swt2 - ");
      Serial.println( digitalRead(USRSWT2));
      digitalWrite(RELAY,!digitalRead(USRSWT2));

      //For testing purpose only
      if(digitalRead(USRSWT2) == 0)
        Forward();
      else 
        Stop();      
    }
    
    if(TouchSens()< 60)
    {
      touchState = !touchState;
      delay(350);
    }
    
    //Commented for assembly test prog
    if(touchState)
      rainbowOn();
    else
      rainbowOff();
          
    
}

/*
 * This function fetches the data from BME280 weather sensor and displays on the
 * screen perodically. It also checks the for light intensity and HCSR04 Ultrasonic Distance Sensor.
 */
volatile double dst = 0.0;
void UpdateData()
{
            float h = bme.readHumidity();
          // Read temperature as Celsius (the default)
          float t = bme.readTemperature();
          float a = bme.readAltitude(SEALEVELPRESSURE_HPA);
          
          // Check if any reads failed and exit early (to try again).
          if (isnan(h) || isnan(t) ) {
            Serial.println("Failed to read from DHT sensor!");
            strcpy(celsiusTemp, "Failed");
            strcpy(fahrenheitTemp, "Failed");
            strcpy(humidityTemp, "Failed");
          }
          else{
            //float hic = dht.computeHeatIndex(t, h, false);
            dtostrf(t, 6, 1, celsiusTemp);
            //float hif = dht.computeHeatIndex(f, h);
            //dtostrf(hif, 6, 2, fahrenheitTemp);
            dtostrf(h, 6, 0, humidityTemp);  
          }
          int ldr = map(analogRead(A0),0,4095,0,100);
         
          display.clearDisplay();
          display.setCursor(1,0);
          display.print("Humidity:"+String(humidityTemp) + " %");
          //display.drawString(1, 0, "Humidity:"+String(humidityTemp) + " %");
          display.setCursor(1,12);
          display.print("Temp     :"+String(celsiusTemp) + " c");
          //display.drawString(1, 18,"Temp     :"+String(celsiusTemp) + " c");
          display.setCursor(1,24);
          display.print("Light:    :"+String(ldr)+ " %");
          display.setCursor(1,36);
          display.print("Distance :"+String(dst)+ " cm");
          display.setCursor(1,48);
          display.print("Altitude :"+String(a)+ " m");
          display.display();
          
          if(ldr < 25)
            tone(BUZZER_PIN, NOTE_C8, 500, BUZZER_CHANNEL);
          else
            noTone(BUZZER_PIN, BUZZER_CHANNEL);
          //Serial.println(analogRead(A0));

}

int colorCode = 255;
int ledIndex = WS2812_LEDS_COUNT;
void rainbowOn()
{
  
  strip.setLedColor(ledIndex, strip.Wheel((ledIndex * 256 / WS2812_LEDS_COUNT + colorCode) & 255));
 
  ledIndex = ledIndex > 0 ? --ledIndex : WS2812_LEDS_COUNT;
  colorCode = colorCode > 0  ? (colorCode-2) : 255; 
  //tone(BUZZER_PIN, NOTE_G6,ledIndex, BUZZER_CHANNEL);
  //delay(10);
}

void rainbowOff()
{
   for (int i = 0; i < WS2812_LEDS_COUNT; i++) {
    strip.setLedColor(i,0x00);
   }
}

int TouchSens()
{
  int sample = 0;
  for(int i=0;i<32;i++)
    sample += touchRead(TOUCHPAD);

  sample = sample / 32;

  return sample;
}
/*
 * Motor controls 
 */
//Fwd
void Forward()
{
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH); 
  digitalWrite(enable1Pin,HIGH);

  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH); 
  digitalWrite(enable2Pin,HIGH);
}

//bkwd
void Backward()
{
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW); 
  digitalWrite(enable1Pin,HIGH);

  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW); 
  digitalWrite(enable2Pin,HIGH);
}

//Left
void Left()
{
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW); 
  digitalWrite(enable1Pin,HIGH);

  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH); 
  digitalWrite(enable2Pin,HIGH);
}

//Right
void Right()
{
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH); 
  digitalWrite(enable1Pin,HIGH);

  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW); 
  digitalWrite(enable2Pin,HIGH);
}

//Stop
void Stop()
{
  digitalWrite(enable1Pin,LOW);
  digitalWrite(enable2Pin,LOW);
}

void UltrasonicHandler( void * parameter) {
  
  for(;;) //Infinite loop pinned to core 0 
  {    
    dst = distanceSensor.measureDistanceCm();
    delay(100);
  }
}
