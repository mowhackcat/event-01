#include "Dispositivo.h"



Dispositivo::Dispositivo(const char* nombre):nombre(nombre){}
bool Dispositivo::registrarSensores(Sensor* sensores){
this->sensores.push_back(sensores);
return true;
}


void Dispositivo::mostrarCantidaddes() const{
    for(size_t i =0; i < sensores.size(); i++)
    this->sensores[i]->mostrarEstados();
}