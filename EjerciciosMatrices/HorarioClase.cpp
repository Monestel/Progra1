//Ejercicio 23

#include "HorarioClase.h"

HorarioClase::HorarioClase() {
    m = new Clase**[DIAS];
    for (int i = 0; i < DIAS; i++) {
        m[i] = new Clase*[HORAS];
        for (int j = 0; j < HORAS; j++) {
            m[i][j] = nullptr;
        }
    }
}

HorarioClase::~HorarioClase() {
    for (int i = 0; i < DIAS; i++) {
        for (int j = 0; j < HORAS; j++) {
            delete m[i][j];
        }
        delete[] m[i];
    }
    delete[] m;
}

void HorarioClase::agregarClase(int dia, int hora, string nombre, string profesor, int inicio, int fin) {
    if (dia >= 0 && dia < DIAS && hora >= 0 && hora < HORAS) {
        delete m[dia][hora];
        m[dia][hora] = new Clase(nombre, profesor, inicio, fin);
    }
}

void HorarioClase::eliminarClase(int dia, int hora) {
    if (dia >= 0 && dia < DIAS && hora >= 0 && hora < HORAS) {
        delete m[dia][hora];
        m[dia][hora] = nullptr;
    }
}

int HorarioClase::clasesPorDia(int dia) {
    int contador = 0;

    if (dia >= 0 && dia < DIAS) {
        for (int j = 0; j < HORAS; j++) {
            if (m[dia][j] != nullptr) {
                contador++;
            }
        }
    }

    return contador;
}

int HorarioClase::clasesPorProfesor(string profesor) {
    int contador = 0;

    for (int i = 0; i < DIAS; i++) {
        for (int j = 0; j < HORAS; j++) {
            if (m[i][j] != nullptr && m[i][j]->getProfesor() == profesor) {
                contador++;
            }
        }
    }

    return contador;
}

bool HorarioClase::hayConflicto(int dia, int hora) {
    if (dia < 0 || dia >= DIAS || hora < 0 || hora >= HORAS) {
        return false;
    }

    if (m[dia][hora] == nullptr) {
        return false;
    }

    int inicio = m[dia][hora]->getHoraInicio();
    int fin = m[dia][hora]->getHoraFin();

    for (int j = 0; j < HORAS; j++) {
        if (j != hora && m[dia][j] != nullptr) {
            int ini2 = m[dia][j]->getHoraInicio();
            int fin2 = m[dia][j]->getHoraFin();

            if (inicio < fin2 && fin > ini2) {
                return true;
            }
        }
    }

    return false;
}
