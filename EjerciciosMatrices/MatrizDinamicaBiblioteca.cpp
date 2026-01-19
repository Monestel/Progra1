#include "MatrizDinamicaBiblioteca.h"

Biblioteca::Biblioteca(int filas, int columnas) {
    this->filas = filas;
    this->columnas = columnas;

    m = new Libro*[filas];
    for (int i = 0; i < filas; i++) {
        m[i] = new Libro[columnas];
    }
}

Biblioteca::~Biblioteca() {
    for (int i = 0; i < filas; i++) {
        delete[] m[i];
    }
    delete[] m;
}

void Biblioteca::agregarLibro(int fila, int columna, string titulo, string autor, int anio) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        m[fila][columna] = Libro(titulo, autor, anio);
    }
}

int Biblioteca::buscarPorAutor(string autor) {
    int contador = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j].getAutor() == autor) {
                contador++;
            }
        }
    }

    return contador;
}

int Biblioteca::librosAntiguos(int anioLimite) {
    int contador = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j].getAnio() < anioLimite) {
                contador++;
            }
        }
    }

    return contador;
}

Libro Biblioteca::libroMasReciente() {
    Libro reciente = m[0][0];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j].getAnio() > reciente.getAnio()) {
                reciente = m[i][j];
            }
        }
    }

    return reciente;
}
