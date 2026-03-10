#include <DHT.h> // Bibliothek muss zuvor installiert werden

#define DHTPIN 4
#define DHTTYPE DHT22

DHT dht(______, DHTTYPE);

void setup() {
  Serial.begin(115200); // Baud-Rate Serieller Monitor
  dht.begin();
}

void loop() {
  delay(2000);

  float humidity = dht.readHumidity();
  float temperature = dht._______________();
  
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("fehler beim Lesen des DHT22!");
  }

  Serial.print("Luftfeuchte: ");
  Serial.print(________);
  Serial.println(" _ ");
  
  Serial.print("Temperatur: ");
  Serial.print(___________);
  Serial.println(" __");
}

