// Ejercicio 6

#ifndef EJERCICIOSMATRICES_TEMPERATURAS_H
#define EJERCICIOSMATRICES_TEMPERATURAS_H

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class MatrizTemperaturas {

private:

    static const int DIAS = 7;
    static const int CIUDADES = 4;
    double m[DIAS][CIUDADES];

public:
    /*
     Constructor que inicializa todas las temperaturas en 0
     registrarTemperatura(int dia, int ciudad, double temp)
     temperaturaPromedioCiudad(int ciudad)
     diaMasCaliente()
     ciudadMasFria()
    */

    MatrizTemperaturas();
    void registrarTemperatura(int dia, int ciudad, double temp);
    double temperaturaPromedioCiudad(int ciudad);
    int diaMasCaliente();
    int ciudadMasFria();
    string toString();
};

#endif //EJERCICIOSMATRICES_TEMPERATURAS_H
