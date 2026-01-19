#ifndef EJERCICIOSMATRICES_MATRIZDINAPUNTEALIB_H
#define EJERCICIOSMATRICES_MATRIZDINAPUNTEALIB_H

#include <string>
#include "MatrizDinamicaLibro.h"
using namespace std;

class Libreria {

private:

    int filas;
    int columnas;
    MatrizDinamicaLibro ***m;

public:
    Libreria(int filas, int columnas);
    ~Libreria();

    void agregarLibro(int fila, int columna, string titulo, string autor, int anio);
    void eliminarLibro(int fila, int columna);
    bool buscarLibro(string titulo);
    int librosPorAutor(string autor);
    MatrizDinamicaLibro libroMasAntiguo();
};

#endif //EJERCICIOSMATRICES_MATRIZDINAPUNTEALIB_H
