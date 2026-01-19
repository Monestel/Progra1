#include "SistemaEditorial.h"

LibroEditorial::LibroEditorial() {
    titulo = "";
    autor = "";
    unidadesVendidas = 0;
    precioUnitario = 0;
    anio = 0;
}

LibroEditorial::LibroEditorial(string titulo, string autor, int unidades, double precio, int anio) {
    this->titulo = titulo;
    this->autor = autor;
    this->unidadesVendidas = unidades;
    this->precioUnitario = precio;
    this->anio = anio;
}

string LibroEditorial::getTitulo() {
    return titulo;
}

string LibroEditorial::getAutor() {
    return autor;
}

int LibroEditorial::getUnidadesVendidas() {
    return unidadesVendidas;
}

double LibroEditorial::getPrecioUnitario() {
    return precioUnitario;
}

int LibroEditorial::getAnio() {
    return anio;
}

double LibroEditorial::ganancias() {
    return unidadesVendidas * precioUnitario;
}
