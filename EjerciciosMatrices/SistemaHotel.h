#ifndef EJERCICIOSMATRICES_SISTEMAHOTEL_H
#define EJERCICIOSMATRICES_SISTEMAHOTEL_H

#include <string>
using namespace std;

class Habitacion {

private:

    int numero;
    string tipo;
    double precio;

public:
    Habitacion();
    Habitacion(int numero, string tipo, double precio);

    int getNumero();
    string getTipo();
    double getPrecio();
};

#endif //EJERCICIOSMATRICES_SISTEMAHOTEL_H
