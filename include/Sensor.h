#ifndef SENSOR_H
#define SENSOR_H



class Sensor {
private:
const char* nombre;
public:
explicit Sensor(const char* nombre);

virtual double leer () const = 0;

const char* getNombre()const;

virtual const char* unidad() const {return "indefinido";};

void mostrarEstados();

virtual ~Sensor()=default;
};


#endif