#include "Sensor.h"

Sensor::Sensor(std::string nombre):nombre(nombre){}
std::string Sensor::getNombre()const{
    return nombre;
}