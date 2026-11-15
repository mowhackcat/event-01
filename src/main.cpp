
#include <Arduino.h>
#include <TFT_eSPI.h>
#include "Electrocardiograma.h"
#include "Radiometro.h"
#include "Temperatura.h"
#include "Hidrogeno.h"
#include "Dispositivo.h"
#include "pulso.h"

TFT_eSPI tft;
Electrocardiograma electrocardiograma("electrocardiograma");
Radiometro radiometro("radiometro");
Temperatura temperatura("temperatura");
Hidrogeno hidrogeno("hidrogeno");
Pulso pulso("pulso");

Dispositivo dispositivo("pulsera");

void setup() {
dispositivo.registrarSensores(&electrocardiograma);
dispositivo.registrarSensores(&radiometro);
dispositivo.registrarSensores(&temperatura);
dispositivo.registrarSensores(&hidrogeno);
dispositivo.registrarSensores(&pulso);

Serial.begin(115200);
  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, HIGH);

  tft.init();
  tft.setRotation(1); 
  tft.fillScreen(TFT_WHITE);
  tft.setTextSize(2); 
}

void loop() {
tft.fillScreen(TFT_WHITE);

tft.setCursor(10, 45);
tft.setTextColor(TFT_BLUE, TFT_WHITE);
tft.print("electrocardiograma: ");
tft.print(electrocardiograma.obtenerLecturas());
tft.print(" mV");



tft.setCursor(10, 80);
tft.setTextColor(TFT_DARKGREEN, TFT_WHITE);
tft.print("radiometro: ");
tft.print(radiometro.obtenerLecturas());
tft.print(" bpm");


tft.setCursor(10, 115);
tft.setTextColor(TFT_RED, TFT_WHITE);
tft.print("temperatura: ");
tft.print(temperatura.obtenerLecturas());
tft.print(" °C");


tft.setCursor(10, 150);
tft.setTextColor(TFT_SKYBLUE, TFT_WHITE);
tft.print("hidrogeno: ");
tft.print(hidrogeno.obtenerLecturas());
tft.print(" ppm ");

tft.setCursor(10, 185);
tft.setTextColor(TFT_ORANGE, TFT_WHITE);
tft.print("pulso: ");
tft.print(pulso.obtenerLecturas());
tft.print(" bpm");

dispositivo.mostrarCantidaddes();

delay(500);


}
