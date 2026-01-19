#include "SistemaEquipoFut.h"

Jugador::Jugador() {
    nombre = "";
    posicion = "";
    numero = 0;
}

Jugador::Jugador(string nombre, string posicion, int numero) {
    this->nombre = nombre;
    this->posicion = posicion;
    this->numero = numero;
}

string Jugador::getNombre() {
    return nombre;
}

string Jugador::getPosicion() {
    return posicion;
}

int Jugador::getNumero() {
    return numero;
}
