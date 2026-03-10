#include <SdFat.h> // Bibliothek muss zuvor installiert werden
#include <DHT.h> // Bibliothek muss zuvor installiert werden

// --- SD-Karte ---
#define CS_PIN _
#define SPI_SPEED SD_SCK_MHZ(4)

SdFat sd;
File dataFile;

// --- DHT22 ---
#define DHTPIN _
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

// --- Dateiname ---
const char* filename = "messwerte.csv";

void setup() {
  Serial.begin(______); // Baud-Rate Serieller Monitor
  delay(1000);

  // --- DHT22 starten ---
  dht.begin();

  // --- SD-Karte starten ---
  if (!sd.begin(CS_PIN, SPI_SPEED)) {
    if (sd.card()->errorCode()) {
      Serial.println("SD-Initialisierung fehlgeschlagen.");
    } else if (sd.vol()->fatType() == 0) {
      Serial.println("Keine gueltige FAT16/FAT32-Partition gefunden.");
    } else {
      Serial.println("Fehlertyp konnte nicht bestimmt werden.");
    }
    while (1);
  }

  Serial.println("SD-Karte bereit!");

  // Header in CSV schreiben
  if (sd.exists(filename)) {
    Serial.println("Datei existiert bereits, neue Daten werden angehaengt.");
  } else {
    dataFile = sd.open(filename, FILE_WRITE);
    if (dataFile) {
      dataFile.println("____(__),__________(_),___________(_)");
      dataFile.close();
      Serial.println("Header in CSV geschrieben.");
    } else {
      Serial.println("Fehler beim Erstellen der Datei!");
    }
  }
}

void loop() {
  // --- DHT22 auslesen ---
  float temp = dht.readTemperature();
  float hum = dht.____________();

  if (isnan(temp) || isnan(hum)) {
    Serial.println("Fehler beim Auslesen des DHT22!");
    return;
  }

  // --- Zeitstempel in ms ---
  unsigned long t = millis();

  // --- CSV-Zeile ---
  String dataString = String(_) + "," + String(____) + "," + String(___);

  // --- Serial Monitor ---
  Serial.println(dataString);

  // --- Auf SD-Karte schreiben ---
  dataFile = sd.open(filename, FILE_WRITE);
  if (dataFile) {
    dataFile.println(dataString);
    dataFile.close();
  } else {
    Serial.println("Fehler beim Oeffnen der Datei!");
  }

  delay(1000); // Messintervall: _ Sekunde
}
