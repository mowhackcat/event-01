#include "Radiometro.h"

Radiometro::Radiometro(const char* nombre):Sensor(nombre){}

double Radiometro::leer() const{
    return random(0,599);
}

const char* Radiometro::unidad() const{
    return "bpm";
}

double Radiometro::obtenerLecturas() const{
    return leer();
}