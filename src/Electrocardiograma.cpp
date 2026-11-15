
#include "Electrocardiograma.h"

Electrocardiograma::Electrocardiograma(const char* nombre):Sensor(nombre){}
double Electrocardiograma::leer() const  {
    return 100000* (5000.0/1023.0);
}

const char* Electrocardiograma::unidad() const{
    return "mV";
}

double Electrocardiograma::obtenerLecturas() const{
    return leer();
}