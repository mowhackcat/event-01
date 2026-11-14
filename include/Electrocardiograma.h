#ifndef ELECTROCARDIONGRAMA_H
#define ELECTROCARDIONGRAMA_H

#include "Sensor.h"

class Electrocardiograma : public Sensor{
private:

public:

explicit Electrocardiograma(std::string nombre);
virtual double leer () const override;
};

#endif