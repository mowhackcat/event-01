
#include "Hidrogeno.h"


Hidrogeno::Hidrogeno(const char* nombre):Sensor(nombre){}
double Hidrogeno::leer() const  {
    return random(120, 150);
}

const char* Hidrogeno::unidad() const{
    return "ppm";
}

double Hidrogeno::obtenerLecturas() const{
    return leer();
}