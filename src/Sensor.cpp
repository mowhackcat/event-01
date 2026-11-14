#include "Sensor.h"

Sensor::Sensor(std::string nombre):nombre(nombre){}


const std::string& Sensor::getNombre()const{
    return nombre;
}

void Sensor::mostrarEstados(){
    std::cout << "medidas del sensor" << getNombre() << ":"<<
    leer() << ":" << unidad() <<"\n";
}