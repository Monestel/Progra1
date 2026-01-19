//Ejercicio 29

#include "SistemaCalificacionesEsc.h"

Calificacion::Calificacion(string e, string m, double n, int t) {
    estudiante = e;
    materia = m;
    nota = n;
    trimestre = t;
}

string Calificacion::getEstudiante() {
    return estudiante;
}

string Calificacion::getMateria() {
    return materia;
}

double Calificacion::getNota() {
    return nota;
}

int Calificacion::getTrimestre() {
    return trimestre;
}
