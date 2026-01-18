#include <iostream>

#include "MatrizCaracteres.h"
#include "MatrizEnteros.h"
#include "MatrizOperaciones.h"
#include "MatrizPuntuaciones.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    MatrizEnteros mat;
    cout << "Ejercicio 1: " <<endl;
    cout << "=== PRUEBA 1: Matriz inicial (debe estar en 0) ===\n";
    cout << mat.toString() << endl;

    cout << "=== PRUEBA 2: Insertar valores validos ===\n";
    mat.insertar(0, 0, 10);
    mat.insertar(0, 1, 20);
    mat.insertar(1, 1, 99);
    mat.insertar(2, 2, 7);
    cout << mat.toString() << endl;

    cout << "=== PRUEBA 3: Obtener valores validos ===\n";
    cout << "mat(0,0) = " << mat.obtener(0, 0) << " (esperado 10)\n";
    cout << "mat(0,1) = " << mat.obtener(0, 1) << " (esperado 20)\n";
    cout << "mat(1,1) = " << mat.obtener(1, 1) << " (esperado 99)\n";
    cout << "mat(2,2) = " << mat.obtener(2, 2) << " (esperado 7)\n\n";

    cout << "=== PRUEBA 4: Insertar en indices invalidos (NO debe cambiar nada) ===\n";
    mat.insertar(-1, 0, 111);     // fila inválida
    mat.insertar(0, -1, 222);     // columna inválida
    mat.insertar(555, 0, 333);    // fila fuera de rango
    mat.insertar(0, 666, 444);    // columna fuera de rango
    cout << mat.toString() << endl;

    cout << "=== PRUEBA 5: Obtener en indices invalidos (debe devolver -1) ===\n";
    cout << "mat(-1,0) = " << mat.obtener(-1, 0) << " (esperado -1)\n";
    cout << "mat(0,-1) = " << mat.obtener(0, -1) << " (esperado -1)\n";
    cout << "mat(FIL,0) = " << mat.obtener(-1, 0) << " (esperado -1)\n";
    cout << "mat(0,COL) = " << mat.obtener(0, -1) << " (esperado -1)\n\n";

    cout << "=== PRUEBA 6: Limpiar matriz (todo vuelve a 0) ===\n";
    mat.limpiar();
    cout << mat.toString() << endl;

    cout << "Ejercicio 2: " <<endl;

    cout << "=== PRUEBA 7: Preparar matriz para busquedas ===\n";
    mat.insertar(0, 0, 5);
    mat.insertar(0, 1, 5);
    mat.insertar(1, 0, 5);
    mat.insertar(1, 1, 8);
    mat.insertar(2, 2, 5);
    cout << mat.toString() << endl;


    cout << "=== PRUEBA 8: Buscar valor ===\n";
    cout << "Buscar 5: " << (mat.buscar(5) ? "true" : "false") << " (esperado true)\n";
    cout << "Buscar 8: " << (mat.buscar(8) ? "true" : "false") << " (esperado true)\n";
    cout << "Buscar 99: " << (mat.buscar(99) ? "true" : "false") << " (esperado false)\n\n";


    cout << "=== PRUEBA 9: Contar apariciones ===\n";
    cout << "Apariciones de 5: " << mat.contarApariciones(5) << " (esperado 4)\n";
    cout << "Apariciones de 8: " << mat.contarApariciones(8) << " (esperado 1)\n";
    cout << "Apariciones de 100: " << mat.contarApariciones(100) << " (esperado 0)\n\n";


    cout << "=== PRUEBA 10: Buscar en fila ===\n";
    cout << "Fila 0 buscar 5: " << (mat.buscarEnFila(0, 5) ? "true" : "false") << " (esperado true)\n";
    cout << "Fila 1 buscar 8: " << (mat.buscarEnFila(1, 8) ? "true" : "false") << " (esperado true)\n";
    cout << "Fila 2 buscar 8: " << (mat.buscarEnFila(2, 8) ? "true" : "false") << " (esperado false)\n\n";


    cout << "=== PRUEBA 11: Buscar en columna ===\n";
    cout << "Columna 0 buscar 5: " << (mat.buscarEnColumna(0, 5) ? "true" : "false") << " (esperado true)\n";
    cout << "Columna 1 buscar 8: " << (mat.buscarEnColumna(1, 8) ? "true" : "false") << " (esperado true)\n";
    cout << "Columna 2 buscar 8: " << (mat.buscarEnColumna(2, 8) ? "true" : "false") << " (esperado false)\n\n";
    mat.limpiar();



    MatrizOperaciones opera;
    cout << "Ejercicio 3: " <<endl;

    cout << "=== PRUEBA 1: Matriz inicial ===\n";
    cout << opera.toString() << endl;

    cout << "=== Prueba 2: Llenar filas ===\n";
    opera.llenarFila(0,1);
    opera.llenarFila(1,2);
    opera.llenarFila(2,3);
    cout << opera.toString() << endl;

    cout << "=== Prueba 3: Llenar columnas ===\n";
    opera.llenarColumna(1,6);
    opera.llenarColumna(2,5);
    opera.llenarColumna(3,3);
    cout << opera.toString() << endl;

    cout << "=== Prueba 4: Sumar filas ===\n";
    cout << "Suma fila 0: " << opera.sumarFila(0) <<endl;
    cout << "Suma fila 3: " << opera.sumarFila(3) <<endl;

    cout << "=== Prueba 5: Sumar columnas ===\n";
    cout << "Suma columna 1: " << opera.sumarColumna(0) <<endl;
    cout << "Suma columna 2: " << opera.sumarColumna(3) <<endl;

    cout << "=== Prueba 6: Promedio de filas ===\n";
    cout << "Promedio fila 0: " << opera.promedioFila(0) <<endl;
    cout << "Promedio fila 1: " << opera.promedioFila(1) <<endl;
    opera.limpiar();



    MatrizCaracteres caracteres;
    cout << "Ejercicio 4: " <<endl;

    cout << "=== PRUEBA 1: Matriz inicial (debe estar en espacios) ===\n";
    cout << caracteres.toString() << endl;

    cout << "=== PRUEBA 2: Insertar caracteres ===\n";
    caracteres.insertarCaracter(0, 0, 'A');
    caracteres.insertarCaracter(0, 1, 'A');
    caracteres.insertarCaracter(0, 2, 'A');

    caracteres.insertarCaracter(1, 0, 'B');
    caracteres.insertarCaracter(1, 1, 'C');
    caracteres.insertarCaracter(1, 2, 'B');

    caracteres.insertarCaracter(2, 0, 'X');
    caracteres.insertarCaracter(2, 1, 'X');
    caracteres.insertarCaracter(2, 2, 'X');

    cout << caracteres.toString() << endl;

    cout << "=== PRUEBA 3: Contar caracter ===\n";
    cout << "Apariciones de 'A': " << caracteres.contarCaracter('A') << " (esperado 3)\n";
    cout << "Apariciones de 'B': " << caracteres.contarCaracter('B') << " (esperado 2)\n";
    cout << "Apariciones de 'X': " << caracteres.contarCaracter('X') << " (esperado 3)\n";
    cout << "Apariciones de 'Z': " << caracteres.contarCaracter('Z') << " (esperado 0)\n\n";

    cout << "=== PRUEBA 4: Verificar fila igual ===\n";
    cout << "Fila 0 iguales: "
         << (caracteres.verificarFilaIgual(0) ? "true" : "false")
         << " (esperado true)\n";

    cout << "Fila 1 iguales: "
         << (caracteres.verificarFilaIgual(1) ? "true" : "false")
         << " (esperado false)\n";

    cout << "Fila 2 iguales: "
         << (caracteres.verificarFilaIgual(2) ? "true" : "false")
         << " (esperado true)\n\n";
    caracteres.limpiar();



     MatrizPuntuaciones puntuacion;
     cout << "Ejercicio 5: " <<endl;

     cout << "=== PRUEBA 1: Matriz inicial ===\n";
     cout << puntuacion.toString() << endl;
     cout << "Hola" <<endl;


    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}