/* 
 * Generated using "BMP TO EPAPER" by Crystalfontz of America
 * 
 * The program can be found on our website at : 
 *     https://www.crystalfontz.com/product/bmptoepaper-bitmap-to-epaper-software 
 * 
 * Or, the code can be forked from GitHub : 
 *     https://github.com/crystalfontz/bmp_to_epaper 
 * 
 * RLE Image: false
 * Non-Inverted Image: false
 * One Dimensional Array: true
 */

//Source image file: "V:\_CFA-OTS\CFAL\CFAL12864K\firmware\CFAL12864K_SPI_Demo_Code\bootlogo1.bmp"
#define HEIGHT_PIXELS    (64)
#define WIDTH_PIXELS     (128)
#define WIDTH_MONO_BYTES (16)

#define CFAL12864K 1
#define CFAL12864G 0

#if CFAL12864K
const uint8_t Mono_1BPP[1024] PROGMEM =
  {0xFF,0xDF,0xEC,0x0C,0x1E,0x3F,0xF0,0x03,0x03,0x0F,0xF1,0xF8,0xC0,0xC7,0xF8,0xF8,
   0xFF,0xDF,0xEC,0x1C,0x3F,0x3F,0xF0,0x03,0x03,0x0F,0xF3,0xFC,0xC0,0xCF,0xF9,0xFC,
   0x60,0x03,0x0C,0x1C,0x73,0x80,0x30,0x03,0x07,0x81,0x87,0x0E,0x61,0x9C,0x1B,0x8E,
   0x60,0x03,0x0C,0x3C,0x61,0x80,0x30,0x03,0x07,0x81,0x86,0x06,0x61,0x98,0x1B,0x06,
   0x30,0x03,0x0C,0x6C,0xC0,0xC0,0x30,0x03,0x07,0x81,0x80,0x06,0x33,0x18,0x18,0x03,
   0x18,0x03,0x0C,0x6C,0xC0,0xC0,0x30,0x03,0x0C,0xC1,0x80,0x0E,0x33,0x18,0x18,0x03,
   0x0C,0x03,0x0C,0xCC,0xC0,0xCF,0xF0,0x03,0x0C,0xC1,0x81,0xFC,0x1E,0x1C,0x18,0x03,
   0x0C,0x03,0x0C,0xCC,0xC0,0xCF,0xF0,0x03,0x0C,0xC1,0x83,0xF8,0x1E,0x0F,0xF8,0x03,
   0x06,0x03,0x0D,0x8C,0xC0,0xC0,0x30,0x03,0x18,0x61,0x87,0x00,0x0C,0x07,0xF8,0x03,
   0x03,0x03,0x0D,0x8C,0xC0,0xC0,0x30,0x03,0x1F,0xE1,0x86,0x00,0x0C,0x03,0x98,0x03,
   0x01,0x83,0x0F,0x0C,0x61,0x80,0x30,0x03,0x1F,0xE1,0x86,0x06,0x0C,0x07,0x1B,0x06,
   0x01,0x83,0x0E,0x0C,0x73,0x80,0x30,0x03,0x30,0x31,0x87,0x0E,0x0C,0x0E,0x1B,0x8E,
   0xFF,0xC3,0x0E,0x0C,0x3F,0x00,0x33,0xFF,0x30,0x31,0x83,0xFC,0x0C,0x1C,0x19,0xFC,
   0xFF,0xC3,0x0C,0x0C,0x1E,0x00,0x33,0xFF,0x30,0x31,0x81,0xF8,0x0C,0x18,0x18,0xF8,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0xCE,0x60,0x38,0x3C,0x3C,0x10,0x1E,0x18,0xFE,0x78,0x00,0x00,0x00,0x00,0x00,0x00,
   0xCC,0x70,0x0C,0x66,0x66,0x18,0x0C,0x3C,0xCC,0xCC,0x00,0x00,0x00,0x00,0x00,0x00,
   0x6C,0x78,0x06,0x66,0x66,0x1E,0x0C,0x66,0x8C,0xC6,0x00,0x00,0x00,0x00,0x00,0x00,
   0x6C,0x6C,0x06,0x6E,0x60,0x18,0x0C,0x66,0x4C,0x06,0x00,0x01,0xE0,0x07,0x80,0x00,
   0x3C,0x66,0x3E,0x3C,0x30,0x18,0x0C,0x66,0x7C,0x06,0x00,0x03,0xF0,0x0F,0xC0,0x00,
   0x6C,0xFE,0x66,0x76,0x18,0x18,0x8C,0x7E,0x4C,0x06,0x00,0x07,0x38,0x1C,0xE0,0x00,
   0x6C,0x60,0x66,0x66,0x0C,0x18,0xCC,0x66,0x0C,0xC6,0x00,0x0E,0x1C,0x38,0x70,0x00,
   0xCC,0x60,0x66,0x66,0x66,0x18,0xCC,0x66,0x0C,0xCC,0x00,0x1C,0x0E,0x10,0x38,0x00,
   0xCE,0xF0,0x3C,0x3C,0x7E,0x7E,0xFE,0x66,0x1E,0x78,0x00,0x38,0x07,0x00,0x1C,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x07,0x80,0x1E,0x00,
   0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x07,0xC0,0x1F,0x00,
   0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x07,0xE0,0x1F,0x80,
   0x00,0x00,0x00,0x73,0x80,0x00,0x00,0x00,0x00,0x00,0x03,0xF8,0x07,0xF0,0x1F,0xC0,
   0x00,0x00,0x00,0xE1,0xC0,0x00,0x00,0x00,0x00,0x00,0x03,0xF8,0x07,0xF0,0x1F,0xC0,
   0x00,0x00,0x01,0xC0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xF0,0x00,0x00,
   0x00,0x00,0x01,0x80,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xF0,0x00,0x00,
   0x92,0x49,0x27,0x92,0x79,0x24,0x92,0x49,0x3C,0x92,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0x00,0x00,0x03,0x00,0x38,0x00,0x00,0x00,0xFF,0x00,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0x00,0x00,0x07,0x00,0x18,0x00,0x00,0x01,0xE3,0xC0,0x00,0x00,0x07,0xF1,0xFF,0xFF,
   0x00,0x00,0x06,0x00,0x1C,0x00,0x00,0x03,0x80,0xE0,0x00,0x00,0x07,0xF1,0xFF,0xFF,
   0x00,0x00,0x0E,0x00,0x0C,0x00,0x00,0x07,0x00,0x70,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0x00,0x00,0x0C,0x00,0x0E,0x00,0x00,0x0E,0x00,0x38,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0x00,0x00,0x1C,0x00,0x06,0x00,0x00,0x1C,0x00,0x1C,0x00,0x00,0x07,0xF1,0xFF,0xFF,
   0x00,0x00,0x18,0x00,0x03,0x00,0x00,0x18,0x00,0x06,0x00,0x00,0x07,0xF1,0xFF,0xFF,
   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0xC0,0x00,0x30,0x00,0x01,0x80,0x00,0x60,0x00,0x00,0x00,0x00,0x07,0xF1,0xFF,0xFF,
   0xC0,0x00,0x70,0x00,0x00,0xC0,0x00,0xC0,0x00,0x00,0x00,0x00,0x07,0xF1,0xFF,0xFF,
   0xC0,0x00,0x60,0x00,0x00,0xE0,0x01,0xC0,0x00,0x00,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0xE0,0x00,0xE0,0x00,0x00,0x60,0x03,0x80,0x00,0x00,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0x60,0x00,0xC0,0x00,0x00,0x30,0x03,0x00,0x00,0x00,0x00,0x00,0x07,0xF1,0xFF,0xFF,
   0x70,0x01,0xC0,0x00,0x00,0x38,0x07,0x00,0x00,0x00,0x00,0x00,0x07,0xF1,0xFF,0xFF,
   0x30,0x01,0x80,0x00,0x00,0x1C,0x0E,0x00,0x00,0x00,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0xBA,0x49,0xA4,0x92,0x49,0x2E,0xBE,0x49,0x24,0x92,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0x18,0x03,0x80,0x00,0x00,0x07,0xF0,0x00,0x00,0x00,0x00,0x00,0x07,0xF0,0x00,0x00,
   0x18,0x03,0x00,0x00,0x00,0x03,0xE0,0x00,0x00,0x00,0x00,0x00,0x07,0xF0,0x00,0x00,
   0x0C,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF8,0x07,0xF0,0x1F,0xC0,
   0x0E,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF8,0x07,0xF0,0x1F,0xC0,
   0x06,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x07,0xE0,0x1F,0x80,
   0x07,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x07,0xC0,0x1F,0x00,
   0x03,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x07,0x80,0x1E,0x00,
   0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x07,0x00,0x1C,0x00,
   0xFA,0x2F,0xBE,0x07,0x00,0x60,0x02,0x09,0xC8,0x9C,0x00,0x1C,0x0E,0x10,0x38,0x00,
   0x22,0x20,0x88,0x08,0x80,0x10,0x02,0x0A,0x2D,0xA2,0x00,0x0E,0x1C,0x38,0x70,0x00,
   0x21,0x40,0x88,0x08,0x92,0x08,0x02,0x0A,0x2A,0x82,0x00,0x07,0x38,0x1C,0xE0,0x00,
   0x20,0x87,0x88,0x07,0x12,0x78,0x02,0x0A,0x28,0x9C,0x00,0x03,0xF0,0x0F,0xC0,0x00,
   0x21,0x40,0x88,0x08,0x8C,0x88,0x02,0x0B,0xE8,0xA0,0x00,0x01,0xE0,0x07,0x80,0x00,
   0x22,0x20,0x88,0x08,0x92,0x88,0x02,0x0A,0x28,0xA2,0x00,0x00,0x00,0x00,0x00,0x00,
   0x22,0x2F,0x88,0x07,0x12,0x70,0x3E,0xFA,0x28,0x9C,0x00,0x00,0x00,0x00,0x00,0x00};
