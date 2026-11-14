#include "Pulso.h"

Pulso::Pulso(const char* nombre):Sensor(nombre){}

double Pulso::leer() const{
    return 1;
}

const char* Pulso::unidad() const{
    return "bpm";
}