//Ejercicio 28

#include "SistemaAlmacen.h"

Articulo::Articulo(string c, string n, string cat, int cant, double p) {
    codigo = c;
    nombre = n;
    categoria = cat;
    cantidad = cant;
    precio = p;
}

string Articulo::getCodigo() {
    return codigo;
}

string Articulo::getNombre() {
    return nombre;
}

string Articulo::getCategoria() {
    return categoria;
}

int Articulo::getCantidad() {
    return cantidad;
}

double Articulo::getPrecio() {
    return precio;
}
