#include <Arduino.h> // Bibliothek muss zuvor installiert werden 

#define ADC_PIN 34
#define VCC 3.3
#define ADC_MAX 4095.0

#define R_FIXED 10000.0 // 10kΩ
#define R0 5000.0       // NTC @ 25 °C
#define BETA 4069.0     // B-Wert
#define T0 298.15      // 25 °C in Kelvin

void setup() {
  Serial.begin(115200); // Baud-Rate Serieller Monitor
  analogReadResolution(12);
}

void loop() {
  int adcValue = analogRead(ADC_PIN);

  //Spannung berechnen
  // lineare Zuordnung: VCC / ADC_AMX = voltage / adcValue
  float voltage = adcValue * (VCC / ADC_MAX);

  // NTC-Widerstand berechnen 
  //Spannungsteiler-Gleichung: U1 = (Uges*R1) / (R1+R2) --> voltage = (VCC*rNTC+R_FIXED)
  float rNTC = R_FIXED * (voltage / (VCC - voltage));

  // Beta-Formel
  float temperatureK = 
    (BETA / 
    (log(rNTC / R0) + BETA / T0));
  
  float temperatureC = temperatureK - 273.15;

  Serial.print("R_NTC = ");
  Serial.print(rNTC);
  Serial.print(" Ohm | T = ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(1000);
}


