#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0X27, 16, 2); 




int contador = 0;
void setup() {
  Serial.begin(300);
  lcd.init();             //Inicia lcd    
  lcd.backlight();        //Retroiluminación lcd     
  pinMode(3, INPUT);
  pinMode(4, INPUT);

}

void loop() {

  if (digitalRead(3) == HIGH) {
    if (digitalRead(3) == LOW) {
    lcd.clear();
    contador++; 
    lcd.setCursor(4,0);
    lcd.print("Pizarras");
    lcd.setCursor(7,1);
    lcd.print(contador);
    }
  }

  if (digitalRead(4) == HIGH) {
    if (digitalRead(4) == LOW) {
    lcd.clear();
    contador = 0;
    lcd.setCursor(4,0);
    lcd.print("Pizarras");
    lcd.setCursor(7,1);
    lcd.print(contador);
 
    }
  }

}






