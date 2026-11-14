#include "Temperatura.h"

Temperatura::Temperatura(const char* nombre):Sensor(nombre){}

double Temperatura::leer() const{
    return analogRead(1);
}

const char* Temperatura::unidad() const{
    return "C";
}