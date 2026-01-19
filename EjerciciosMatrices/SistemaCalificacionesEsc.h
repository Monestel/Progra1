#ifndef EJERCICIOSMATRICES_SISTEMACALIFICACIONESESC_H
#define EJERCICIOSMATRICES_SISTEMACALIFICACIONESESC_H

#include <string>
using namespace std;

class Calificacion {

private:
    string estudiante;
    string materia;
    double nota;
    int trimestre;

public:
    Calificacion(string e, string m, double n, int t);

    string getEstudiante();
    string getMateria();
    double getNota();
    int getTrimestre();
};

#endif //EJERCICIOSMATRICES_SISTEMACALIFICACIONESESC_H
