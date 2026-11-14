#include "Acelerometro.h"

Acelerometro::Acelerometro(const char* nombre):Sensor(nombre){}

double Acelerometro::leer() const{
    return analogRead(A2);
}

const char* Acelerometro::unidad() const {
    return "m/s^2";
}



