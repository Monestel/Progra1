//Ejercicio 27

#ifndef EJERCICIOSMATRICES_MATRIZURNA_H
#define EJERCICIOSMATRICES_MATRIZURNA_H

#include <iostream>
#include <sstream>
#include "SistemaVotaciones.h"
using namespace std;

class Urna {

private:
    int mesas;
    int candidatos;
    Voto*** m;

public:
    Urna(int me, int ca);
    ~Urna();

    string toString();
    void limpiar();

    void registrarVoto(int mesa, int candidato, string nombreCandidato, string fecha);
    int votosPorCandidato(int candidato);
    int votosPorMesa(int mesa);
    int candidatoGanador();
    int totalVotos();
};

#endif //EJERCICIOSMATRICES_MATRIZURNA_H
