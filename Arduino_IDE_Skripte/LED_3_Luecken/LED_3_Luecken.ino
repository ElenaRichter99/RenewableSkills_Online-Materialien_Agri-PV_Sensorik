// GPIO-Pins, an die die LED's angeschlossen sind
const int leds[] = {23, 25, 26, 27, 32};
const int numLEDs = _;

// Blink-Intervall in Millisekunden
const int delayTime = 500;

void setup() {
  // Alle Pins als Ausgänge festlegen
  for(int i = 0; i < numLEDs; i++) {
    pinMode(leds[_], OUTPUT);
  }
}

void loop() {
  // LEDs von vorne nach hinten
  for(int i = 0; i < numLEDs; i++) {
    digitalWrire(leds[_], HIGH;   // LED an
    delay(200);                  // kurze Pause
    digitalWrite(leds[_], LOW); // LED aus
  }

  // LEDs von hinten nach vorne
  for(int i = numLEDs__; i > _; i__) {  // -2 und > 0 damit die äußeren LEDs nicht doppelt blinken}      
      digitalWrire(leds[_], HIGH;     // LED an
    delay(200);                      // kurze Pause
    digitalWrite(leds[_], LOW);     // LED aus 
  }    
}

