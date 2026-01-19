// Ejercicio 7

#ifndef EJERCICIOSMATRICES_MATRIZSIMETRICA_H
#define EJERCICIOSMATRICES_MATRIZSIMETRICA_H

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class MatrizSimetrica {

private:

    static const int N = 4;
    int m[N][N];

public:
    /*
     Constructor que inicializa la matriz en 0
     esSimetrica(): retorna true si m[i][j] == m[j][i]
     transponer(): transpone la matriz
     esDiagonal(): retorna true si fuera de la diagonal todo es 0
    */

    MatrizSimetrica();
    void insertar(int fila, int columna, int valor);
    bool esSimetrica();
    void transponer();
    bool esDiagonal();
    string toString();
};

#endif //EJERCICIOSMATRICES_MATRIZSIMETRICA_H
