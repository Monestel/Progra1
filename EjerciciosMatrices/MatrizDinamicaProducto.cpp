//Ejercicio 13

#include "MatrizDinamicaProducto.h"

MatrizDinamicaProducto::MatrizDinamicaProducto() {
    nombre = "";
    precio = 0.0;
    stock = 0;
}

MatrizDinamicaProducto::MatrizDinamicaProducto(string nombre, double precio, int stock) {
    this->nombre = nombre;
    this->precio = precio;
    this->stock = stock;
}

string MatrizDinamicaProducto::getNombre() {
    return nombre;
}

double MatrizDinamicaProducto::getPrecio() {
    return precio;
}

int MatrizDinamicaProducto::getStock() {
    return stock;
}
