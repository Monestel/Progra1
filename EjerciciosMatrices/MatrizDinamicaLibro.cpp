#include "MatrizDinamicaLibro.h"

MatrizDinamicaLibro::MatrizDinamicaLibro() {
    titulo = "";
    autor = "";
    anio = 0;
}

MatrizDinamicaLibro::MatrizDinamicaLibro(string titulo, string autor, int anio) {
    this->titulo = titulo;
    this->autor = autor;
    this->anio = anio;
}

string MatrizDinamicaLibro::getTitulo() {
    return titulo;
}

string MatrizDinamicaLibro::getAutor() {
    return autor;
}

int MatrizDinamicaLibro::getAnio() {
    return anio;
}
