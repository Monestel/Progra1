//Ejercicios 1 y 2
#ifndef CLASE10_MATRIZENTEROS_H
#define CLASE10_MATRIZENTEROS_H

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class MatrizEnteros {
private:
    static const int FIL= 5;
    static const int COL= 5;
    int m[FIL][COL];

public:
    /*
     *
     *
      *Constructor que inicialice todos los valores en 0
    insertar(int fila, int columna, int valor): inserta un valor en una posición específica
    obtener(int fila, int columna): retorna el valor en una posición específica
    toString(): retorna una representación en string de la matriz
    limpiar(): establece todos los valores en 0
     *
     */

    MatrizEnteros();
    void insertar(int fila, int columna, int valor);
    int obtener(int fila, int columna);
    string toString();
    void limpiar();
    bool buscar(int valor);
    int contarApariciones(int valor);
    bool buscarEnFila(int fila, int valor);
    bool buscarEnColumna(int columna, int valor);


};


#endif //CLASE10_MATRIZENTEROS_H