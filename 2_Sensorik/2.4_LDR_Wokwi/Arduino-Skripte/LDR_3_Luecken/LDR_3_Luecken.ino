#include <Wire.h> 
#include <LiquidCrystal_I2C.h> // Bibliothek muss zuvor installiert werden 

#define LDR_PIN 34
#define LCD_ADDR 0x27 // I2C-Adresse LCD (typisch 0x27)
#define LCD_COLS 16
#define LCD_ROWS 2

LiquidCrystal_I2C_lcd(________, ________, ________);

void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(115200); // Baud-Rate Serieller Monitor
}

void loop() {
  int ldrValue = analogRead(_______);
  float voltage = ldrValue * (3.3 / 4095.0);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("LDR-Wert: ");
  lcd.setCursor(0, 1);
  ___.print(________);

  Serial.print(ldrValue);

  delay(5000);
}




