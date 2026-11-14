#ifndef SENSOR_H
#define SENSOR_H


class SENSOR {
private:


public:
virtual double leer () const = 0;

virtual double mostrar() const= default;
virtual ~Sensor()= default;
}


#endif