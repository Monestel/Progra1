#include <iostream>

#include "MatrizCaracteres.h"
#include "MatrizEnteros.h"
#include "MatrizOperaciones.h"
#include "MatrizPuntuaciones.h"
#include "MatrizTemperaturas.h"
#include "MatrizSimetrica.h"
#include "MatrizInventario.h"
#include "MatrizHorarios.h"
#include "MatrizSalaCine.h"
#include "MatrizDinamicaEnt.h"
#include "ColeccionPersonas.h"
#include "MatrizDinamicaPers.h"
#include "MatrizDinamicaProducto.h"
#include "MatrizInventarioDinamico.h"
#include "MatrizDinamicaEst.h"
#include "MatrizDinamicaGrupo.h"
#include "MatrizDinamicaLibro.h"
#include "MatrizDinamicaBiblioteca.h"
#include "MatrizDinaPunteAObj.h"
#include "ColeccionPersonasPunteros.h"
#include "MatrizDinaPunteAProd.h"
#include "MatrizDinaPunteAEst.h"
#include "MatrizDinaPunteALib.h"
#include "MatrizHotel.h"
#include "EquipoFut.h"
#include "HorarioClase.h"
#include "MatrizEditorial.h"
#include "MatrizHacienda.h"
#include "MatrizDeMatrices.h"
#include "MatrizUrna.h"
#include "MatrizAlmacen.h"
#include "MatrizRegistroAcademico.h"
#include "MatrizBiblio.h"

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



     MatrizTemperaturas temp;
     cout << "Ejercicio 6: " << endl;

     cout << "=== PRUEBA 1: Matriz inicial ===\n";
     cout << temp.toString() << endl;

     cout << "=== PRUEBA 2: Registrar temperaturas ===\n";
     temp.registrarTemperatura(0, 0, 20);
     temp.registrarTemperatura(0, 1, 22);
     temp.registrarTemperatura(0, 2, 19);
     temp.registrarTemperatura(0, 3, 21);

     temp.registrarTemperatura(1, 0, 25);
     temp.registrarTemperatura(1, 1, 24);
     temp.registrarTemperatura(1, 2, 26);
     temp.registrarTemperatura(1, 3, 23);

     temp.registrarTemperatura(2, 0, 18);
     temp.registrarTemperatura(2, 1, 17);
     temp.registrarTemperatura(2, 2, 16);
     temp.registrarTemperatura(2, 3, 19);

     cout << temp.toString() << endl;

     cout << "=== PRUEBA 3: Promedio por ciudad ===\n";
     cout << "Ciudad 0: " << temp.temperaturaPromedioCiudad(0) << endl;
     cout << "Ciudad 1: " << temp.temperaturaPromedioCiudad(1) << endl;
     cout << "Ciudad 2: " << temp.temperaturaPromedioCiudad(2) << endl;
     cout << "Ciudad 3: " << temp.temperaturaPromedioCiudad(3) << endl;

     cout << "=== PRUEBA 4: Dia mas caliente ===\n";
     cout << "Dia: " << temp.diaMasCaliente() << endl;

     cout << "=== PRUEBA 5: Ciudad mas fria ===\n";
     cout << "Ciudad: " << temp.ciudadMasFria() << endl;



     MatrizSimetrica simet;
     cout << "Ejercicio 7: " << endl;

     cout << "=== PRUEBA 1: Matriz inicial ===\n";
     cout << simet.toString() << endl;

     cout << "=== PRUEBA 2: Cargar matriz simetrica ===\n";
     simet.insertar(0, 0, 1);
     simet.insertar(0, 1, 2);
     simet.insertar(1, 0, 2);
     simet.insertar(1, 1, 3);

     simet.insertar(2, 2, 4);
     simet.insertar(3, 3, 5);

     cout << simet.toString() << endl;

     cout << "Es simetrica: "
          << (simet.esSimetrica() ? "true" : "false")
          << " (esperado true)\n";

     cout << "=== PRUEBA 3: Es diagonal ===\n";
     cout << (simet.esDiagonal() ? "true" : "false")
          << " (esperado false)\n";

     cout << "=== PRUEBA 4: Transponer ===\n";
     simet.transponer();
     cout << simet.toString() << endl;



     MatrizInventario invent;
     cout << "Ejercicio 8: " << endl;

     cout << "=== PRUEBA 1: Matriz inicial ===\n";
     cout << invent.toString() << endl;

     cout << "=== PRUEBA 2: Agregar cantidades ===\n";
     invent.agregarCantidad(0, 0, 10);
     invent.agregarCantidad(0, 1, 5);
     invent.agregarCantidad(1, 0, 7);
     invent.agregarCantidad(1, 2, 20);
     invent.agregarCantidad(2, 3, 15);
     invent.agregarCantidad(3, 4, 8);
     invent.agregarCantidad(4, 1, 12);
     invent.agregarCantidad(5, 2, 6);

     cout << invent.toString() << endl;

     cout << "=== PRUEBA 3: Total por producto ===\n";
     cout << "Producto 0: " << invent.totalProducto(0) << endl;
     cout << "Producto 1: " << invent.totalProducto(1) << endl;
     cout << "Producto 2: " << invent.totalProducto(2) << endl;

     cout << "=== PRUEBA 4: Total por almacen ===\n";
     cout << "Almacen 0: " << invent.totalAlmacen(0) << endl;
     cout << "Almacen 1: " << invent.totalAlmacen(1) << endl;
     cout << "Almacen 2: " << invent.totalAlmacen(2) << endl;

     cout << "=== PRUEBA 5: Almacen con mas productos ===\n";
     cout << "Almacen: " << invent.almacenConMasProductos() << endl;



     MatrizHorarios horario;
     cout << "Ejercicio 9: " << endl;

     cout << "=== PRUEBA 1: Horario inicial ===\n";
     cout << horario.toString() << endl;

     cout << "=== PRUEBA 2: Agregar clases ===\n";
     horario.agregarClase(0, 0, "Matematica");
     horario.agregarClase(0, 1, "Programacion");
     horario.agregarClase(1, 2, "Fisica");
     horario.agregarClase(1, 3, "Quimica");
     horario.agregarClase(1, 4, "Programacion");
     horario.agregarClase(2, 0, "Historia");

     cout << horario.toString() << endl;

     cout << "=== PRUEBA 3: Clases por dia ===\n";
     cout << "Dia 0: " << horario.clasesPorDia(0) << endl;
     cout << "Dia 1: " << horario.clasesPorDia(1) << endl;
     cout << "Dia 2: " << horario.clasesPorDia(2) << endl;

     cout << "=== PRUEBA 4: Dia mas ocupado ===\n";
     cout << "Dia: " << horario.diaMasOcupado() << endl;

     cout << "=== PRUEBA 5: Verificar si esta libre ===\n";
     cout << "Dia 0 Hora 2: "
          << (horario.estaLibre(0, 2) ? "Libre" : "Ocupado") << endl;
     cout << "Dia 0 Hora 0: "
          << (horario.estaLibre(0, 0) ? "Libre" : "Ocupado") << endl;




     MatrizSalaCine cine;
     cout << "Ejercicio 10: " << endl;

     cout << "=== PRUEBA 1: Sala inicial ===\n";
     cout << cine.toString() << endl;

     cout << "=== PRUEBA 2: Reservar asientos ===\n";
     cine.reservarAsiento(0, 0);
     cine.reservarAsiento(0, 1);
     cine.reservarAsiento(0, 2);
     cine.reservarAsiento(5, 10);
     cine.reservarAsiento(5, 11);

     cout << cine.toString() << endl;

     cout << "=== PRUEBA 3: Asientos disponibles ===\n";
     cout << cine.asientosDisponibles() << endl;

     cout << "=== PRUEBA 4: Fila completa ===\n";
     cout << "Fila 0: " << (cine.filaCompleta(0) ? "SI" : "NO") << endl;

     cout << "=== PRUEBA 5: Mejor fila ===\n";
     cout << "Fila con mas asientos libres: " << cine.mejorFila() << endl;



     cout << "Ejercicio 11: " << endl;

     MatrizDinamicaEnt mDent(3, 4);

     mDent.insertar(0, 0, 10);
     mDent.insertar(1, 2, 25);
     mDent.insertar(2, 3, 40);

     cout << mDent.toString() << endl;
     cout << "Valor en (1,2): " << mDent.obtener(1,2) << endl;



     cout << "Ejercicio 12:" << endl;

     ColeccionPersonas cp(2, 2);

     cp.agregarPersona(0, 0, "Ana", 25);
     cp.agregarPersona(0, 1, "Luis", 30);
     cp.agregarPersona(1, 0, "Maria", 20);
     cp.agregarPersona(1, 1, "Pedro", 28);

     MatrizDinamicaPers joven = cp.personaMasJoven();
     cout << "Persona mas joven: " << joven.getNombre()
          << " (" << joven.getEdad() << " anios)" << endl;

     cout << "Promedio de edades: " << cp.promedioEdades() << endl;




     MatrizInventarioDinamico inventario(2, 3);
     cout << "Ejercicio 13: " << endl;

     cout << "=== PRUEBA 1: Agregar productos ===\n";
     inventario.agregarProducto(0, 0, "Laptop", 1200.50, 5);
     inventario.agregarProducto(0, 1, "Mouse", 25.99, 50);
     inventario.agregarProducto(0, 2, "Teclado", 45.75, 30);

     inventario.agregarProducto(1, 0, "Monitor", 300.00, 10);
     inventario.agregarProducto(1, 1, "USB", 10.00, 3);
     inventario.agregarProducto(1, 2, "Auriculares", 80.00, 2);

     cout << "=== PRUEBA 2: Valor total del inventario ===\n";
     cout << "Valor total: " << inventario.valorTotalInventario() << endl;

     cout << "=== PRUEBA 3: Producto mas caro ===\n";
     auto caro = inventario.productoMasCaro();
     cout << "Producto mas caro: " << caro.getNombre()
          << " | Precio: " << caro.getPrecio() << endl;

     cout << "=== PRUEBA 4: Productos con stock bajo ===\n";
     cout << "Stock menor a 5: "
          << inventario.productosConStockBajo(5)
          << " (esperado 2)" << endl;



     cout << "Ejercicio 14:" << endl;

     MatrizDinamicaGrupo grupo(2, 2);

     double notas1[5] = {7, 8, 9, 6, 8};
     double notas2[5] = {5, 6, 5, 6, 5};
     double notas3[5] = {9, 9, 8, 9, 10};
     double notas4[5] = {4, 5, 4, 5, 4};

     grupo.agregarEstudiante(0, 0, "Ana", notas1);
     grupo.agregarEstudiante(0, 1, "Luis", notas2);
     grupo.agregarEstudiante(1, 0, "Maria", notas3);
     grupo.agregarEstudiante(1, 1, "Pedro", notas4);

     cout << "Promedio del grupo: " << grupo.promedioGrupo() << endl;

     MatrizDinamicaEst mejor = grupo.mejorPromedio();
     cout << "Mejor promedio: " << mejor.getNombre()
          << " (" << mejor.promedio() << ")" << endl;

     cout << "Estudiantes aprobados (>=6): "
          << grupo.estudiantesAprobados(6) << endl;



     cout << "Ejercicio 15:" << endl;

     Biblioteca biblio(2, 3);

     biblio.agregarLibro(0, 0, "Cien anios de soledad", "Garcia Marquez", 1967);
     biblio.agregarLibro(0, 1, "El coronel no tiene quien le escriba", "Garcia Marquez", 1961);
     biblio.agregarLibro(0, 2, "1984", "Orwell", 1949);

     biblio.agregarLibro(1, 0, "Fahrenheit 451", "Bradbury", 1953);
     biblio.agregarLibro(1, 1, "El juego de Ender", "Card", 1985);
     biblio.agregarLibro(1, 2, "Sapiens", "Harari", 2011);

     cout << "Libros de Garcia Marquez: "
          << biblio.buscarPorAutor("Garcia Marquez") << endl;

     cout << "Libros anteriores a 1970: "
          << biblio.librosAntiguos(1970) << endl;

     MatrizDinamicaLibro reciente = biblio.libroMasReciente();
     cout << "Libro mas reciente: "
          << reciente.getTitulo()
          << " (" << reciente.getAnio() << ")" << endl;



     cout << "Ejercicio 16:" << endl;

     MatrizPunterosObj mPO(2, 3);

     cout << "=== PRUEBA 1: Matriz inicial ===" << endl;
     cout << mPO.toString() << endl;

     cout << "=== PRUEBA 2: Asignar valores ===" << endl;
     mPO.asignarValor(0, 0, 10);
     mPO.asignarValor(0, 1, 20);
     mPO.asignarValor(1, 2, 30);

     cout << mPO.toString() << endl;

     cout << "=== PRUEBA 3: Obtener valores ===" << endl;
     cout << "Valor (0,0): " << mPO.obtenerValor(0,0) << endl;
     cout << "Valor (1,2): " << mPO.obtenerValor(1,2) << endl;
     cout << "Valor (0,2): " << mPO.obtenerValor(0,2) << endl;



     cout << "Ejercicio 17:" << endl;

     ColeccionPersonasPunteros cpp(2, 2);

     cpp.agregarPersona(0, 0, "Ana", 25);
     cpp.agregarPersona(0, 1, "Luis", 40);
     cpp.agregarPersona(1, 0, "Maria", 30);

     cout << "Total personas: " << cpp.contarPersonas() << endl;

     MatrizDinamicaPers vieja = cpp.personaMasVieja();
     cout << "Persona mas vieja: " << vieja.getNombre()
          << " (" << vieja.getEdad() << ")" << endl;

     cpp.eliminarPersona(0, 1);
     cout << "Total personas luego de eliminar: "
          << cpp.contarPersonas() << endl;



     cout << "Ejercicio 18:" << endl;

     Tienda tienda(2, 3);

     tienda.agregarProducto(0, 0, "Laptop", 1200, 5);
     tienda.agregarProducto(0, 1, "Mouse", 20, 0);
     tienda.agregarProducto(1, 0, "Teclado", 45, 10);

     cout << "Buscar Laptop: "
          << (tienda.buscarProducto("Laptop") ? "true" : "false") << endl;

     cout << "Buscar Monitor: "
          << (tienda.buscarProducto("Monitor") ? "true" : "false") << endl;

     cout << "Productos agotados: "
          << tienda.productosAgotados() << endl;

     tienda.actualizarStock(0, 1, 8);
     cout << "Productos agotados luego de actualizar: "
          << tienda.productosAgotados() << endl;

     tienda.eliminarProducto(1, 0);



     Aula aula(2, 2);

     double n1[5] = {7,8,9,6,8};
     double n2[5] = {5,6,5,6,5};

     aula.agregarEstudiante(0, 0, "Ana", n1);
     aula.agregarEstudiante(0, 1, "Luis", n2);

     cout << "Promedio aula: " << aula.promedioAula() << endl;

     MatrizDinamicaEst Mejor = aula.mejorEstudiante();
     cout << "Mejor estudiante: " << mejor.getNombre() << endl;

     aula.reemplazarEstudiante(0, 1, "Pedro", n1);



     Libreria lib(2, 2);

     lib.agregarLibro(0, 0, "1984", "Orwell", 1949);
     lib.agregarLibro(0, 1, "Fahrenheit 451", "Bradbury", 1953);
     lib.agregarLibro(1, 0, "Sapiens", "Harari", 2011);

     cout << "Buscar 1984: "
          << (lib.buscarLibro("1984") ? "true" : "false") << endl;

     cout << "Libros de Orwell: "
          << lib.librosPorAutor("Orwell") << endl;

     MatrizDinamicaLibro viejo = lib.libroMasAntiguo();
     cout << "Libro mas antiguo: "
          << viejo.getTitulo()
          << " (" << viejo.getAnio() << ")" << endl;



     cout << "Ejercicio 21:" << endl;

     Hotel hotel(2, 3);

     hotel.reservarHabitacion(0, 0, 101, "Simple", 80);
     hotel.reservarHabitacion(0, 1, 102, "Doble", 120);
     hotel.reservarHabitacion(1, 0, 201, "Suite", 250);

     cout << "Habitaciones disponibles: "
          << hotel.habitacionesDisponibles() << endl;

     cout << "Ingresos totales: "
          << hotel.ingresosTotales() << endl;

     Habitacion cara = hotel.habitacionMasCara();
     cout << "Habitacion mas cara: "
          << cara.getNumero() << " "
          << cara.getTipo() << " "
          << cara.getPrecio() << endl;



     cout << "Ejercicio 22:" << endl;

     Equipo equipo(2, 3);

     equipo.agregarJugador(0, 0, "Messi", "Delantero", 10);
     equipo.agregarJugador(0, 1, "Modric", "Mediocampo", 8);
     equipo.agregarJugador(1, 0, "Ramos", "Defensa", 4);

     cout << "Total jugadores: "
          << equipo.totalJugadores() << endl;

     cout << "Delanteros: "
          << equipo.jugadoresPorPosicion("Delantero") << endl;

     cout << "Existe jugador #10? "
          << equipo.buscarJugador(10) << endl;



     cout << "Ejercicio 23:" << endl;

     HorarioClase horarioSemanal;

     horarioSemanal.agregarClase(1, 2, "Programacion", "Juan", 8, 10);
     horarioSemanal.agregarClase(1, 3, "Matematica", "Juan", 9, 11);
     horarioSemanal.agregarClase(2, 4, "Fisica", "Ana", 10, 12);

     cout << "Clases dia 1: "
          << horario.clasesPorDia(1) << endl;

     cout << "Clases de Juan: "
          << horarioSemanal.clasesPorProfesor("Juan") << endl;

     cout << "Conflicto dia 1 hora 2: "
          << horarioSemanal.hayConflicto(1, 2) << endl;



     cout << "Ejercicio 24:" << endl;

     Editorial editorial(2, 3);

     editorial.agregarLibro(0, 0, "C++ Basico", "Juan Perez", 120, 25.5, 2020);
     editorial.agregarLibro(0, 1, "POO Avanzado", "Juan Perez", 80, 40.0, 2021);
     editorial.agregarLibro(1, 0, "Estructuras de Datos", "Ana Lopez", 200, 35.0, 2020);
     editorial.agregarLibro(1, 2, "Algoritmos", "Carlos Ruiz", 150, 50.0, 2022);

     cout << "Ganancias autor Juan Perez: "
          << editorial.gananciasAutor("Juan Perez") << endl;

     cout << "Unidades vendidas en 2020: "
          << editorial.unidadesVendidasAnio(2020) << endl;

     LibroEditorial bestSeller = editorial.libroBestSeller();
     cout << "Libro best seller: " << bestSeller.getTitulo() << endl;

     cout << "Ganancias sucursal 0: "
          << editorial.gananciasSucursal(0) << endl;

     cout << "Ganancias sucursal 1: "
          << editorial.gananciasSucursal(1) << endl;



     cout << "Ejercicio 25:" << endl;

     Hacienda h(3, 4);

     h.agregarDeclaracion(0, 0, 101, 1200.5);
     h.agregarDeclaracion(0, 1, 101, 800.0);
     h.agregarDeclaracion(1, 0, 202, 1500.0);
     h.agregarDeclaracion(2, 2, 303, 2000.0);
     h.agregarDeclaracion(2, 3, 303, 500.0);

     cout << "Total contribuyente 0: " << h.totalContribuyente(0) << endl;
     cout << "Total contribuyente 1: " << h.totalContribuyente(1) << endl;
     cout << "Total contribuyente 2: " << h.totalContribuyente(2) << endl;

     cout << "Total anio 0: " << h.totalAnio(0) << endl;
     cout << "Total anio 2: " << h.totalAnio(2) << endl;

     cout << "Contribuyente con mayor monto: " << h.contribuyenteConMayorMonto() << endl;

     cout << "Promedio anio 0: " << h.promedioAnio(0) << endl;
     cout << "Promedio anio 3: " << h.promedioAnio(3) << endl;



     cout << "Ejercicio 26:" << endl;

     MatrizDeMatrices mdm(2, 2, 3, 3);

     mdm.asignarValor(0, 0, 0, 0, 5);
     mdm.asignarValor(0, 0, 1, 1, 10);
     mdm.asignarValor(0, 0, 2, 2, 15);

     mdm.asignarValor(1, 1, 0, 0, 7);
     mdm.asignarValor(1, 1, 1, 1, 8);
     mdm.asignarValor(1, 1, 2, 2, 9);

     cout << mdm.toString() << endl;

     cout << "Suma submatriz (0,0): " << mdm.sumarSubmatriz(0,0) << endl;
     cout << "Suma submatriz (1,1): " << mdm.sumarSubmatriz(1,1) << endl;



     cout << "Ejercicio 27:" << endl;

     Urna urna(3, 4);

     urna.registrarVoto(0, 0, "Ana", "2024-06-01");
     urna.registrarVoto(0, 1, "Luis", "2024-06-01");
     urna.registrarVoto(1, 0, "Ana", "2024-06-01");
     urna.registrarVoto(2, 2, "Maria", "2024-06-01");
     urna.registrarVoto(2, 0, "Ana", "2024-06-01");

     cout << urna.toString() << endl;

     cout << "Votos candidato 0: " << urna.votosPorCandidato(0) << endl;
     cout << "Votos candidato 1: " << urna.votosPorCandidato(1) << endl;
     cout << "Votos mesa 0: " << urna.votosPorMesa(0) << endl;
     cout << "Total votos: " << urna.totalVotos() << endl;
     cout << "Candidato ganador: " << urna.candidatoGanador() << endl;



     cout << "Ejercicio 28:" << endl;

     Almacen almacen(3, 3);

     almacen.agregarArticulo(0, 0, "A1", "Laptop", "Tecnologia", 5, 1200);
     almacen.agregarArticulo(0, 1, "A2", "Mouse", "Tecnologia", 0, 25);
     almacen.agregarArticulo(1, 0, "B1", "Silla", "Muebles", 3, 150);
     almacen.agregarArticulo(2, 2, "C1", "Libro", "Educacion", 10, 40);

     cout << almacen.toString() << endl;

     cout << "Articulos categoria 0: " << almacen.articulosPorCategoria(0) << endl;
     cout << "Valor estante 0: " << almacen.valorEstante(0) << endl;
     cout << "Articulos agotados: " << almacen.articulosAgotados() << endl;

     Articulo Caro = almacen.articuloMasCaro();
     cout << "Articulo mas caro: " << Caro.getNombre() << " " << Caro.getPrecio() << endl;



     cout << "Ejercicio 29:" << endl;

     RegistroAcademico reg(3, 3);

     reg.agregarCalificacion(0, 0, "Ana", "Matematica", 9, 1);
     reg.agregarCalificacion(0, 1, "Ana", "Fisica", 8, 1);
     reg.agregarCalificacion(1, 0, "Luis", "Matematica", 6, 1);
     reg.agregarCalificacion(1, 1, "Luis", "Fisica", 7, 1);
     reg.agregarCalificacion(2, 0, "Maria", "Matematica", 10, 1);
     reg.agregarCalificacion(2, 1, "Maria", "Fisica", 9, 1);

     cout << reg.toString() << endl;

     cout << "Promedio estudiante 0: " << reg.promedioEstudiante(0) << endl;
     cout << "Promedio materia 0: " << reg.promedioMateria(0) << endl;
     cout << "Mejor estudiante: " << reg.mejorEstudiante() << endl;
     cout << "Estudiantes aprobados >=7: " << reg.estudiantesAprobados(7) << endl;
     cout << "Materia mas dificil: " << reg.materiaMasDificil() << endl;



     cout << "Ejercicio 30:" << endl;

     BibliotecaUni bUni(2, 3);

     bUni.agregarLibro(0, 0, "ISBN1", "Calculo", "Perez", 2005, true);
     bUni.agregarLibro(0, 1, "ISBN2", "Fisica", "Perez", 1998, true);
     bUni.agregarLibro(1, 0, "ISBN3", "Historia", "Lopez", 1980, false);

     cout << bUni.toString() << endl;

     bUni.prestarLibro(0, 0);
     bUni.devolverLibro(1, 0);

     cout << "Disponibles: " << bUni.librosDisponibles() << endl;
     cout << "Existe ISBN2: " << bUni.buscarPorISBN("ISBN2") << endl;
     cout << "Libros de Perez: " << bUni.librosPorAutor("Perez") << endl;
     cout << "Libros antiguos: " << bUni.librosAntiguos(2000) << endl;
     cout << "Valor total: " << bUni.valorTotalBiblioteca() << endl;

     cout << "Fin de los ejercicios, 30/30" << endl;


    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}