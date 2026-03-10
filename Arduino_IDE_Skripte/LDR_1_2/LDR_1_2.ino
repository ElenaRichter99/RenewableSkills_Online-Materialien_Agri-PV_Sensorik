#define LDR_PIN 34

void setup() {
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);

  Serial.print("LDR-Wert: ");
  Serial.print(ldrValue);

  delay(500);
}
