//Ejercicio 28

#include "MatrizAlmacen.h"

Almacen::Almacen(int e, int c) {
    estantes = e;
    categorias = c;

    m = new Articulo**[estantes];
    for (int i = 0; i < estantes; i++) {
        m[i] = new Articulo*[categorias];
        for (int j = 0; j < categorias; j++) {
            m[i][j] = nullptr;
        }
    }
}

Almacen::~Almacen() {
    for (int i = 0; i < estantes; i++) {
        for (int j = 0; j < categorias; j++) {
            delete m[i][j];
        }
        delete[] m[i];
    }
    delete[] m;
}

string Almacen::toString() {
    stringstream ss;
    for (int i = 0; i < estantes; i++) {
        for (int j = 0; j < categorias; j++) {
            if (m[i][j] != nullptr) {
                ss << m[i][j]->getNombre() << "\t";
            } else {
                ss << "0\t";
            }
        }
        ss << endl;
    }
    return ss.str();
}

void Almacen::limpiar() {
    for (int i = 0; i < estantes; i++) {
        for (int j = 0; j < categorias; j++) {
            delete m[i][j];
            m[i][j] = nullptr;
        }
    }
}

void Almacen::agregarArticulo(int estante, int categoria, string codigo, string nombre, string cat, int cantidad, double precio) {
    if (estante >= 0 && estante < estantes && categoria >= 0 && categoria < categorias) {
        delete m[estante][categoria];
        m[estante][categoria] = new Articulo(codigo, nombre, cat, cantidad, precio);
    }
}

void Almacen::eliminarArticulo(int estante, int categoria) {
    if (estante >= 0 && estante < estantes && categoria >= 0 && categoria < categorias) {
        delete m[estante][categoria];
        m[estante][categoria] = nullptr;
    }
}

int Almacen::articulosPorCategoria(int categoria) {
    if (categoria < 0 || categoria >= categorias) {
        return 0;
    }

    int cont = 0;
    for (int i = 0; i < estantes; i++) {
        if (m[i][categoria] != nullptr) {
            cont++;
        }
    }
    return cont;
}

double Almacen::valorEstante(int estante) {
    if (estante < 0 || estante >= estantes) {
        return 0;
    }

    double total = 0;
    for (int j = 0; j < categorias; j++) {
        if (m[estante][j] != nullptr) {
            total += m[estante][j]->getPrecio() * m[estante][j]->getCantidad();
        }
    }
    return total;
}

Articulo Almacen::articuloMasCaro() {
    Articulo* max = nullptr;

    for (int i = 0; i < estantes; i++) {
        for (int j = 0; j < categorias; j++) {
            if (m[i][j] != nullptr) {
                if (max == nullptr || m[i][j]->getPrecio() > max->getPrecio()) {
                    max = m[i][j];
                }
            }
        }
    }

    if (max != nullptr) {
        return *max;
    }

    return Articulo("", "", "", 0, 0);
}

int Almacen::articulosAgotados() {
    int cont = 0;
    for (int i = 0; i < estantes; i++) {
        for (int j = 0; j < categorias; j++) {
            if (m[i][j] != nullptr && m[i][j]->getCantidad() == 0) {
                cont++;
            }
        }
    }
    return cont;
}
