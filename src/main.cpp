#include <Arduino.h>
#include "Electrocardiograma.h"
#include "Acelerometro.h"
#include "Temperatura.h"

Electrocardiograma electrocardiograma("electrocardiograma");
Acelerometro acelerometro("acelerometro");
Temperatura temperatura("temperatura");
void setup() {
    Serial.begin(115200);
    pinMode(13, OUTPUT);
}

void loop() {
    if(temperatura.obtenerLecturas() > 41 || temperatura.obtenerLecturas() < -20) {
        digitalWrite(13, HIGH);
    } else {
        digitalWrite(13, LOW);
    }
    electrocardiograma.mostrarEstados();
    acelerometro.mostrarEstados();
    delay(500);
}