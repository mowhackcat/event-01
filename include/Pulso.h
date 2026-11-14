#ifndef PULSO_H
#define PULSO_H


#include "Sensor.h"

class Pulso : public Sensor{
private:
double leer () const override;

const char* unidad() const override;

public:
explicit Pulso(const char* nombre);
};

#endif