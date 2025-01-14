#include "nadavspi.h"

#ifdef OLED_ENABLE

void render_chinese(void) {
    static const char PROGMEM image[] = {
        // 128x32px
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x1e, 
        0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0xbe, 0xde, 0x9e, 0x1e, 0x1e, 0x1e, 0x1e, 0x9e, 0xde, 
        0x9e, 0x1e, 0x1e, 0xfe, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x0e, 0x0e, 0x8e, 0x0e, 0x0e, 0x0e, 0xfe, 0xfe, 0x0e, 0x0e, 0x0e, 0xfe, 0xfe, 0x0e, 
        0x0e, 0xfe, 0xfe, 0x02, 0x00, 0xff, 0xff, 0xff, 0xc0, 0xc0, 0xfe, 0xfe, 0xc0, 0xc0, 0xff, 0xff, 
        0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 
        0xc0, 0xc0, 0xc0, 0xc8, 0xc8, 0xfe, 0xcf, 0xc3, 0xc1, 0xc0, 0xc0, 0xc8, 0xfc, 0xcf, 0xc7, 0xc1, 
        0xc0, 0xc0, 0xc0, 0xff, 0xff, 0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x07, 0x1f, 0x3f, 0x38, 0x38, 0x38, 0x3f, 0x3f, 0x38, 0x38, 0x38, 0x3f, 0x3f, 0x38, 
        0x38, 0xbf, 0xbf, 0xa0, 0x00, 0x7f, 0x7f, 0x7f, 0x01, 0x01, 0xff, 0xbf, 0x01, 0x01, 0x7f, 0x7f, 
        0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0x83, 
        0xc3, 0x03, 0x03, 0x03, 0x03, 0xc3, 0xe3, 0x7b, 0x3f, 0x0b, 0x03, 0x03, 0x83, 0xe3, 0xf7, 0x3b, 
        0x13, 0x03, 0x03, 0xff, 0xff, 0xff, 0x03, 0x03, 0x03, 0x03, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x1c, 0x7e, 0xfe, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe1, 0xff, 0xff, 0xe0, 0xe0, 0xe0, 
        0xe0, 0xff, 0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xfe, 0xfe, 0xff, 0x83, 0x07, 0x0f, 0xfe, 0xfc, 0xfc, 
        0x38, 0x38, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x3f, 
        0x3f, 0x78, 0x78, 0x78, 0x79, 0x7b, 0x79, 0x78, 0x78, 0x78, 0x78, 0x79, 0x7f, 0x79, 0x78, 0x78, 
        0x78, 0x78, 0x78, 0x7f, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x70, 0x7f, 0x7f, 0x70, 0x70, 0x70, 
        0x70, 0xff, 0xff, 0xff, 0x70, 0x70, 0x70, 0x7f, 0x7f, 0x7f, 0x03, 0x07, 0x07, 0x0f, 0x1f, 0x07, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00     
 };
    oled_write_raw_P(image, sizeof(image));
}

void render_chinese_lr(void) {
    static const char PROGMEM image[] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x98, 
        0x98, 0x98, 0x98, 0x98, 0xff, 0xff, 0xff, 0x98, 0x98, 0x98, 0x98, 0x98, 0x18, 0x80, 0xc0, 0xe0, 
        0xf8, 0x3e, 0x3f, 0x3b, 0x39, 0x38, 0xb8, 0xf8, 0xf8, 0x30, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 
        0xfc, 0xfc, 0xfc, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 
        0x1c, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0xb9, 
        0xb9, 0xb9, 0xb9, 0xb9, 0xbf, 0xbf, 0xbf, 0xb9, 0xb9, 0xb9, 0xb9, 0xb9, 0x39, 0x81, 0x83, 0x8f, 
        0x8e, 0x8e, 0x8e, 0xfe, 0xfe, 0xff, 0x8f, 0x8f, 0x8e, 0x8e, 0xfe, 0xfe, 0xfe, 0x80, 0x80, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0xfe, 0x0e, 0x8e, 0xce, 0x8e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 
        0xff, 0xff, 0xff, 0x0e, 0x0e, 0x8e, 0xce, 0x8e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0xfe, 0xfe, 0xfe, 
        0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
        0xff, 0xff, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xff, 0xff, 0xff, 0x00, 0x03, 0xc3, 0xc3, 
        0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xff, 0xff, 0x03, 0x03, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x80, 0xc0, 0xe1, 0xc3, 0x83, 0x07, 0x0e, 0x04, 0x04, 
        0xff, 0xff, 0xff, 0x00, 0x41, 0xe0, 0xc1, 0xc3, 0x83, 0x07, 0x0e, 0x04, 0x02, 0xff, 0xff, 0xff, 
        0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 
        0xff, 0xff, 0x06, 0x06, 0x06, 0x46, 0xc6, 0xc6, 0xc6, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x01, 0x41, 
        0xc1, 0xc1, 0xc1, 0xff, 0xff, 0x7f, 0x01, 0x01, 0x01, 0x01, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x02, 0x02, 
        0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0x43, 0xc3, 0xc7, 0xc2, 0xc0, 0xdf, 0xff, 0xff, 
        0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
 };
    oled_write_raw_P(image, sizeof(image));
}

void render_hebrew(void) {
    static const char PROGMEM image[] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x40, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0xf8, 0xf8, 
        0xf0, 0xf0, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x70, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 
        0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0xf8, 0xf8, 0xf8, 0xf8, 0x78, 0x78, 0x78, 0x08, 0x00, 0x00, 
        0x00, 0x00, 0x40, 0xf8, 0xf8, 0xf0, 0xf0, 0xf0, 0xf0, 0xe0, 0xe0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x03, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x07, 0xff, 0xff, 0xff, 0xfc, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x20, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 
        0x3c, 0x3f, 0x3f, 0x3f, 0x3f, 0x3c, 0x3c, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x30, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3f, 0x3f, 0x3f, 0x0f, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00    
 };
    oled_write_raw_P(image, sizeof(image));
}

   
bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_chinese_lr();
    } else {
        render_hebrew();
    }
    return false;
}
#endif
