#include "SistemaHacienda.h"

Declaracion::Declaracion(int id, double monto, int anio) {
    this->idContribuyente = id;
    this->monto = monto;
    this->anio = anio;
}

int Declaracion::getIdContribuyente() {
    return idContribuyente;
}

double Declaracion::getMonto() {
    return monto;
}

int Declaracion::getAnio() {
    return anio;
}
