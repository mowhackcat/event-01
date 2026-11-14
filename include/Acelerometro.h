#ifndef ACELEROMETRO_H
#define ACELEROMETRO_H

#include "Sensor.h"


class Acelerometro : public Sensor{
private:
double leer () const override;

const char* unidad() const override;

public:
explicit Acelerometro(const char* nombre);

};

#endif