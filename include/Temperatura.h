#ifndef TEMPERATURA_H
#define TEMPERATURA_H

#include "Sensor.h"

class Temperatura : public Sensor {
private:
double leer () const override;

const char* unidad() const override;

public:
explicit Temperatura(const char* nombre);

double obtenerLecturas() const override;

};

#endif