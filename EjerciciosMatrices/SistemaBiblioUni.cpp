#include "SistemaBiblioUni.h"

Libro::Libro(string i, string t, string a, int an, bool d) {
    isbn = i;
    titulo = t;
    autor = a;
    anio = an;
    disponible = d;
}

string Libro::getISBN() {
    return isbn;
}

string Libro::getAutor() {
    return autor;
}

int Libro::getAnio() {
    return anio;
}

bool Libro::isDisponible() {
    return disponible;
}

void Libro::setDisponible(bool d) {
    disponible = d;
}
