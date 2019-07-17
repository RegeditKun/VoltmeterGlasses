#include <U8x8lib.h>
#include <SoftwareSerial.h>
SoftwareSerial BTserial(8,7);

U8X8_SSD1306_128X64_NONAME_
SW_I2C u8x8(/* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE);

String string;
char data;

