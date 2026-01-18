//Ejercicio 4

#ifndef EJERCICIOSMATRICES_MATRIZCARACTERES_H
#define EJERCICIOSMATRICES_MATRIZCARACTERES_H

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class MatrizCaracteres {

private:

    static const int FIL= 3;
    static const int COL= 3;
    int m[FIL][COL];

public:
    /*
    Constructor que inicialice todos los caracteres en espacio (' ')
insertarCaracter(int fila, int columna, char c): inserta un carácter en una posición
contarCaracter(char c): cuenta cuántas veces aparece un carácter en la matriz
verificarFilaIgual(int fila): retorna true si todos los caracteres de una fila son iguales
    */

    MatrizCaracteres();
    string toString();
    void limpiar();
    void insertarCaracter(int fila, int columna, char c);
    int contarCaracter(char c);
    bool verificarFilaIgual(int fila);
};


#endif //EJERCICIOSMATRICES_MATRIZCARACTERES_H