#ifndef ELECTROCARDIONGRAMA_H
#define ELECTROCARDIONGRAMA_H

#include "Sensor.h"
#include <Arduino.h>
class Electrocardiograma : public Sensor{
private:

public:

explicit Electrocardiograma(const char* nombre);
double leer () const override;
const char* unidad() const override;
};

#endif