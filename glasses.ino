#include <U8x8lib.h>
#include <SoftwareSerial.h>
SoftwareSerial BTserial(8,7);

U8X8_SSD1306_128X64_NONAME_
SW_I2C u8x8(/* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE);

String string;
char data;

void setup(){ 
  BTserial.begin(38400);
  
  u8x8.begin();
  u8x8.setPowerSave(0);

  u8x8.setFont(u8x8_font_artossans8_u);
  u8x8.draw2x2String(1,3,"WELCOME");
  delay(5000);
  u8x8.clearDisplay();
}