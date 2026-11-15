#ifndef DISPOSITIVO_H
#define DISPOSITIVO_H


#include "Sensor.h"
#include <vector>

class Dispositivo {
    private:
    const char* nombre;
    std::vector<Sensor*> sensores;

    public:
    explicit Dispositivo(const char* nombre);

    bool registrarSensores(Sensor* sensores);

    void mostrarCantidaddes() const;

};

#endif