#include "Temperatura.h"

Temperatura::Temperatura(const char* nombre):Sensor(nombre){}

double Temperatura::leer() const{
    return random(0, 50);
}

const char* Temperatura::unidad() const{
    return "C";
}

double Temperatura::obtenerLecturas() const{
    return leer();
}