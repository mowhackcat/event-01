#include <Arduino.h>
#include "Electrocardiograma.h"

Electrocardiograma electrocardiograma("electrocardiograma");

void setup() {
    Serial.begin(115200);
}

void loop() {
    electrocardiograma.mostrarEstados();
    delay(500);
}