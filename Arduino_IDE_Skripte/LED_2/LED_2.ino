// GPIO-Pins, an dem die LED's angeschlossen sind
const int led1 = 23;
const int led2 = 25;

void setup() {
  // Pins aus Ausgänge festlegen
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // LED1 an, LED2 aus
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(3000); // 3 Sekunde warten

  // LED1 aus, LED2 an
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(3000); // 3 Sekunde warten
}