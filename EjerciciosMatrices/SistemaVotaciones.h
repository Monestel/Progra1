//Ejercicio 27

#ifndef EJERCICIOSMATRICES_SISTEMASVOTACIONES_H
#define EJERCICIOSMATRICES_SISTEMAVOTACIONES_H

#include <string>
using namespace std;

class Voto {

private:

    string candidato;
    string fecha;

public:
    Voto(string c, string f);

    string getCandidato();
    string getFecha();
};

#endif //EJERCICIOSMATRICES_SISTEMAVOTACIONES_H
