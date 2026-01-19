// Ejercicio 9
#include "MatrizHorarios.h"

MatrizHorarios::MatrizHorarios() {
    limpiar();
}

void MatrizHorarios::limpiar() {
    for (int i = 0; i < DIAS; i++) {
        for (int j = 0; j < HORAS; j++) {
            m[i][j] = "";
        }
    }
}

string MatrizHorarios::toString() {
    stringstream ss;
    for (int i = 0; i < DIAS; i++) {
        for (int j = 0; j < HORAS; j++) {
            ss << (m[i][j].empty() ? "-" : m[i][j]) << "\t";
        }
        ss << endl;
    }
    return ss.str();
}

void MatrizHorarios::agregarClase(int dia, int hora, string nombreClase) {
    if (dia >= 0 && dia < DIAS && hora >= 0 && hora < HORAS) {
        m[dia][hora] = nombreClase;
    }
}

int MatrizHorarios::clasesPorDia(int dia) {
    if (dia < 0 || dia >= DIAS) {
        return 0;
    }

    int contador = 0;
    for (int j = 0; j < HORAS; j++) {
        if (!m[dia][j].empty()) {
            contador++;
        }
    }
    return contador;
}

int MatrizHorarios::diaMasOcupado() {
    int diaMax = 0;
    int maxClases = clasesPorDia(0);

    for (int i = 1; i < DIAS; i++) {
        int cant = clasesPorDia(i);
        if (cant > maxClases) {
            maxClases = cant;
            diaMax = i;
        }
    }
    return diaMax;
}

bool MatrizHorarios::estaLibre(int dia, int hora) {
    if (dia < 0 || dia >= DIAS || hora < 0 || hora >= HORAS) {
        return true;
    }
    return m[dia][hora].empty();
}
