#include <DHT.h> // Bibliothek muss zuvor installiert werden

#define DHTPIN 4
#define DHTTYPE DHT22

DHT dht(______, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);

  float humidity = dht.readHumidity();
  float teamperature = __________________();
  
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("fehler beim Lesen des DHT22!");
    }

  Serial.print("Luftfeuchte: ");
  Serial.print(________);
  Serial.print("___");
  
  Serial.print("Temperatur: ");
  Serial.print(________);
  Serial.print("___");
}