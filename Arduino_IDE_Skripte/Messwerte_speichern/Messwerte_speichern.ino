#include <SdFat.h> // Bibliothek muss zuvor installiert werden
#include <DHT.h>   // Bibliothek muss zuvor installiert werden 

// --- SD-Karte ---
#define SPI_SEED_SD_SCK_MHZ(4)
#define CS_PIN 5
SdFat sd;
File dataFile;
 
// --- DHT22 ---
#define DHTPIN 4 // GPIO-Pin für DHT22
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

// --- Dateiname ---
const char* filename = "messwerte.csv";


void setup() {
  Serial.begin(115200);
  delay(1000);

  // --- DHT22 starten ---
  dht.begin();

  // --- SD-Karte staren ---
  if (!SD.begin(CS_PIN, SPI_SPEED)) {
    if (sd.card()->errorCode()) {
      Serial.println("SD- initialization failed.");
    } else if (sd.vol()->fatType() ==0) {
      Serial.println("Can't find a valid FAT16/FAT32 partition.");
    } else {
      Serial.println("Can't determine error type")
    }
    while(1); // Abbruch
  }

  Serial.println("SD-Karte bereit!");

  // Header in CSV schreiben
  if(sd.exists(filenmae)) {
    Serial.println("Datei exisitiert bereits, neue Daten werden angehängt.");
  } else {
    dataFile = sd.open(filename, FILE_WRITER);
    if (dataFile) {
      dataFile.println("Zeit(ms), temperatur(C), Luftfeuchte(%)");
      dataFile.close();
      Serialprintln("Header in CSV geschrieben");
    } else {
      Serial.println("Fehler beim Erstellen der Datei!");
    }
  }
}

void loop() {
  // --- DHT22 auslesen ---
  float temp = dht.readTemperature();
  float hum = dht.readHumidity;

  if (isnan(temp) ||isnan(hum)) {
    Serial.println("Fehler beim Auslesen des DHT22!");
    return;    
  }

  // --- Zeitstempel in ms ---
  unsigned long t = millis();

  // --- CSV-Zeile ---
  String dataString = String(t) + "," + String(temp) + "," + String(hum);

  // --- Serial Monitor ---
  Serial.println(dataString)

  // --- Auf SD-Karte schreiben ---
  dataFile = sd.Open(filename, FILE_WRITE);
  if(dataFile) {
    dataFile.println(dataString);
    dataFile.close();
  } else {
    Serial.prinln("Fehler beim Öffnen der Datei!");
  }

  delay(1000) // Messintervall: 1 Sekunde
}
