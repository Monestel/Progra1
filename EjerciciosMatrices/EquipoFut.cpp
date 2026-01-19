#include "EquipoFut.h"

Equipo::Equipo(int filas, int columnas) {
    this->filas = filas;
    this->columnas = columnas;

    m = new Jugador**[filas];
    for (int i = 0; i < filas; i++) {
        m[i] = new Jugador*[columnas];
        for (int j = 0; j < columnas; j++) {
            m[i][j] = nullptr;
        }
    }
}

Equipo::~Equipo() {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            delete m[i][j];
        }
        delete[] m[i];
    }
    delete[] m;
}

void Equipo::agregarJugador(int fila, int columna, string nombre, string posicion, int numero) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        delete m[fila][columna];
        m[fila][columna] = new Jugador(nombre, posicion, numero);
    }
}

void Equipo::eliminarJugador(int fila, int columna) {
    if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
        delete m[fila][columna];
        m[fila][columna] = nullptr;
    }
}

int Equipo::jugadoresPorPosicion(string posicion) {
    int contador = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] != nullptr && m[i][j]->getPosicion() == posicion) {
                contador++;
            }
        }
    }

    return contador;
}

bool Equipo::buscarJugador(int numero) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] != nullptr && m[i][j]->getNumero() == numero) {
                return true;
            }
        }
    }
    return false;
}

int Equipo::totalJugadores() {
    int total = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] != nullptr) {
                total++;
            }
        }
    }

    return total;
}
