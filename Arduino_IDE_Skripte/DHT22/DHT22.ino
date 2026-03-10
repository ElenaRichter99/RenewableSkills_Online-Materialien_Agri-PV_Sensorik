#include <DHT.h> // Bibliothek muss zuvor installiert werden

#define DHTPIN 4
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);

  float humidity = dht.readHumidity();
  float teamperature = dht.readTemperature();
  
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("fehler beim Lesen des DHT22!");
    }

  Serial.print("Luftfeuchte: ");
  Serial.print(humidity);
  Serial.print("%/t");
  
  Serial.print("Temperatur: ");
  Serial.print(temperature);
  Serial.print(" °C");
}
