//Ejercicio 27

#include "SistemaVotaciones.h"

Voto::Voto(string c, string f) {
    candidato = c;
    fecha = f;
}

string Voto::getCandidato() {
    return candidato;
}

string Voto::getFecha() {
    return fecha;
}
