#ifndef ELECTROCARDIONGRAMA_H
#define ELECTROCARDIONGRAMA_H

#include "Sensor.h"

class Electrocardiograma : public Sensor{
private:
double leer () const override;

const char* unidad() const override;

public:

explicit Electrocardiograma(const char* nombre);


};

#endif