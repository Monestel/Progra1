// Ejercicio 9

#ifndef EJERCICIOSMATRICES_MATRIZHORARIOS_H
#define EJERCICIOSMATRICES_MATRIZHORARIOS_H

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class MatrizHorarios {

private:

    static const int DIAS = 7;
    static const int HORAS = 8;
    string m[DIAS][HORAS];

public:
    /*
     Constructor que inicializa todo en ""
     agregarClase(int dia, int hora, string nombreClase)
     clasesPorDia(int dia)
     diaMasOcupado()
     estaLibre(int dia, int hora)
    */

    MatrizHorarios();
    void limpiar();
    string toString();
    void agregarClase(int dia, int hora, string nombreClase);
    int clasesPorDia(int dia);
    int diaMasOcupado();
    bool estaLibre(int dia, int hora);
};

#endif //EJERCICIOSMATRICES_MATRIZHORARIOS_H
