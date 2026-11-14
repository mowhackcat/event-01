#include <Arduino.h>
#include "Sensor.h"

Sensor::Sensor(const char* nombre):nombre(nombre){}


const char* Sensor::getNombre()const{
    return nombre;
}

void Sensor::mostrarEstados(){
    Serial.print("medidas del sensor: ");
    Serial.print(getNombre());
    Serial.print(": ");
    Serial.print(obtenerLecturas());
    Serial.print(" ");
    Serial.println(unidad());
}