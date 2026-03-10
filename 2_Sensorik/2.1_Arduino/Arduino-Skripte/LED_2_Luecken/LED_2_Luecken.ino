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
  digitalWrite(____, HIGH);
  digitalWrite(____, LOW);
  delay(____); // 3 Sekunde warten

  // LED1 aus, LED2 an
  digitalWrite(____, LOW);
  digitalWrite(____, HIGH);
  delay(____); // 3 Sekunde warten
}



