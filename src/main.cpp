#include <Arduino.h>
#include <TFT_eSPI.h>
#include "Electrocardiograma.h"
#include "Acelerometro.h"
#include "Temperatura.h"

Electrocardiograma electrocardiograma("electrocardiograma");
Acelerometro acelerometro("acelerometro");
Temperatura temperatura("temperatura");

TFT_eSPI tft;

void setup() {
    Serial.begin(115200);
    pinMode(TFT_BL, OUTPUT);
    digitalWrite(TFT_BL, HIGH);

    tft.init();
 
        tft.fillScreen(TFT_WHITE);
    tft.setTextColor(TFT_BLACK);
    tft.setTextSize(2);

    tft.setCursor(10, 15);
    tft.println("Lecturas de sensores");
}

void loop() {
electrocardiograma.mostrarEstados();
tft.setCursor(10, 130);
tft.print(electrocardiograma.obtenerLecturas());
    delay(2500);
}