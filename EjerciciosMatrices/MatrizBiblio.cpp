//Ejercicio 30

#include "MatrizBiblio.h"

BibliotecaUni::BibliotecaUni(int e, int s) {
    estantes = e;
    secciones = s;

    m = new Libro**[estantes];
    for (int i = 0; i < estantes; i++) {
        m[i] = new Libro*[secciones];
        for (int j = 0; j < secciones; j++) {
            m[i][j] = nullptr;
        }
    }
}

BibliotecaUni::~BibliotecaUni() {
    for (int i = 0; i < estantes; i++) {
        for (int j = 0; j < secciones; j++) {
            delete m[i][j];
        }
        delete[] m[i];
    }
    delete[] m;
}

string BibliotecaUni::toString() {
    stringstream ss;
    for (int i = 0; i < estantes; i++) {
        for (int j = 0; j < secciones; j++) {
            if (m[i][j] != nullptr) {
                ss << m[i][j]->getISBN() << "\t";
            } else {
                ss << "X\t";
            }
        }
        ss << endl;
    }
    return ss.str();
}

void BibliotecaUni::limpiar() {
    for (int i = 0; i < estantes; i++) {
        for (int j = 0; j < secciones; j++) {
            delete m[i][j];
            m[i][j] = nullptr;
        }
    }
}

void BibliotecaUni::agregarLibro(int estante, int seccion, string ISBN, string titulo, string autor, int anio, bool disponible) {
    if (estante >= 0 && estante < estantes && seccion >= 0 && seccion < secciones) {
        delete m[estante][seccion];
        m[estante][seccion] = new Libro(ISBN, titulo, autor, anio, disponible);
    }
}

void BibliotecaUni::prestarLibro(int estante, int seccion) {
    if (estante >= 0 && estante < estantes && seccion >= 0 && seccion < secciones) {
        if (m[estante][seccion] != nullptr) {
            m[estante][seccion]->setDisponible(false);
        }
    }
}

void BibliotecaUni::devolverLibro(int estante, int seccion) {
    if (estante >= 0 && estante < estantes && seccion >= 0 && seccion < secciones) {
        if (m[estante][seccion] != nullptr) {
            m[estante][seccion]->setDisponible(true);
        }
    }
}

int BibliotecaUni::librosDisponibles() {
    int cont = 0;
    for (int i = 0; i < estantes; i++) {
        for (int j = 0; j < secciones; j++) {
            if (m[i][j] != nullptr && m[i][j]->isDisponible()) {
                cont++;
            }
        }
    }
    return cont;
}

bool BibliotecaUni::buscarPorISBN(string ISBN) {
    for (int i = 0; i < estantes; i++) {
        for (int j = 0; j < secciones; j++) {
            if (m[i][j] != nullptr && m[i][j]->getISBN() == ISBN) {
                return true;
            }
        }
    }
    return false;
}

int BibliotecaUni::librosPorAutor(string autor) {
    int cont = 0;
    for (int i = 0; i < estantes; i++) {
        for (int j = 0; j < secciones; j++) {
            if (m[i][j] != nullptr && m[i][j]->getAutor() == autor) {
                cont++;
            }
        }
    }
    return cont;
}

int BibliotecaUni::librosAntiguos(int anioLimite) {
    int cont = 0;
    for (int i = 0; i < estantes; i++) {
        for (int j = 0; j < secciones; j++) {
            if (m[i][j] != nullptr && m[i][j]->getAnio() < anioLimite) {
                cont++;
            }
        }
    }
    return cont;
}

double BibliotecaUni::valorTotalBiblioteca() {
    double valor = 100;
    int cont = 0;

    for (int i = 0; i < estantes; i++) {
        for (int j = 0; j < secciones; j++) {
            if (m[i][j] != nullptr) {
                cont++;
            }
        }
    }
    return cont * valor;
}
