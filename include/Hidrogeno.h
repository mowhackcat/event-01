#ifndef HIDROGENO_H
#define HIDROGENO_H

#include "Sensor.h"

class Hidrogeno : public Sensor{
private:
double leer () const override;

const char* unidad() const override;

public:

explicit Hidrogeno(const char* nombre);

double obtenerLecturas() const override;


};

#endif