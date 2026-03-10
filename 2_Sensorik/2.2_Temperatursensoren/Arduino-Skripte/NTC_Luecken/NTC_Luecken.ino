#include <Arduino.h> // Bibliothek muss zuvor installiert werden 

#define ADC_PIN 34
#define VCC 3.3
#define ADC_MAX 4095.0

#define R_FIXED 10000.0 // 10kΩ
#define R0 ______       // NTC @ 25 °C
#define BETA ______     // B-Wert
#define T0 298.15      // 25 °C in Kelvin

void setup() {
  Serial.begin(115200); // Baud-Rate Serieller Monitor
  analogReadResolution(12);
}

void loop() {
  int adcValue = analogRead(_______);

  //Spannung berechnen
  // lineare Zuordnung: VCC / ADC_AMX = voltage / adcValue
  float voltage = __________________________;

  // NTC-Widerstand berechnen 
  //Spannungsteiler-Gleichung: U1 = (Uges*R1) / (R1+R2) --> voltage = (VCC*rNTC+R_FIXED)
  float rNTC = R_FIXED * (voltage / (VCC - voltage));

  // Beta-Formel
  float temperatureK = 
    (BETA / 
    (__________________________));
  
  float temperatureC = temperatureK - ______;

  Serial.print("R_NTC = ");
  Serial.print(____);
  Serial.print(" Ohm | T = ");
  Serial.print(____________);
  Serial.println(" °C");

  delay(1000);
}
