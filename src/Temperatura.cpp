#include "Temperatura.h"

Temperatura::Temperatura(const char* nombre):Sensor(nombre){}

double Temperatura::leer() const{
    return analogRead(37);
}

const char* Temperatura::unidad() const{
    return "C";
}

double Temperatura::obtenerLecturas() const{
    return leer();
}