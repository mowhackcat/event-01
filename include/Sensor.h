#ifndef SENSOR_H
#define SENSOR_H

#include <Arduino.h>

class Sensor {
private:
const char* nombre;
virtual double leer () const = 0;

virtual const char* unidad() const {return "indefinido";};

public:
explicit Sensor(const char* nombre);

const char* getNombre()const;

void mostrarEstados();

virtual ~Sensor()=default;
};


#endif