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
