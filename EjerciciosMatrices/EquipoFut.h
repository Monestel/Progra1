#ifndef EJERCICIOSMATRICES_EQUIPOFUT_H
#define EJERCICIOSMATRICES_EQUIPOFUT_H

#include <string>
#include "SistemaEquipoFut.h"
using namespace std;

class Equipo {

private:
    int filas;
    int columnas;
    Jugador ***m;

public:
    Equipo(int filas, int columnas);
    ~Equipo();

    void agregarJugador(int fila, int columna, string nombre, string posicion, int numero);
    void eliminarJugador(int fila, int columna);
    int jugadoresPorPosicion(string posicion);
    bool buscarJugador(int numero);
    int totalJugadores();
};

#endif //EJERCICIOSMATRICES_AEQUIPOFUT_H
