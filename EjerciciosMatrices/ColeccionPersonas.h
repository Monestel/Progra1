// Ejercicio 12 - ColeccionPersonas

#ifndef EJERCICIOSMATRICES_COLECCIONPERSONAS_H
#define EJERCICIOSMATRICES_COLECCIONPERSONAS_H

#include <iostream>
#include <sstream>
#include <string>
#include "MatrizDinamicaPers.h"
using namespace std;

class ColeccionPersonas {

private:

    int filas;
    int columnas;
    MatrizDinamicaPers **m;

public:
    /*
     Constructor que recibe filas y columnas
     Destructor que libera memoria
     agregarPersona(int fila, int columna, string nombre, int edad)
     personaMasJoven()
     promedioEdades()
    */

    ColeccionPersonas(int filas, int columnas);
    ~ColeccionPersonas();

    MatrizDinamicaPers personaMasJoven();
    double promedioEdades();
    void agregarPersona(int fila, int columna, string nombre, int edad);
};

#endif //EJERCICIOSMATRICES_COLECCIONPERSONAS_H