#endif

#if CFAL12864G
const uint8_t Mono_1BPP[1024] PROGMEM =
  {0xFF,0xDF,0xEC,0x0C,0x1E,0x3F,0xF0,0x03,0x03,0x0F,0xF1,0xF8,0xC0,0xC7,0xF8,0xF8,
   0xFF,0xDF,0xEC,0x1C,0x3F,0x3F,0xF0,0x03,0x03,0x0F,0xF3,0xFC,0xC0,0xCF,0xF9,0xFC,
   0x60,0x03,0x0C,0x1C,0x73,0x80,0x30,0x03,0x07,0x81,0x87,0x0E,0x61,0x9C,0x1B,0x8E,
   0x60,0x03,0x0C,0x3C,0x61,0x80,0x30,0x03,0x07,0x81,0x86,0x06,0x61,0x98,0x1B,0x06,
   0x30,0x03,0x0C,0x6C,0xC0,0xC0,0x30,0x03,0x07,0x81,0x80,0x06,0x33,0x18,0x18,0x03,
   0x18,0x03,0x0C,0x6C,0xC0,0xC0,0x30,0x03,0x0C,0xC1,0x80,0x0E,0x33,0x18,0x18,0x03,
   0x0C,0x03,0x0C,0xCC,0xC0,0xCF,0xF0,0x03,0x0C,0xC1,0x81,0xFC,0x1E,0x1C,0x18,0x03,
   0x0C,0x03,0x0C,0xCC,0xC0,0xCF,0xF0,0x03,0x0C,0xC1,0x83,0xF8,0x1E,0x0F,0xF8,0x03,
   0x06,0x03,0x0D,0x8C,0xC0,0xC0,0x30,0x03,0x18,0x61,0x87,0x00,0x0C,0x07,0xF8,0x03,
   0x03,0x03,0x0D,0x8C,0xC0,0xC0,0x30,0x03,0x1F,0xE1,0x86,0x00,0x0C,0x03,0x98,0x03,
   0x01,0x83,0x0F,0x0C,0x61,0x80,0x30,0x03,0x1F,0xE1,0x86,0x06,0x0C,0x07,0x1B,0x06,
   0x01,0x83,0x0E,0x0C,0x73,0x80,0x30,0x03,0x30,0x31,0x87,0x0E,0x0C,0x0E,0x1B,0x8E,
   0xFF,0xC3,0x0E,0x0C,0x3F,0x00,0x33,0xFF,0x30,0x31,0x83,0xFC,0x0C,0x1C,0x19,0xFC,
   0xFF,0xC3,0x0C,0x0C,0x1E,0x00,0x33,0xFF,0x30,0x31,0x81,0xF8,0x0C,0x18,0x18,0xF8,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x38,0x60,0x38,0x3C,0x3C,0x10,0x1E,0x18,0xFE,0x78,0x00,0x00,0x00,0x00,0x00,0x00,
   0x6C,0x70,0x0C,0x66,0x66,0x18,0x0C,0x3C,0xCC,0xCC,0x00,0x00,0x00,0x00,0x00,0x00,
   0xC6,0x78,0x06,0x66,0x66,0x1E,0x0C,0x66,0x8C,0xC6,0x00,0x00,0x00,0x00,0x00,0x00,
   0x06,0x6C,0x06,0x6E,0x60,0x18,0x0C,0x66,0x4C,0x06,0x00,0x01,0xE0,0x07,0x80,0x00,
   0x06,0x66,0x3E,0x3C,0x30,0x18,0x0C,0x66,0x7C,0x06,0x00,0x03,0xF0,0x0F,0xC0,0x00,
   0xE6,0xFE,0x66,0x76,0x18,0x18,0x8C,0x7E,0x4C,0x06,0x00,0x07,0x38,0x1C,0xE0,0x00,
   0xC6,0x60,0x66,0x66,0x0C,0x18,0xCC,0x66,0x0C,0xC6,0x00,0x0E,0x1C,0x38,0x70,0x00,
   0xEE,0x60,0x66,0x66,0x66,0x18,0xCC,0x66,0x0C,0xCC,0x00,0x1C,0x0E,0x10,0x38,0x00,
   0xBC,0xF0,0x3C,0x3C,0x7E,0x7E,0xFE,0x66,0x1E,0x78,0x00,0x38,0x07,0x00,0x1C,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x07,0x80,0x1E,0x00,
   0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x07,0xC0,0x1F,0x00,
   0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x07,0xE0,0x1F,0x80,
   0x00,0x00,0x00,0x73,0x80,0x00,0x00,0x00,0x00,0x00,0x03,0xF8,0x07,0xF0,0x1F,0xC0,
   0x00,0x00,0x00,0xE1,0xC0,0x00,0x00,0x00,0x00,0x00,0x03,0xF8,0x07,0xF0,0x1F,0xC0,
   0x00,0x00,0x01,0xC0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xF0,0x00,0x00,
   0x00,0x00,0x01,0x80,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xF0,0x00,0x00,
   0x92,0x49,0x27,0x92,0x79,0x24,0x92,0x49,0x3C,0x92,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0x00,0x00,0x03,0x00,0x38,0x00,0x00,0x00,0xFF,0x00,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0x00,0x00,0x07,0x00,0x18,0x00,0x00,0x01,0xE3,0xC0,0x00,0x00,0x07,0xF1,0xFF,0xFF,
   0x00,0x00,0x06,0x00,0x1C,0x00,0x00,0x03,0x80,0xE0,0x00,0x00,0x07,0xF1,0xFF,0xFF,
   0x00,0x00,0x0E,0x00,0x0C,0x00,0x00,0x07,0x00,0x70,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0x00,0x00,0x0C,0x00,0x0E,0x00,0x00,0x0E,0x00,0x38,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0x00,0x00,0x1C,0x00,0x06,0x00,0x00,0x1C,0x00,0x1C,0x00,0x00,0x07,0xF1,0xFF,0xFF,
   0x00,0x00,0x18,0x00,0x03,0x00,0x00,0x18,0x00,0x06,0x00,0x00,0x07,0xF1,0xFF,0xFF,
   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0xC0,0x00,0x30,0x00,0x01,0x80,0x00,0x60,0x00,0x00,0x00,0x00,0x07,0xF1,0xFF,0xFF,
   0xC0,0x00,0x70,0x00,0x00,0xC0,0x00,0xC0,0x00,0x00,0x00,0x00,0x07,0xF1,0xFF,0xFF,
   0xC0,0x00,0x60,0x00,0x00,0xE0,0x01,0xC0,0x00,0x00,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0xE0,0x00,0xE0,0x00,0x00,0x60,0x03,0x80,0x00,0x00,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0x60,0x00,0xC0,0x00,0x00,0x30,0x03,0x00,0x00,0x00,0x00,0x00,0x07,0xF1,0xFF,0xFF,
   0x70,0x01,0xC0,0x00,0x00,0x38,0x07,0x00,0x00,0x00,0x00,0x00,0x07,0xF1,0xFF,0xFF,
   0x30,0x01,0x80,0x00,0x00,0x1C,0x0E,0x00,0x00,0x00,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0xBA,0x49,0xA4,0x92,0x49,0x2E,0xBE,0x49,0x24,0x92,0xFF,0xFF,0xE7,0xF1,0xFF,0xFF,
   0x18,0x03,0x80,0x00,0x00,0x07,0xF0,0x00,0x00,0x00,0x00,0x00,0x07,0xF0,0x00,0x00,
   0x18,0x03,0x00,0x00,0x00,0x03,0xE0,0x00,0x00,0x00,0x00,0x00,0x07,0xF0,0x00,0x00,
   0x0C,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF8,0x07,0xF0,0x1F,0xC0,
   0x0E,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF8,0x07,0xF0,0x1F,0xC0,
   0x06,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x07,0xE0,0x1F,0x80,
   0x07,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x07,0xC0,0x1F,0x00,
   0x03,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x07,0x80,0x1E,0x00,
   0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x07,0x00,0x1C,0x00,
   0xFA,0x2F,0xBE,0x07,0x00,0x60,0x02,0x09,0xC8,0x9C,0x00,0x1C,0x0E,0x10,0x38,0x00,
   0x22,0x20,0x88,0x08,0x80,0x10,0x02,0x0A,0x2D,0xA2,0x00,0x0E,0x1C,0x38,0x70,0x00,
   0x21,0x40,0x88,0x08,0x92,0x08,0x02,0x0A,0x2A,0x82,0x00,0x07,0x38,0x1C,0xE0,0x00,
   0x20,0x87,0x88,0x07,0x12,0x78,0x02,0x0A,0x28,0x9C,0x00,0x03,0xF0,0x0F,0xC0,0x00,
   0x21,0x40,0x88,0x08,0x8C,0x88,0x02,0x0B,0xE8,0xA0,0x00,0x01,0xE0,0x07,0x80,0x00,
   0x22,0x20,0x88,0x08,0x92,0x88,0x02,0x0A,0x28,0xA2,0x00,0x00,0x00,0x00,0x00,0x00,
   0x22,0x2F,0x88,0x07,0x12,0x70,0x3E,0xFA,0x28,0x9C,0x00,0x00,0x00,0x00,0x00,0x00};
#endif
