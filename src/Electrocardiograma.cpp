
#include "Electrocardiograma.h"



Electrocardiograma::Electrocardiograma(const char* nombre):Sensor(nombre){}
double Electrocardiograma::leer() const  {
    return analogRead(10) * (5.0/1023.0);
}

const char* Electrocardiograma::unidad() const{
    return "mV";
}