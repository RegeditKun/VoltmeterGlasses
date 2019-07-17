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

void loop(){
u8x8.setFont(u8x8_font_pressstart2p_f);
u8x8.setCursor(0, 0);
u8x8.print("Nilai Tegangan");
u8x8.setCursor(8, 5);
u8x8.print("Volt");
  
  if (BTserial.available() > 0){
    data = BTserial.read();
    string += data;
    u8x8.setFont(u8x8_font_amstrad_cpc_extended_n);
    u8x8.setCursor(2, 5);
    u8x8.print(string);    
    while (string.length() > 4)
    {string = "";}
  }

}