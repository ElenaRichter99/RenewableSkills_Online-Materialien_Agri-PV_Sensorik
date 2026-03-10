#include <DHT.h> // Bibliothek muss zuvor installiert werden

#define DHTPIN 4
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200); // Baud-Rate Serieller Monitor
  dht.begin();
}

void loop() {
  delay(2000);

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("fehler beim Lesen des DHT22!");
  }

  Serial.print("Luftfeuchte: ");
  Serial.print(humidity);
  Serial.println(" % ");
  
  Serial.print("Temperatur: ");
  Serial.print(temperature);
  Serial.println(" °C");
}

