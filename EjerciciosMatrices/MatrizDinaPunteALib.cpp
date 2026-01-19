#include "MatrizDinaPunteALib.h"

Libreria::Libreria(int filas, int columnas) {
    this->filas = filas;
    this->columnas = columnas;

    m = new MatrizDinamicaLibro**[filas];
    for (int i = 0; i < filas; i++) {
        m[i] = new MatrizDinamicaLibro*[columnas];
        for (int j = 0; j < columnas; j++) {
            m[i][j] = nullptr;
        }
    }
}

Libreria::~Libreria() {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            delete m[i][j];
        }
        delete[] m[i];
    }
    delete[] m;
}

void Libreria::agregarLibro(int fila, int columna, string titulo, string autor, int anio) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        delete m[fila][columna];
        m[fila][columna] = new MatrizDinamicaLibro(titulo, autor, anio);
    }
}

void Libreria::eliminarLibro(int fila, int columna) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        delete m[fila][columna];
        m[fila][columna] = nullptr;
    }
}

bool Libreria::buscarLibro(string titulo) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] != nullptr && m[i][j]->getTitulo() == titulo) {
                return true;
            }
        }
    }
    return false;
}

int Libreria::librosPorAutor(string autor) {
    int contador = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] != nullptr && m[i][j]->getAutor() == autor) {
                contador++;
            }
        }
    }

    return contador;
}

MatrizDinamicaLibro Libreria::libroMasAntiguo() {
    MatrizDinamicaLibro *antiguo = nullptr;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] != nullptr) {
                if (antiguo == nullptr || m[i][j]->getAnio() < antiguo->getAnio()) {
                    antiguo = m[i][j];
                }
            }
        }
    }

    if (antiguo == nullptr) {
        return MatrizDinamicaLibro("", "", 0);
    }

    return *antiguo;
}
