//Ejercicio 3

#ifndef EJERCICIOSMATRICES_MATRIZOPERACIONES_H
#define EJERCICIOSMATRICES_MATRIZOPERACIONES_H

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class MatrizOperaciones {

private:

    static const int FIL= 4;
    static const int COL= 4;
    int m[FIL][COL];

public:
    /*
    llenarFila(int fila, int valor): llena una fila completa con un valor específico
    llenarColumna(int columna, int valor): llena una columna completa con un valor específico
    sumarFila(int fila): retorna la suma de todos los elementos de una fila
    sumarColumna(int columna): retorna la suma de todos los elementos de una columna
    promedioFila(int fila): retorna el promedio de los elementos de una fila
    */

    MatrizOperaciones();
    string toString();
    void limpiar();
    void llenarFila(int fila, int valor);
    void llenarColumna(int columna, int valor);
    int sumarFila(int fila);
    int sumarColumna(int columna);
    float promedioFila(int fila);

};


#endif //EJERCICIOSMATRICES_MATRIZOPERACIONES_H