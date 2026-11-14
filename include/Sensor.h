#ifndef SENSOR_H
#define SENSOR_H

#include <string>


class Sensor {
private:
std::string nombre;
public:
explicit Sensor(std::string nombre);
virtual double leer () const = 0;
std::string getNombre()const;
virtual std::string unidad() const {return "indefinido";};
virtual ~Sensor()=default;
};


#endif