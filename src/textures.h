// The bitmaps for the little images of next block
static const byte miniBlock[][4] PROGMEM = {
    {0x77, 0x77, 0x00, 0x00}, 
    {0x70, 0x77, 0x70, 0x00}, 
    {0x70, 0x00, 0x70, 0x77}, 
    {0x70, 0x07, 0x70, 0x07}, 
    {0x70, 0x07, 0x00, 0xEE}, 
    {0x70, 0x77, 0x00, 0x0E}, 
    {0x70, 0x07, 0xEE, 0x00}
    };

// The bitmaps for the main blocks
static const int blocks[7] PROGMEM = {
  0x4444, 0x44C0, 
  0x4460, 0x0660, 
  0x06C0, 0x0E40, 
  0x0C60};

// The bitmaps for blocks on the screen
static const byte  blockout[16] PROGMEM = {
  0xF8, 0x00, 0x3E, 0x80, 
  0x0F, 0xE0, 0x03, 0xF8, 
  0x3E, 0x80, 0x0F, 0xE0, 
  0x03, 0xF8, 0x3E, 0x00};

// The bitmaps for ghost blocks on the screen
static const byte  ghostout[16] PROGMEM = {
  0x88, 0x00, 0x22, 0x80, 
  0x08, 0x20, 0x02, 0x88, 
  0x22, 0x80, 0x08, 0x20, 
  0x02, 0x88, 0x22, 0x00};

// Decode lookup to translate block positions to the 8 columns on the screen
static const byte startDecode[11] PROGMEM = {0,1,1,2,3,4,4,5,6,7,8};
static const byte endDecode[11] PROGMEM =   {1,2,3,3,4,5,6,6,7,8,8};

const byte brickLogo[] PROGMEM= {
  0x01, 0x01, 0x01, 0x01, 0x81, 0x81, 0xC1, 0xE1, 
  0xF1, 0xF1, 0x01, 0x11, 0xF1, 0xF1, 0xE1, 0xC1, 
  0xC1, 0x81, 0x81, 0x01, 0x01, 0x01, 0x01, 0x01, 
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
  0x01, 0x01, 0x01, 0x01, 0xFC, 0xFC, 0xFE, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFE, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0x7F, 0x3F, 0xBF, 0x9F, 0xCF, 0xEF, 
  0xE7, 0xF7, 0xFB, 0xE0, 0x01, 0xFB, 0xF3, 0xF7, 
  0xE7, 0xEF, 0xCF, 0xDF, 0xDF, 0xBF, 0xBF, 0x30, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x06, 0xFE, 0xFC, 
  0xFC, 0xFC, 0xF8, 0xF8, 0xF0, 0xF0, 0xE0, 0x00, 
  0x00, 0xFF, 0xFF, 0x7F, 0x7F, 0x3F, 0xBF, 0x9F, 
  0xDF, 0xCF, 0xEF, 0xEF, 0xE4, 0x00, 0xF7, 0xE7, 
  0xEF, 0xEF, 0xCF, 0xDF, 0xDF, 0x9F, 0xBF, 0xBF, 
  0x3F, 0x00, 0x07, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0xFC, 0xFE, 0xFE, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0x80, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x0E, 
  0x3E, 0x1E, 0x1C, 0x1D, 0x0D, 0x09, 0x03, 0x03, 
  0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x3F, 0x00, 0x3F, 
  0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0xFF, 0xFF, 
  0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x83, 0x83, 
  0x83, 0x89, 0x8D, 0x8D, 0x8C, 0x8E, 0x8E, 0x8E, 
  0x8F, 0x8F, 0x9F, 0x8F, 0x8F, 0x8F, 0x8F, 0x87, 
  0x86, 0x86, 0x82, 0x82, 0x82, 0x80, 0x80, 0x80,
  0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80};
