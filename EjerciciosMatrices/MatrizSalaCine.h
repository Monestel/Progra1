// Ejercicio 10

#ifndef EJERCICIOSMATRICES_MATRIZSALACINE_H
#define EJERCICIOSMATRICES_MATRIZSALACINE_H

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class MatrizSalaCine {

private:
    static const int FILAS = 10;
    static const int COLUMNAS = 15;
    int m[FILAS][COLUMNAS];

public:
    /*
     Constructor que inicializa todos los asientos en 0 (libres)
     reservarAsiento(int fila, int columna)
     asientosDisponibles()
     filaCompleta(int fila)
     mejorFila()
    */

    MatrizSalaCine();
    void limpiar();
    string toString();
    void reservarAsiento(int fila, int columna);
    int asientosDisponibles();
    bool filaCompleta(int fila);
    int mejorFila();
};

#endif //EJERCICIOSMATRICES_MATRIZSALACINE_H
