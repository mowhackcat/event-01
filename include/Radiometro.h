#ifndef RADIOMETRO_H
#define RADIOMETRO_H

#include "Sensor.h"

class Radiometro : public Sensor{
private:
double leer () const override;

const char* unidad() const override;

public:

explicit Radiometro(const char* nombre);

double obtenerLecturas() const override;


};

#endif