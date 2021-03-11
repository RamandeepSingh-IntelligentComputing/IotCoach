
//##############**"Mario underworld" **##############//
int MarioUW_note[] = {
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,NOTE_AS3, NOTE_AS4, 0, 0,
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4, NOTE_AS3, NOTE_AS4, 0,0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,NOTE_DS3, NOTE_DS4, 0, 0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,NOTE_DS3, NOTE_DS4, 0,
  0, NOTE_DS4, NOTE_CS4, NOTE_D4,
  NOTE_CS4, NOTE_DS4, NOTE_DS4, NOTE_GS3, NOTE_G3, NOTE_CS4,
  NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
  NOTE_GS4, NOTE_DS4, NOTE_B3,  NOTE_AS3, NOTE_A3, NOTE_GS3,0, 0, 0
};
int MarioUW_duration[] = {
 12, 12, 12, 12,12, 12, 6,3,
 12, 12, 12, 12, 12, 12, 6, 3,
 12, 12, 12, 12, 12, 12, 6,
 3, 12, 12, 12, 12,
 12, 12, 6, 6, 18, 18, 18,
 6, 6, 6, 6,6, 6,
 18, 18, 18, 18, 18, 18, 10, 10, 10,
 10, 10, 10, 3, 3, 3
};
//###########End of Mario underworld#############//


