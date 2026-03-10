#define LDR_PIN __

void setup() {
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(_______);

  Serial.print("LDR-Wert: ");
  Serial.print(________);

  delay(500);
}
