#define LDR_PIN __

void setup() {
  Serial.begin(115200); // Baud-Rate Serieller Monitor
}

void loop() {
  int ldrValue = analogRead(_______);

  Serial.print("LDR-Wert: ");
  Serial.print(________);

  delay(500);
}



