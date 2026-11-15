#include "Pulso.h"

Pulso::Pulso(const char* nombre):Sensor(nombre){}

double Pulso::leer() const{
    return random(0, 89);
}

const char* Pulso::unidad() const{
    return "bpm";
}

double Pulso::obtenerLecturas() const{
    return leer();
}