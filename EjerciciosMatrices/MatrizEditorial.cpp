#include "MatrizEditorial.h"

Editorial::Editorial(int sucursales, int anios) {
    this->sucursales = sucursales;
    this->anios = anios;

    m = new LibroEditorial**[sucursales];
    for (int i = 0; i < sucursales; i++) {
        m[i] = new LibroEditorial*[anios];
        for (int j = 0; j < anios; j++) {
            m[i][j] = nullptr;
        }
    }
}

Editorial::~Editorial() {
    for (int i = 0; i < sucursales; i++) {
        for (int j = 0; j < anios; j++) {
            delete m[i][j];
        }
        delete[] m[i];
    }
    delete[] m;
}

void Editorial::agregarLibro(int sucursal, int anioPos, string titulo, string autor, int unidades, double precio, int anioPublicacion) {
    if (sucursal >= 0 && sucursal < sucursales && anioPos >= 0 && anioPos < anios) {
        delete m[sucursal][anioPos];
        m[sucursal][anioPos] = new LibroEditorial(titulo, autor, unidades, precio, anioPublicacion);
    }
}

double Editorial::gananciasAutor(string autor) {
    double total = 0;

    for (int i = 0; i < sucursales; i++) {
        for (int j = 0; j < anios; j++) {
            if (m[i][j] != nullptr && m[i][j]->getAutor() == autor) {
                total += m[i][j]->ganancias();
            }
        }
    }

    return total;
}

int Editorial::unidadesVendidasAnio(int anioPublicacion) {
    int total = 0;

    for (int i = 0; i < sucursales; i++) {
        for (int j = 0; j < anios; j++) {
            if (m[i][j] != nullptr && m[i][j]->getAnio() == anioPublicacion) {
                total += m[i][j]->getUnidadesVendidas();
            }
        }
    }

    return total;
}

LibroEditorial Editorial::libroBestSeller() {
    LibroEditorial *best = nullptr;

    for (int i = 0; i < sucursales; i++) {
        for (int j = 0; j < anios; j++) {
            if (m[i][j] != nullptr) {
                if (best == nullptr || m[i][j]->getUnidadesVendidas() > best->getUnidadesVendidas()) {
                    best = m[i][j];
                }
            }
        }
    }

    if (best == nullptr) {
        return LibroEditorial();
    }

    return *best;
}

double Editorial::gananciasSucursal(int sucursal) {
    double total = 0;

    if (sucursal >= 0 && sucursal < sucursales) {
        for (int j = 0; j < anios; j++) {
            if (m[sucursal][j] != nullptr) {
                total += m[sucursal][j]->ganancias();
            }
        }
    }

    return total;
}
