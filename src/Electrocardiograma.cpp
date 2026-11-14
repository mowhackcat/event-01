#include "Electrocardiograma.h"
#include <Arduino.h


 
Electrocardiograma::Electrocardiograma(std ::string nombre):Sensor(nombre){}
double Electrocardiograma::leer() const  {
    return 0;
}

const std::string& Electrocardiograma::unidad() const{
    return "mV";
}