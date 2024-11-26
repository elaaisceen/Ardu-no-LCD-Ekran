//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Sevim Muhammed Furkan Hiranur");
  lcd.setCursor(2,1);
  lcd.print("<3 <3 <3 <3 <3 <3 <3 <3");
  /*
   lcd.setCursor(0,2);
  lcd.print("Hira");
   lcd.setCursor(2,3);
  lcd.print("Furkan"); */

 /* for (int position = 0; position < 16; position++)
  lcd.scrollDisplayLeft();
    delay(300);*/

 
}
/*for (int position = 0; position < 16; position++) {
    // Yazıyı sola kaydır
    lcd.scrollDisplayLeft();
    delay(300);  // Kayma hızı (300 milisaniye)
    lcd.clear();  // Ekranı temizle
  lcd.setCursor(0, 0);  // İmleci başa al
  lcd.print("Merhaba Arduino!"); */

void loop()
{
  
  // Yazıyı sola kaydır
  for (int position = 0; position < 1; position++) 
    // Yazıyı sola kaydır
    lcd.scrollDisplayLeft();
    delay(1000);  
    
}
