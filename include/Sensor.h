#ifndef SENSOR_H
#define SENSOR_H

#include <string>
#include <iostream>
#include <stdexcept>


class Sensor {
private:
std::string nombre;
public:
explicit Sensor(std::string nombre);

virtual double leer () const = 0;

const std::string& getNombre()const;

virtual const std::string& unidad() const {return "indefinido";};

void mostrarEstados();

virtual ~Sensor()=default;
};


#endif