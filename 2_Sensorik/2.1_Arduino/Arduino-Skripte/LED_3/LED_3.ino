// GPIO-Pins, an die die LED's angeschlossen sind
const int leds[] = {23, 25, 26, 27, 32};
const int numLEDs = 5;

void setup() {
  // Alle Pins als Ausgänge festlegen
  for(int i = 0; i < numLEDs; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // LEDs von vorne nach hinten
  for(int i = 0; i < numLEDs; i++) {
    digitalWrite(leds[i], HIGH);   // LED an
    delay(200);                  // kurze Pause
    digitalWrite(leds[i], LOW); // LED aus
  }

  // LEDs von hinten nach vorne
  for(int i = numLEDs-2; i > 0; i--) {  // -2 und > 0 damit die äußeren LEDs nicht doppelt blinken     
      digitalWrite(leds[i], HIGH);     // LED an
    delay(200);                      // kurze Pause
    digitalWrite(leds[i], LOW);     // LED aus 
  }    
}