const unsigned char SabudhText [] PROGMEM = {
  // 'sabudhlogo', 128x64px
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x0f, 0xc0, 0x3f, 0x80, 0x3f, 0xe0, 0x07, 0xc3, 0xf0, 0x7f, 0xe0, 0x00, 0x7e, 0x1f, 0x80, 
0x00, 0x1f, 0xc0, 0x7f, 0xc0, 0x3f, 0xfc, 0x07, 0xc3, 0xf0, 0x7f, 0xfc, 0x00, 0x7e, 0x1f, 0x80, 
0x00, 0x1f, 0xc0, 0xff, 0xe0, 0x3f, 0xfe, 0x07, 0xc3, 0xf0, 0x7f, 0xff, 0x00, 0x7e, 0x1f, 0x80, 
0x00, 0x3f, 0xc1, 0xff, 0xf0, 0x3f, 0xff, 0x07, 0xc3, 0xf0, 0x7f, 0xff, 0x80, 0x7e, 0x1f, 0x80, 
0x00, 0x7f, 0xc1, 0xff, 0xf0, 0x3f, 0xff, 0x07, 0xc3, 0xf0, 0x7f, 0xff, 0xc0, 0x7e, 0x1f, 0x80, 
0x00, 0x7f, 0xc3, 0xff, 0xf0, 0x3f, 0xff, 0x07, 0xc3, 0xf0, 0x7f, 0xff, 0xe0, 0x7e, 0x1f, 0x80, 
0x00, 0x7f, 0xc3, 0xff, 0xf8, 0x3f, 0xff, 0x07, 0xc3, 0xf0, 0x7f, 0xff, 0xe0, 0x7e, 0x1f, 0x80, 
0x00, 0xff, 0xc3, 0xff, 0xf8, 0x3f, 0xff, 0x07, 0xc3, 0xf0, 0x7f, 0xff, 0xf0, 0x7e, 0x1f, 0x80, 
0x00, 0xff, 0xc3, 0xff, 0xf8, 0x3f, 0xff, 0x07, 0xc3, 0xf0, 0x7f, 0xff, 0xf0, 0x7e, 0x1f, 0x80, 
0x00, 0xff, 0x03, 0xf3, 0xf8, 0x3f, 0x1f, 0x07, 0xc3, 0xf0, 0x7f, 0xff, 0xf0, 0x7e, 0x1f, 0x80, 
0x00, 0xfe, 0x03, 0xf1, 0xf8, 0x3f, 0x1f, 0x07, 0xc3, 0xf0, 0x7e, 0x07, 0xf8, 0x7e, 0x1f, 0x80, 
0x00, 0xfe, 0x07, 0xe1, 0xf8, 0x3f, 0x1f, 0x07, 0xc3, 0xf0, 0x7e, 0x03, 0xf8, 0x7e, 0x1f, 0x80, 
0x00, 0xfe, 0x07, 0xe1, 0xf8, 0x3f, 0x1f, 0x07, 0xc3, 0xf0, 0x7e, 0x03, 0xf8, 0x7e, 0x1f, 0x80, 
0x00, 0xfe, 0x07, 0xe1, 0xf8, 0x3f, 0x3f, 0x07, 0xc3, 0xf0, 0x7e, 0x01, 0xf8, 0x7f, 0x9f, 0x80, 
0x00, 0xfe, 0x07, 0xe1, 0xf8, 0x3f, 0x3e, 0x07, 0xc3, 0xf0, 0x7e, 0x01, 0xf8, 0x7f, 0x9f, 0x80, 
0x00, 0x7f, 0x07, 0xe1, 0xf8, 0x3f, 0x3c, 0x07, 0xc3, 0xf0, 0x7e, 0x01, 0xf8, 0x7f, 0x9f, 0x80, 
0x00, 0x7f, 0x07, 0xe1, 0xf8, 0x3f, 0x3c, 0x07, 0xc3, 0xf0, 0x7e, 0x01, 0xf8, 0x7f, 0x9f, 0x80, 
0x00, 0x7f, 0x07, 0xe1, 0xf8, 0x3f, 0x3f, 0x07, 0xc3, 0xf0, 0x7e, 0x01, 0xf8, 0x7f, 0x9f, 0x80, 
0x00, 0x7f, 0x87, 0xf9, 0xf8, 0x3f, 0x3f, 0x07, 0xc3, 0xf0, 0x7e, 0x01, 0xf8, 0x7f, 0x9f, 0x80, 
0x00, 0x3f, 0x87, 0xf9, 0xf8, 0x3f, 0x3f, 0x87, 0xc3, 0xf0, 0x7e, 0x01, 0xf8, 0x7f, 0x9f, 0x80, 
0x00, 0x3f, 0x87, 0xf9, 0xf8, 0x3f, 0x3f, 0x87, 0xc3, 0xf0, 0x7e, 0x01, 0xf8, 0x7f, 0x9f, 0x80, 
0x00, 0x3f, 0x87, 0xf9, 0xf8, 0x3f, 0x7f, 0x87, 0xc3, 0xf0, 0x7e, 0x01, 0xf8, 0x7e, 0x1f, 0x80, 
0x00, 0x1f, 0x87, 0xf9, 0xf8, 0x3f, 0x0f, 0x87, 0xc3, 0xf0, 0x7e, 0x03, 0xf8, 0x7e, 0x1f, 0x80, 
0x00, 0x3f, 0x87, 0xf9, 0xf8, 0x3f, 0x0f, 0xc7, 0xc3, 0xf0, 0x7e, 0x07, 0xf8, 0x7e, 0x1f, 0x80, 
0x00, 0x3f, 0x87, 0xf9, 0xf8, 0x3f, 0x0f, 0xc7, 0xe3, 0xf0, 0x7e, 0x0f, 0xf8, 0x7e, 0x1f, 0x80, 
0x01, 0x7f, 0x87, 0xf9, 0xf8, 0x3f, 0x0f, 0xc7, 0xf7, 0xf0, 0x7e, 0x7f, 0xf0, 0x7e, 0x1f, 0x80, 
0x01, 0xff, 0x87, 0xe1, 0xf8, 0x3f, 0x7f, 0xc7, 0xff, 0xf0, 0x7e, 0x7f, 0xf0, 0x7e, 0x1f, 0x80, 
0x01, 0xff, 0x87, 0xe1, 0xf8, 0x3f, 0x3f, 0x87, 0xff, 0xe0, 0x7e, 0x7f, 0xf0, 0x7e, 0x1f, 0x80, 
0x01, 0xff, 0x87, 0xe1, 0xf8, 0x3f, 0x3f, 0x87, 0xff, 0xe0, 0x7e, 0x7f, 0xe0, 0x7e, 0x1f, 0x80, 
0x01, 0xff, 0x07, 0xe1, 0xf8, 0x3f, 0x3f, 0x87, 0xff, 0xe0, 0x7e, 0x7f, 0xc0, 0x7e, 0x1f, 0x80, 
0x01, 0xff, 0x07, 0xe1, 0xf8, 0x3f, 0x3f, 0x83, 0xff, 0xe0, 0x7e, 0x7f, 0xc0, 0x7e, 0x1f, 0x80, 
0x01, 0xfe, 0x07, 0xe1, 0xf8, 0x3f, 0x3f, 0x03, 0xff, 0xc0, 0x7e, 0x7f, 0x80, 0x7e, 0x1f, 0x80, 
0x01, 0xfe, 0x07, 0xe1, 0xf8, 0x3f, 0x3e, 0x01, 0xff, 0x80, 0x7e, 0x7f, 0x00, 0x7e, 0x1f, 0x80, 
0x01, 0xfc, 0x07, 0xe1, 0xf8, 0x3f, 0x7c, 0x00, 0xff, 0x00, 0x7e, 0x7c, 0x00, 0x7e, 0x1f, 0x80, 
0x01, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char GrpLabsText [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x01, 0xfc, 0x07, 0xff, 0x80, 0xff, 0xe0, 0x3e, 0x00, 0x03, 0xe0, 0x1f, 0xfe, 0x00, 0x1f, 0xe0, 
0x07, 0xfe, 0x07, 0xff, 0xc0, 0xff, 0xf8, 0x3e, 0x00, 0x03, 0xe0, 0x1f, 0xff, 0x00, 0x7f, 0xe0, 
0x0f, 0xff, 0x07, 0xff, 0xe0, 0xff, 0xfc, 0x3e, 0x00, 0x03, 0xe0, 0x1f, 0xff, 0x80, 0xff, 0xe0, 
0x0f, 0xff, 0x87, 0xff, 0xf0, 0xff, 0xfe, 0x3e, 0x00, 0x03, 0xe0, 0x1f, 0xff, 0xc0, 0xff, 0xe0, 
0x1f, 0xff, 0x87, 0xff, 0xf0, 0xff, 0xfe, 0x3e, 0x00, 0x07, 0xf0, 0x1f, 0xff, 0xe1, 0xff, 0xe0, 
0x1f, 0xff, 0xc7, 0xff, 0xf8, 0xff, 0xff, 0x3e, 0x00, 0x07, 0xf0, 0x1f, 0xff, 0xe1, 0xff, 0xe0, 
0x3f, 0xff, 0xc7, 0xff, 0xf8, 0xff, 0xff, 0x3e, 0x00, 0x07, 0xf0, 0x1f, 0xff, 0xe3, 0xff, 0xe0, 
0x3f, 0xff, 0xc7, 0xff, 0xf8, 0xff, 0xff, 0x3e, 0x00, 0x07, 0xf0, 0x1f, 0xff, 0xf3, 0xff, 0xe0, 
0x3e, 0x07, 0xe7, 0x80, 0xf8, 0xf0, 0x1f, 0x3e, 0x00, 0x07, 0xf0, 0x1e, 0x03, 0xf3, 0xe0, 0x00, 
0x3e, 0x03, 0xe7, 0x80, 0x7c, 0xf0, 0x0f, 0x3e, 0x00, 0x0f, 0xf8, 0x1f, 0x01, 0xf3, 0xe0, 0x00, 
0x3c, 0x00, 0x07, 0x80, 0x7c, 0xf0, 0x0f, 0x3e, 0x00, 0x0f, 0xf8, 0x1f, 0x01, 0xf3, 0xc0, 0x00, 
0x3c, 0x00, 0x07, 0x80, 0x7d, 0xf0, 0x0f, 0x3e, 0x00, 0x0f, 0xf8, 0x1f, 0x01, 0xf3, 0xc0, 0x00, 
0x3c, 0x00, 0x07, 0x80, 0x7d, 0xf0, 0x1f, 0x3e, 0x00, 0x0f, 0xf8, 0x1f, 0x01, 0xf3, 0xe0, 0x00, 
0x3c, 0x00, 0x07, 0x80, 0xf9, 0xf0, 0x1f, 0x3e, 0x00, 0x0f, 0xf8, 0x1f, 0x03, 0xf3, 0xf0, 0x00, 
0x3c, 0x0f, 0xe7, 0xff, 0xf9, 0xff, 0xff, 0x3e, 0x00, 0x0f, 0xf8, 0x1f, 0xff, 0xe3, 0xff, 0xe0, 
0x3c, 0x0f, 0xe7, 0xff, 0xf9, 0xff, 0xff, 0x3e, 0x00, 0x1f, 0x7c, 0x1f, 0xff, 0xe3, 0xff, 0xf0, 
0x3c, 0x0f, 0xe7, 0xff, 0xf9, 0xff, 0xfe, 0x3e, 0x00, 0x1f, 0x7c, 0x1f, 0xff, 0xe1, 0xff, 0xf8, 
0x3c, 0x0f, 0xe7, 0xff, 0xf1, 0xff, 0xfe, 0x3e, 0x00, 0x1f, 0x7c, 0x1f, 0xff, 0xc1, 0xff, 0xf8, 
0x3c, 0x0f, 0xe7, 0xff, 0xf1, 0xff, 0xfc, 0x3e, 0x00, 0x1f, 0x7c, 0x1f, 0xff, 0xe0, 0xff, 0xfc, 
0x3c, 0x0f, 0xe7, 0xff, 0xf9, 0xff, 0xfc, 0x3e, 0x00, 0x1e, 0x3c, 0x1f, 0xff, 0xe0, 0x7f, 0xfc, 
0x3c, 0x0f, 0xe7, 0xff, 0xf9, 0xff, 0xf8, 0x3e, 0x00, 0x1e, 0x3c, 0x1f, 0xff, 0xe0, 0x3f, 0xfc, 
0x3c, 0x0f, 0xe7, 0xc1, 0xf9, 0xf8, 0x00, 0x3e, 0x00, 0x3e, 0x3e, 0x1f, 0x07, 0xf0, 0x00, 0xfe, 
0x3c, 0x03, 0xe7, 0x80, 0xfd, 0xf0, 0x00, 0x3e, 0x00, 0x3e, 0x3e, 0x1f, 0x01, 0xf0, 0x00, 0x7e, 
0x3c, 0x03, 0xe7, 0x80, 0x7d, 0xf0, 0x00, 0x3e, 0x00, 0x3e, 0x3e, 0x1f, 0x01, 0xf0, 0x00, 0x3e, 
0x3c, 0x03, 0xe7, 0x80, 0x7d, 0xf0, 0x00, 0x3e, 0x00, 0x3e, 0x3e, 0x1f, 0x01, 0xf0, 0x00, 0x3e, 
0x3e, 0x03, 0xe7, 0x80, 0x7d, 0xf0, 0x00, 0x3e, 0x00, 0x3c, 0x1e, 0x1f, 0x01, 0xf0, 0x00, 0x3e, 
0x3e, 0x07, 0xe7, 0x80, 0x7d, 0xf0, 0x00, 0x3f, 0x00, 0x7c, 0x1f, 0x1f, 0x01, 0xf0, 0x00, 0x7e, 
0x3f, 0x0f, 0xe7, 0x80, 0x7d, 0xf0, 0x00, 0x1f, 0x80, 0x7c, 0x1f, 0x1f, 0x03, 0xf0, 0x00, 0xfe, 
0x3f, 0xff, 0xc7, 0x80, 0x7d, 0xf0, 0x00, 0x1f, 0xfc, 0x7c, 0x1f, 0x1f, 0xff, 0xf3, 0xff, 0xfc, 
0x3f, 0xff, 0xc7, 0x80, 0x7d, 0xf0, 0x00, 0x1f, 0xfc, 0x7c, 0x1f, 0x1f, 0xff, 0xe3, 0xff, 0xfc, 
0x1f, 0xff, 0xc7, 0x80, 0x7d, 0xf0, 0x00, 0x1f, 0xfc, 0x7c, 0x1f, 0x1f, 0xff, 0xe3, 0xff, 0xfc, 
0x1f, 0xff, 0x87, 0x80, 0x7d, 0xf0, 0x00, 0x0f, 0xfc, 0x78, 0x0f, 0x1f, 0xff, 0xc3, 0xff, 0xf8, 
0x0f, 0xff, 0x87, 0x80, 0x7d, 0xf0, 0x00, 0x0f, 0xfc, 0xf8, 0x0f, 0x9f, 0xff, 0xc3, 0xff, 0xf8, 
0x07, 0xff, 0x07, 0x80, 0x7d, 0xf0, 0x00, 0x07, 0xfc, 0xf8, 0x0f, 0x9f, 0xff, 0x83, 0xff, 0xf0, 
0x03, 0xfe, 0x0f, 0x80, 0x7d, 0xf0, 0x00, 0x03, 0xfc, 0xf8, 0x0f, 0x9f, 0xff, 0x03, 0xff, 0xe0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char Thumbsup [] PROGMEM = {
  // 'Thumbsup', 128x64px
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x0f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x0c, 0x88, 0x07, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char Khanda [] PROGMEM = {
// 'Khanda', 128x64px
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x3c, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x07, 0xe0, 0xff, 0x87, 0xff, 0xff, 0x0f, 0xf8, 0x3f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x3f, 0x83, 0xfc, 0x07, 0xff, 0xff, 0x01, 0xfe, 0x07, 0xf0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xfe, 0x07, 0xf0, 0x03, 0xff, 0xff, 0x00, 0x3f, 0x81, 0xfc, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x03, 0xf8, 0x0f, 0xc0, 0x03, 0xff, 0xff, 0x00, 0x1f, 0xc0, 0xff, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x0f, 0xf0, 0x1f, 0x80, 0x03, 0xff, 0xfe, 0x00, 0x07, 0xe0, 0x7f, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0xe0, 0x3f, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x03, 0xf0, 0x3f, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x3f, 0xc0, 0x7e, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x03, 0xf0, 0x1f, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x7f, 0xc0, 0x7e, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x01, 0xf8, 0x0f, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0xff, 0x80, 0xfc, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x01, 0xf8, 0x0f, 0xfc, 0x00, 0x00, 
0x00, 0x01, 0xff, 0x80, 0xfc, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x01, 0xf8, 0x0f, 0xfc, 0x00, 0x00, 
0x00, 0x01, 0xff, 0x80, 0xfc, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x01, 0xf8, 0x0f, 0xfe, 0x00, 0x00, 
0x00, 0x03, 0xff, 0x80, 0x7e, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x01, 0xf8, 0x0f, 0xfe, 0x00, 0x00, 
0x00, 0x03, 0xff, 0x80, 0x7e, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x03, 0xf8, 0x0f, 0xff, 0x00, 0x00, 
0x00, 0x03, 0xff, 0xc0, 0x3f, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x03, 0xf0, 0x0f, 0xff, 0x00, 0x00, 
0x00, 0x03, 0xff, 0xe0, 0x3f, 0x80, 0x03, 0xff, 0xfe, 0x00, 0x07, 0xe0, 0x1f, 0xff, 0x00, 0x00, 
0x00, 0x03, 0xff, 0xe0, 0x1f, 0xc0, 0x03, 0xff, 0xfe, 0x00, 0x1f, 0xc0, 0x3f, 0xff, 0x00, 0x00, 
0x00, 0x03, 0xff, 0xf0, 0x07, 0xf0, 0x03, 0xff, 0xff, 0x00, 0x3f, 0x80, 0x7f, 0xfe, 0x00, 0x00, 
0x00, 0x01, 0xff, 0xf8, 0x03, 0xfc, 0x03, 0xff, 0xff, 0x00, 0xfe, 0x00, 0xff, 0xfe, 0x00, 0x00, 
0x00, 0x01, 0xff, 0xfe, 0x00, 0xff, 0x87, 0xff, 0xff, 0x07, 0xfc, 0x01, 0xff, 0xfc, 0x00, 0x00, 
0x00, 0x00, 0xff, 0xff, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xfc, 0x00, 0x00, 
0x00, 0x00, 0x7f, 0xff, 0xc0, 0x07, 0xff, 0xff, 0xff, 0xff, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 
0x00, 0x00, 0x3f, 0xff, 0xf0, 0x00, 0x7f, 0xff, 0xff, 0xf8, 0x00, 0x3f, 0xff, 0xf0, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0xff, 0xfc, 0x00, 0x0f, 0xff, 0xff, 0xc0, 0x00, 0xff, 0xff, 0xe0, 0x00, 0x00, 
0x00, 0x00, 0x0f, 0xff, 0xff, 0x00, 0x1f, 0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x03, 0xff, 0xff, 0xc0, 0x1f, 0xff, 0xff, 0xe0, 0x1f, 0xff, 0xff, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xff, 0xff, 0xf8, 0x03, 0xff, 0xff, 0x00, 0x7f, 0xff, 0xfc, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0x00, 0x7f, 0xf8, 0x03, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xc0, 0x1f, 0xc0, 0x1f, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfc, 0x1f, 0xc0, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x9f, 0xc7, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xe0, 0xff, 0xf8, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0xff, 0xf8, 0x03, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x07, 0xff, 0xff, 0x80, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x1f, 0xc7, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xf8, 0x1f, 0xc0, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x1f, 0xc0, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf0, 0x1f, 0xc0, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf0, 0x1f, 0xc0, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x80, 0x1f, 0xe0, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};