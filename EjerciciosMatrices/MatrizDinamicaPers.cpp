// Ejercicio 12 - Persona
#include "MatrizDinamicaPers.h"

MatrizDinamicaPers::MatrizDinamicaPers() {
    nombre = "";
    edad = 0;
}

MatrizDinamicaPers::MatrizDinamicaPers(string nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;
}

string MatrizDinamicaPers::getNombre() {
    return nombre;
}

int MatrizDinamicaPers::getEdad() {
    return edad;
}
