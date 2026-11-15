#include "Acelerometro.h"

Acelerometro::Acelerometro(const char* nombre):Sensor(nombre){}

double Acelerometro::leer() const{
    return 40;
}

const char* Acelerometro::unidad() const {
    return "m/s^2";
}

double Acelerometro::obtenerLecturas() const{
    return leer();
}


