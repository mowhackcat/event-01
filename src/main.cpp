#include <Arduino.h>
#include "Electrocardiograma.h"

Electrocardiograma ecg("ECG");

void setup() {
    Serial.begin(115200);
}

void loop() {
    ecg.mostrarEstados();
    delay(500);
}