//Ejercicio 26

#ifndef EJERCICIOSMATRICES_MATRIZDEMATRICES_H
#define EJERCICIOSMATRICES_MATRIZDEMATRICES_H

#include <iostream>
#include <sstream>
using namespace std;

class MatrizDeMatrices {

private:

    int filasP;
    int colsP;
    int filasS;
    int colsS;
    int**** m;

public:
    MatrizDeMatrices(int fp, int cp, int fs, int cs);
    ~MatrizDeMatrices();

    string toString();
    void limpiar();

    void asignarValor(int filaP, int colP, int filaS, int colS, int valor);
    int obtenerValor(int filaP, int colP, int filaS, int colS);
    int sumarSubmatriz(int filaP, int colP);
};

#endif //EJERCICIOSMATRICES_MATRIZDEMATRICES_H
