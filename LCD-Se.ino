#include <LiquidCrystal.h>
#include <Servo.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
Servo K;
Servo J;
void setup() {
  
 Serial.begin(9600);
 
  lcd.begin(16, 2);
  
  
   K.attach(6);
   J.attach(9);
}

void loop() {
  
  if (Serial.read() == '0')
  {}
  if( Serial.read() == '1'){
    
  lcd.setCursor(0,0);
  lcd.print("Hi");
  lcd.setCursor(0,1);
  lcd.print("A");
  
  K.write(20);
  delay(1000);
  K.write(90);
  J.write(20);
  delay(1000);
  J.write(90);
  
 
  
  }
  
  
}
