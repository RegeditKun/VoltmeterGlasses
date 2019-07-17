#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>

SoftwareSerial BTserial(5, 6);
LiquidCrystal_I2C lcd(0x3F , 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

int analogInput = 0;
float vout = 0.0;
float vin = 0.0;
float R1 = 100000.0;
float R2 = 10000.0; 
int value = 0;
char data[5];

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>

SoftwareSerial BTserial(5, 6);
LiquidCrystal_I2C lcd(0x3F , 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

int analogInput = 0;
float vout = 0.0;
float vin = 0.0;
float R1 = 100000.0;
float R2 = 10000.0; 
int value = 0;
char data[5];

void setup(){
  BTserial.begin(38400);   
  pinMode(analogInput, INPUT);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("DC VOLTMETER"); 
  lcd.setCursor(0, 1);
  lcd.print("INPUT V= "); 
}