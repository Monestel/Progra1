#include "MatrizDinamicaEst.h"

MatrizDinamicaEst::MatrizDinamicaEst() {
    nombre = "";
    for (int i = 0; i < 5; i++) {
        calificaciones[i] = 0;
    }
}

MatrizDinamicaEst::MatrizDinamicaEst(string nombre, double calificaciones[]) {
    this->nombre = nombre;
    for (int i = 0; i < 5; i++) {
        this->calificaciones[i] = calificaciones[i];
    }
}

string MatrizDinamicaEst::getNombre() {
    return nombre;
}

double MatrizDinamicaEst::promedio() {
    double suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += calificaciones[i];
    }
    return suma / 5;
}
