//Ejercicio 15

#ifndef MATRIZDINAMICABIBLIOTECA_H
#define MATRIZDINAMICABIBLIOTECA_H

#include "MatrizDinamicaLibro.h"

class Biblioteca {

private:

    MatrizDinamicaLibro** m;
    int filas;
    int columnas;

public:
    Biblioteca(int filas, int columnas);
    ~Biblioteca();

    void agregarLibro(int fila, int columna, string titulo, string autor, int anio);
    int buscarPorAutor(string autor);
    int librosAntiguos(int anioLimite);
    MatrizDinamicaLibro libroMasReciente();
};

#endif //EJERCICIOSMATRICES_MATRIZDINAMICABIBLIOTECA_H
