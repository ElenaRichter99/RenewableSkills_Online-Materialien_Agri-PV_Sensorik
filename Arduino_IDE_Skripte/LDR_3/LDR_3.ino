# include <Wire.h> 
# include <LuquidCrystal_I2C.h> // Bibliothek muss zuvor installiert werden 

#define LDR_PIN 34
#define LCD_ADDR 0x27 // I2C-Adresse LCD (typisch 0x27)
#define LCD_COLS 16
#define LCD_ROWS 2

LiquidCrystal_I2C_lcd(LCD_ADDR, LCD_COLS; LCD_ROWS);

void setup() {
  ldf.init();
  lcd.backlight();
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);
  float voltage = ldrValue * (3.3 / 4095.0);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("LDR-Wert: ");
  lcd.setCursor(0, 1);
  lcd.print(ldrValue);

  Serial.print(ldrValue);

  delay(5000);
}

