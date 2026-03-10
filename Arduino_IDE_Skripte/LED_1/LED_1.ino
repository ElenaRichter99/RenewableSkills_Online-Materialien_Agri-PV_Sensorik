// GPIO-Pin, an dem die LED angeschlossen ist
const int led = 23;

void setup() {
  // Pin als Ausgang festlegen
  pinMode(led, OUTPUT);
}

void loop() {
  // LED einschalten
  digitalWrite(led, HIGH);
  delay(1000); // 1 Sekunde warten

  // LED ausschalten
  digitalWrite(led, LOW);
  delay(1000); // 1 Sekunde warten
}