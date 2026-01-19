//Ejercicio 29

#ifndef EJERCICIOSMATRICES_MATRIZREGISTROACADEMICO_H
#define EJERCICIOSMATRICES_MATRIZREGISTROACADEMICO_H

#include <iostream>
#include <sstream>
#include "SistemaCalificacionesEsc.h"
using namespace std;

class RegistroAcademico {

private:

    int estudiantes;
    int materias;
    Calificacion*** m;

public:
    RegistroAcademico(int e, int ma);
    ~RegistroAcademico();

    string toString();
    void limpiar();

    void agregarCalificacion(int estudiante, int materia, string nombreEst, string nombreMat, double nota, int trimestre);
    double promedioEstudiante(int estudiante);
    double promedioMateria(int materia);
    int mejorEstudiante();
    int estudiantesAprobados(double notaMinima);
    int materiaMasDificil();
};

#endif //EJERCICIOSMATRICES_MATRIZREGISTROACADEMICO_H
