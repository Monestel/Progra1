//Ejercicio 25

#include "MatrizHacienda.h"

Hacienda::Hacienda(int contribuyentes, int anios) {
    this->contribuyentes = contribuyentes;
    this->anios = anios;

    m = new Declaracion**[contribuyentes];
    for (int i = 0; i < contribuyentes; i++) {
        m[i] = new Declaracion*[anios];
        for (int j = 0; j < anios; j++) {
            m[i][j] = nullptr;
        }
    }
}

Hacienda::~Hacienda() {
    for (int i = 0; i < contribuyentes; i++) {
        for (int j = 0; j < anios; j++) {
            delete m[i][j];
        }
        delete[] m[i];
    }
    delete[] m;
}

void Hacienda::agregarDeclaracion(int contribuyente, int anio, int id, double monto) {
    if (contribuyente >= 0 && contribuyente < contribuyentes && anio >= 0 && anio < anios) {
        delete m[contribuyente][anio];
        m[contribuyente][anio] = new Declaracion(id, monto, anio);
    }
}

double Hacienda::totalContribuyente(int contribuyente) {
    double suma = 0;

    if (contribuyente >= 0 && contribuyente < contribuyentes) {
        for (int j = 0; j < anios; j++) {
            if (m[contribuyente][j] != nullptr) {
                suma += m[contribuyente][j]->getMonto();
            }
        }
    }

    return suma;
}

double Hacienda::totalAnio(int anio) {
    double suma = 0;

    if (anio >= 0 && anio < anios) {
        for (int i = 0; i < contribuyentes; i++) {
            if (m[i][anio] != nullptr) {
                suma += m[i][anio]->getMonto();
            }
        }
    }

    return suma;
}

int Hacienda::contribuyenteConMayorMonto() {
    double mayor = -1;
    int indice = -1;

    for (int i = 0; i < contribuyentes; i++) {
        double total = totalContribuyente(i);
        if (total > mayor) {
            mayor = total;
            indice = i;
        }
    }

    return indice;
}

double Hacienda::promedioAnio(int anio) {
    double suma = 0;
    int contador = 0;

    if (anio >= 0 && anio < anios) {
        for (int i = 0; i < contribuyentes; i++) {
            if (m[i][anio] != nullptr) {
                suma += m[i][anio]->getMonto();
                contador++;
            }
        }
    }

    if (contador == 0) {
        return 0;
    }

    return suma / contador;
}
