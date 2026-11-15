#include <Arduino.h>
#include <TFT_eSPI.h>
#include <math.h>
#include "Electrocardiograma.h"
#include "Radiometro.h"
#include "Temperatura.h"
#include "Hidrogeno.h"


TFT_eSPI tft;
Electrocardiograma electrocardiograma("electrocardiograma");
Radiometro radiometro("radiometro");
Temperatura temperatura("temperatura");
Hidrogeno hidrogeno("hidrogeno");


void setup() {
    Serial.begin(115200);
pinMode(TFT_BL, OUTPUT);
    digitalWrite(TFT_BL, HIGH);

    tft.init();

for (int rotacion = 0; rotacion < 4; rotacion++) {
tft.setRotation(rotacion);
tft.fillScreen(TFT_WHITE);

Serial.printf("Rotacion %d: %d x %d\n",
rotacion, tft.width(), tft.height());
delay(4000);
}
}

void loop() {
tft.fillScreen(TFT_WHITE);




tft.fillRect(0, 45, electrocardiograma.obtenerLecturas(), 35, TFT_BLUE);
tft.fillRect(0, 80, radiometro.obtenerLecturas(), 35, TFT_GREEN);
tft.fillRect(0, 115, temperatura.obtenerLecturas(), 35, TFT_RED);
tft.fillRect(0, 150, hidrogeno.obtenerLecturas(),35, TFT_SKYBLUE);
tft.setCursor(20, 45);
electrocardiograma.mostrarEstados();
radiometro.mostrarEstados();
temperatura.mostrarEstados();
hidrogeno.mostrarEstados();


delay(700);

}