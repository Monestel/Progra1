#include "SistemaHotel.h"

Habitacion::Habitacion() {
    numero = 0;
    tipo = "";
    precio = 0;
}

Habitacion::Habitacion(int numero, string tipo, double precio) {
    this->numero = numero;
    this->tipo = tipo;
    this->precio = precio;
}

int Habitacion::getNumero() {
    return numero;
}

string Habitacion::getTipo() {
    return tipo;
}

double Habitacion::getPrecio() {
    return precio;
}
