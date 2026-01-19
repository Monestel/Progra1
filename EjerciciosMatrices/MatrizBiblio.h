#ifndef EJERCICIOSMATRICES_MATRIZBIBLIO_H
#define EJERCICIOSMATRICES_MATRIZBIBLIO_H

#include <iostream>
#include <sstream>
#include "SistemaBiblioUni.h"
using namespace std;

class BibliotecaUni {

private:
    int estantes;
    int secciones;
    Libro*** m;

public:
    BibliotecaUni(int e, int s);
    ~BibliotecaUni();

    string toString();
    void limpiar();

    void agregarLibro(int estante, int seccion, string ISBN, string titulo, string autor, int anio, bool disponible);
    void prestarLibro(int estante, int seccion);
    void devolverLibro(int estante, int seccion);
    int librosDisponibles();
    bool buscarPorISBN(string ISBN);
    int librosPorAutor(string autor);
    int librosAntiguos(int anioLimite);
    double valorTotalBiblioteca();
};

#endif //EJERCICIOSMATRICES_MATRIZBIBLIO_H
