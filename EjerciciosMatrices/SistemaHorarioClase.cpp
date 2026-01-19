//Ejercicio 23

#include "SistemaHorarioClase.h"

Clase::Clase() {
    nombre = "";
    profesor = "";
    horaInicio = 0;
    horaFin = 0;
}

Clase::Clase(string nombre, string profesor, int horaInicio, int horaFin) {
    this->nombre = nombre;
    this->profesor = profesor;
    this->horaInicio = horaInicio;
    this->horaFin = horaFin;
}

string Clase::getNombre() {
    return nombre;
}

string Clase::getProfesor() {
    return profesor;
}

int Clase::getHoraInicio() {
    return horaInicio;
}

int Clase::getHoraFin() {
    return horaFin;
}
