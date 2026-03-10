# RenewableSkills-Online-Materialien Agri-PV und Sensorik
Diese frei zugaengliche Sammlung an Dateien dient als Grundlage zur Vermittlung von Lerninhalten zum Thema Agri-PV und Sensorik. Sie ist im Rahmen des Projekts RenewableSkills entstanden.

---

## Allgemeines:

Die meisten Dateien sind in einem bearbeitbaren Format (PowerPoint und Word) und als PDF vorhanden. Innerhalb der Powerpoint- bzw. PDF-Dateien folgt auf eine Fragefolie mit Luecken stets eine Antwortfolie ohne Luecken, so dass eine interaktive Nutzung der Dateien moeglich ist. In einigen Powerpoint- bzw. PDF-Dateien finden sich Screenshots von Arduino-Skripten. Die dazugehoerigen Ino-Dateien mit und ohne Luecken sind ebenfalls Teil der Sammlung.

Um die INO-Dateien nutzen zu koennen, muss zuvor Arduino-IDE installiert werden. Der Hinweis findet sich auch in den entsprechenden Powerpoint- bzw. PDF-Dateien.

Falls Aenderungen innerhalb einer Datei im bearbeitbaren Format vorgenommen werden, 
bitte die HTWK-Kennzeichnungen entfernen und die Fusszeile entsprechend anpassen. 
("Erstentwurf: Prof. Dr-Ing. Mathias Rudolph, Elena Richter, Ludwig Ostertag, HTWK, Fakultaet ING, Industrielle Messtechnik;
Zweitentwurf: ...).

---

## Vorgesehene Reihenfolge der Nutzung sowie Inhalt der Ordner und Dateien:

1. [Agri-PV](./1_Agri-PV/)--> umfassende Praesentation zu Agri-Pv, inklusive Vorstellung der Anlage der HTWK sowie verbauter elektronischer Komponenten und Sensoren
- 1_Agri-PV.pptx
- 1_Agri-PV.pdf

2. Sensorik
    1. [Arduino](./2_Sensorik/2.1_Arduino/) --> Einfuehrung in die Programmierung von Mikrocontrollern mit Arduino, sowie Materialliste, Steck- und Codevorlage zur Umsetzung von Blinkbeispielen (LED's)
    - 2.1_Arduino.pptx
    - 2.1_Arduino-pdf
    - Arduino-Skripte
        - LED_1
        - LED_1_Luecken
        - LED_2
        - LED_2_Luecken
        - LED_3
        - LED_3_Luecken

    2. [Temperatursensoren](./2_Sensorik/2.2_Temperatursensoren/) --> Funktionsweise von NTC- und PTC-Sensoren, sowie Materialliste, Steck- und Codevorlage zur Inbetriebnahme / zum Test eines NTC-Sensors
    - 2.2_Temperatursensoren.pptx
    - 2.2_Temperatursensoren.pdf
    - Arduino-Skripte
        - NTC
        - NTC_Luecken

    3. [DHT22](./2_Sensorik/2.3_DHT22/) --> Funktionsweise eines DHT22-Sensors (Temperatur- und Luftfeuchtesensor), sowie Materialliste, Steck- und Codevorlage zur Inbetriebnahme / zum Test eines DHT22-Sensors
    - 2.3_DHT22.pptx
    - 2.3_DHT22.pdf
    - Arduino-Skripte
        - DHT22
        - DHT22_Luecken

    4. [LDR_Wokwi](./2_Sensorik/2.4_LDR_Wokwi/) --> Funktionsweise eines LDR's (Fotowiderstand), sowie Steck- und Codevorlage zur simulierten Inbetriebnahme / zum simulierten Test eines LDR's in Wokwi
    - 2.4_LDR_Wokwi.pptx
    - 2.4_LDR_Wokwi.pdf
    - Arduino-Skripte
        - LDR_1_2
        - LDR_1_2_Luecken
        - LDR_3
        - LDR_3_Luecken

    5. [Messwerte speichern](./2_Sensorik/2.5_Messwerte_speichern/) --> Materialliste, Steck- und Codevorlage zur Speicherung von messwerten eines DHT22-Sensors auf einer SD-Karte
    - 2.5_Messwerte_speichern.pptx
    - 2.5_Messwerte_speichern.pdf
    - Arduino-Skripte
        - Messwerte_speichern
        - Messwerte_speichern_Luecken

3. [Projekt](./3_Projekt/)

    1. 3.1_Projektformular.doc --> Formular/Leitfaden fuer eigene Messtechnikprojekte

    2. 3.2_Projektideen.doc --> Vorschlaege fuer eigene Messtechnikprojekte

___

## Hinweise:

1. Bei Durchfuehrung eigener Projekt sollte zuvor festgelegt werden, wie aufwaendig diese sein sollten, am besten ueber die Definition der zu verwendenen Sensorenanzahl. 

2. Dateien koennen auch einzeln genutzt werden, eine vorherige bzw. nachgelagerte Nutzung der anderen Dateien ist nicht zwingend notwendig.

3. Ist die Bereitstellung von Material neben den hier zur Verfuegung gestellten Dateien (z.B. Sensoren, Mikrocontroller, PC's mit Arduino) nicht gewuenscht bzw. nicht moeglich, sollten nur die Dateien 1_Agri-PV und 2.4_LDR_Wokwi verwendet werden. 
