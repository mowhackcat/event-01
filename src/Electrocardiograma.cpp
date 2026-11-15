
#include "Electrocardiograma.h"


Electrocardiograma::Electrocardiograma(const char* nombre):Sensor(nombre){}
double Electrocardiograma::leer() const  {
    return random(0, 100);
}

const char* Electrocardiograma::unidad() const{
    return "mV";
}

double Electrocardiograma::obtenerLecturas() const{
    return leer();
}