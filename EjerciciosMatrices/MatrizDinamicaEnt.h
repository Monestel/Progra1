// Ejercicio 11

#ifndef EJERCICIOSMATRICES_MATRIZDINAMICAENT_H
#define EJERCICIOSMATRICES_MATRIZDINAMICAENT_H

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class MatrizDinamicaEnt {

private:

    int filas;
    int columnas;
    int **m;

public:
    /*
     Constructor que recibe filas y columnas
     Destructor que libera memoria
     insertar(int fila, int columna, int valor)
     obtener(int fila, int columna)
     toString()
    */

    MatrizDinamicaEnt(int filas, int columnas);
    ~MatrizDinamicaEnt();
    string toString();
    void insertar(int fila, int columna, int valor);
    int obtener(int fila, int columna);
};

#endif //EJERCICIOSMATRICES_MATRIZDINAMICAENT_H
