#ifndef EJERCICIOSMATRICES_SISTEMAEQUIPOFUT_H
#define EJERCICIOSMATRICES_SISTEMAEQUIPOFUT_H

#include <string>
using namespace std;

class Jugador {

private:

    string nombre;
    string posicion;
    int numero;

public:
    Jugador();
    Jugador(string nombre, string posicion, int numero);

    string getNombre();
    string getPosicion();
    int getNumero();
};

#endif //EJERCICIOSMATRICES_SISTEMAEQUIPOFUT_H
