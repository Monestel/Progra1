//Ejercicio 25

#ifndef SistemaHacienda_H
#define SistemaHacienda_H

class Declaracion {

private:

    int idContribuyente;
    double monto;
    int anio;

public:
    Declaracion(int id, double monto, int anio);

    int getIdContribuyente();
    double getMonto();
    int getAnio();
};

#endif //EJERCICIOSMATRICES_SISTEMAHORARIOCLASE_H
