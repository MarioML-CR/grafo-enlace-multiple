#include <iostream>
#include "../tl/Gestor.h"
#include "utilitario/Validar.h"

using namespace std;

Gestor gestor;
Validar validar;
void menu();
void procesarMenu(int &, bool &);
void menuSecundario();
void procesarMenuSecundario(int &, bool &);
void menuInsertUser();
void procesarMenuInsertUser(int &, bool &);
void menuInserAuto();
void procesarMenuInserAuto(int &, bool &);
int ingresarNum(string);
void insertVerAristCase1();
void insertVerAristCase2();
void insertVerAristCase3();
void insertVerticeUser();
void insertaAristaUser();
void listaAdyacencia();
void eliminarArista();
void eliminarVertice();
void eliminarGrafo();
void numVertices();
void recorridoAnchura();
void recorridoProfundidad();
void primeroAnchura();
void primeroProfundidad();
void dijkstra();

int main() {
    menu();
    return 0;
}
void menu() {
    bool salir;
    string valor;
    int opcion = 0;
    do {
        cout << "\nMenú Árbol\n\nElija una opción\n" <<
             "01 Agregar vértices y aristas\n" <<
             "02 Imprimir\n" <<
             "03 Número de vértices\n" <<
             "04 Eliminar vértice\n" <<
             "05 Eliminar arista\n" <<
             "06 Eliminar grafo\n" <<
             "07 Recorrido en anchura\n" <<
             "08 Recorrido en profundidad\n" <<
             "09 Primero en anchura\n" <<
             "10 Primero en profundidad\n" <<
             "11 Ruta de menor costo (Dijkstra)\n" <<
             "12 Salir\n";
        cin >> valor;
        opcion = validar.ingresarInt(valor);
        procesarMenu(opcion, salir);
    } while (!salir);
}
void procesarMenu(int & pOpcion, bool & salir) {
    switch (pOpcion) {
        case 1:
            menuSecundario();
            break;
        case 2:
            listaAdyacencia();
            break;
        case 3:
            numVertices();
            break;
        case 4:
            eliminarVertice();
            break;
        case 5:
            eliminarArista();
            break;
        case 6:
            eliminarGrafo();
            break;
        case 7:
            recorridoAnchura();
            break;
        case 8:
            recorridoProfundidad();
            break;
        case 9:
            primeroAnchura();
            break;
        case 10:
            primeroProfundidad();
            break;
        case 11:
            dijkstra();
            break;
        case 12:
            salir = true;
            break;
        default:
            cout << "Opción inválida\n";
    }
}
void menuSecundario() {
    bool salir;
    string valor;
    int opcion = 0;
    do {
        cout << "\nMenú de carga\n\nElija una opción\n" <<
             "01 Agregar por usuario\n" <<
             "02 Carga automática\n" <<
             "03 Volver al menú principal\n";
        cin >> valor;
        opcion = validar.ingresarInt(valor);
        procesarMenuSecundario(opcion, salir);
    } while (!salir);
}
void procesarMenuSecundario(int & pOpcion, bool & salir) {
    switch (pOpcion) {
        case 1:
            menuInsertUser();
            break;
        case 2:
            menuInserAuto();
            break;
        case 3:
            salir = true;
            break;
        default:
            cout << "Opción inválida\n";
    }
}
void menuInsertUser() {
    bool salir;
    string valor;
    int opcion = 0;
    do {
        cout << "\nMenú de carga manual\n\nElija una opción\n" <<
             "01 Agregar vértices\n" <<
             "02 Agregar aristas\n" <<
             "03 Volver al menu anterior\n";
        cin >> valor;
        opcion = validar.ingresarInt(valor);
        procesarMenuInsertUser(opcion, salir);
    } while (!salir);
}
void procesarMenuInsertUser(int & pOpcion, bool & salir) {
    switch (pOpcion) {
        case 1:
            insertVerticeUser();
            break;
        case 2:
            insertaAristaUser();
            break;
        case 3:
            salir = true;
            break;
        default:
            cout << "Opción inválida\n";
    }
}
void menuInserAuto() {
    bool salir;
    string valor;
    int opcion = 0;
    do {
        cout << "\nMenú de carga automática\n\nElija una opción\n" <<
             "01 Cargar caso 1\n" <<
             "02 Cargar caso 2\n" <<
             "03 Cargar caso 3\n" <<
             "04 Volver al menu anterior\n";
        cin >> valor;
        opcion = validar.ingresarInt(valor);
        procesarMenuInserAuto(opcion, salir);
    } while (!salir);
}
void procesarMenuInserAuto(int & pOpcion, bool & salir) {
    switch (pOpcion) {
        case 1:
            insertVerAristCase1();
            break;
        case 2:
            insertVerAristCase2();
            break;
        case 3:
            insertVerAristCase3();
            break;
        case 4:
            salir = true;
            break;
        default:
            cout << "Opción inválida\n";
    }
}
int ingresarNum(string msg){
    int num;
    string valor;
    do {
        cout << msg << endl;
        cin >> valor;
        num = validar.ingresarInt(valor);
        if (num == -1){
            cout << "El indice ingresado es incorrecto\nVuelva a intentarlo\n";
        }
    } while (num == -1);
    return num;
}
void insertVerticeUser(){
    string vertice, msg = "número de vértices que va a ingresar\n";
    int entradas = ingresarNum(msg);
    for (int i = 1; i <= entradas; ++i) {
        cout << "Ingrese el nombre del vértice " << i << "\n";
        cin >> vertice;
        for (auto & c: vertice) c = toupper(c);
        int valor = validar.stringASCII(vertice);
        gestor.insertVertice(valor, vertice);
    }
    cout << "La carga se realizó satisfactoriamente.\n";
}
void insertaAristaUser(){
    string origen, destino, msg  = "número de aristas que va a ingresar\n";
    int entradas = ingresarNum(msg);
    int peso;
    for (int i = 1; i <= entradas; ++i) {
        cout << "Ingrese el nombre de la vértice de origen " << i << "\n";
        cin >> origen;
        for (auto & c: origen) c = toupper(c);
        cout << "Ingrese el nombre de la vértice de destino " << i << "\n";
        msg = "Ingrese el peso del vértice\n";
        cin >> destino;
        for (auto & c: destino) c = toupper(c);
        peso = ingresarNum(msg);
        cout << gestor.insertaArista(origen, destino, peso);
    }
    cout << "La carga se realizó satisfactoriamente.\n";
}
void insertVerAristCase1(){
    // inserción de vértices
    string nombres[7] = {"SAN_JOSé", "ALAJUELA", "CARTAGO", "HEREDIA", "PUNTARENAS", "GUANACASTE", "LIMóN"};
    for (int i = 0; i < 7; ++i) {
        gestor.insertVertice(validar.stringASCII(nombres[i]),nombres[i]);
    }
    // inserción de aristas
    gestor.insertaArista("SAN_JOSé", "CARTAGO", 500);
    gestor.insertaArista("SAN_JOSé", "HEREDIA", 200);
    gestor.insertaArista("SAN_JOSé", "GUANACASTE", 600);
    gestor.insertaArista("ALAJUELA", "PUNTARENAS", 100);
    gestor.insertaArista("ALAJUELA", "CARTAGO", 500);
    gestor.insertaArista("CARTAGO", "GUANACASTE", 200);
    gestor.insertaArista("HEREDIA", "ALAJUELA", 300);
    gestor.insertaArista("HEREDIA", "GUANACASTE", 800);
    gestor.insertaArista("PUNTARENAS", "SAN_JOSé", 400);
    gestor.insertaArista("PUNTARENAS", "CARTAGO", 300);
    gestor.insertaArista("GUANACASTE", "PUNTARENAS", 300);
    gestor.insertaArista("LIMóN", "SAN_JOSé", 480);
    gestor.insertaArista("LIMóN", "HEREDIA", 220);
    gestor.insertaArista("LIMóN", "CARTAGO", 560);
    cout << "La carga se realizó satisfactoriamente. Para ver reportes vuelva al menú principal\n";
}
void insertVerAristCase2(){
    // inserción de vértices
    string nombres[7] = {"A", "B", "C", "G", "F", "D", "E"};
    for (int i = 0; i < 7; ++i) {
        gestor.insertVertice(validar.stringASCII(nombres[i]),nombres[i]);
    }
    // inserción de aristas
    gestor.insertaArista("A", "A", 13);
    gestor.insertaArista("A", "D", 18);
    gestor.insertaArista("B", "B", 52);
    gestor.insertaArista("B", "C", 17);
    gestor.insertaArista("B", "D", 83);
    gestor.insertaArista("B", "F", 97);
    gestor.insertaArista("B", "G", 60);
    gestor.insertaArista("C", "A", 4);
    gestor.insertaArista("D", "B", 97);
    gestor.insertaArista("D", "C", 37);
    gestor.insertaArista("D", "D", 22);
    gestor.insertaArista("D", "E", 41);
    gestor.insertaArista("D", "G", 64);
    gestor.insertaArista("E", "B", 8);
    gestor.insertaArista("E", "E", 45);
    gestor.insertaArista("E", "F", 92);
    gestor.insertaArista("F", "A", 8);
    gestor.insertaArista("F", "B", 45);
    gestor.insertaArista("F", "E", 42);
    gestor.insertaArista("G", "D", 17);
    cout << "La carga se realizó satisfactoriamente. Para ver reportes vuelva al menú principal\n";

}
void insertVerAristCase3(){
    // inserción de vértices
    string nombres[10] = {"TIJ", "MTY", "MZT", "BJX", "GDL", "SAN", "TAM", "MEX", "CUN", "MID"};
    for (int i = 0; i < 10; ++i) {
        gestor.insertVertice(validar.stringASCII(nombres[i]),nombres[i]);
    }
    // inserción de aristas
    gestor.insertaArista("TIJ", "MTY", 800);
    gestor.insertaArista("MTY", "BJX", 700);
    gestor.insertaArista("MZT", "TIJ", 400);
    gestor.insertaArista("MZT", "BJX", 300);
    gestor.insertaArista("BJX", "SAN", 900);
    gestor.insertaArista("BJX", "TAM", 400);
    gestor.insertaArista("BJX", "MEX", 350);
    gestor.insertaArista("GDL", "MZT", 500);
    gestor.insertaArista("GDL", "MTY", 450);
    gestor.insertaArista("GDL", "BJX", 250);
    gestor.insertaArista("GDL", "MEX", 500);
    gestor.insertaArista("SAN", "MID", 1200);
    gestor.insertaArista("TAM", "MID", 450);
    gestor.insertaArista("MEX", "MID", 450);
    gestor.insertaArista("MEX", "CUN", 650);
    gestor.insertaArista("CUN", "GDL", 650);
    cout << "La carga se realizó satisfactoriamente. Para ver reportes vuelva al menú principal\n";
}

void listaAdyacencia(){
    if (gestor.vacio()){
        cout << "Aún no se han ingresado vértices...\n";
    } else {
        cout << "La lista de adyacencia es...\n";
        gestor.listaAdyacencia();
    }
}
void eliminarVertice(){
    if (gestor.vacio()){
        cout << "Aún no se han ingresado vértices...\n";
    } else {
        string vertice;
        cout << "Ingrese el nombre del vértice que desea eliminar\n";
        cin >> vertice;
        for (auto & c: vertice) c = toupper(c);
        cout << gestor.eliminarVertice(vertice);
    }
}
void eliminarArista(){
    if (gestor.vacio()){
        cout << "Aún no se han ingresado vértices...\n";
    } else {
        string origen, destino;
        cout << "Ingrese la ciudad de origen\n";
        cin >> origen;
        for (auto & c: origen) c = toupper(c);
        cout << "Ingrese la ciudad de destino\n";
        cin >> destino;
        for (auto & c: destino) c = toupper(c);
        gestor.eliminarArista(origen, destino);
        cout << "Proceso completado satisfactoriamente\n";
    }

}
void eliminarGrafo(){
    if (gestor.vacio()){
        cout << "Aún no se han ingresado vértices...\n";
    } else {
        gestor.eliminarGrafo();
    }

}
void numVertices(){
    if (gestor.vacio()){
        cout << "Aún no se han ingresado vértices...\n";
    } else {
        cout << "La matriz de adyacencia tiene " + to_string(gestor.numVertices()) + " vértices\n";
    }
}
void recorridoAnchura(){
    if (gestor.vacio()){
        cout << "Aún no se han ingresado vértices...\n";
    } else {
        string nombre;
        cout << "Ingrese el nombre del vértice inicial\n";
        cin.ignore();
        getline(cin, nombre, '\n');
        for (auto & c: nombre) c = toupper(c);
        gestor.recorridoAnchura(nombre);
    }
}
void recorridoProfundidad(){
    if (gestor.vacio()){
        cout << "Aún no se han ingresado vértices...\n";
    } else {
        string nombre;
        cout << "Ingrese el nombre del vértice inicial\n";
        cin.ignore();
        getline(cin, nombre, '\n');
        for (auto & c: nombre) c = toupper(c);
        gestor.recorridoProfundidad(nombre);
    }
}
void primeroAnchura(){
    if (gestor.vacio()){
        cout << "Aún no se han ingresado vértices...\n";
    } else {
        string origen, destino;
        cout << "Ingrese el nombre del vértice origen\n";
        cin >> origen;
        for (auto & c: origen) c = toupper(c);
        cout << origen << endl;
        cout << "Ingrese el nombre del vértice destino\n";
        cin >> destino;
        for (auto & c: destino) c = toupper(c);
        gestor.primeroAnchura(origen, destino);
    }
}
void primeroProfundidad(){
    if (gestor.vacio()){
        cout << "Aún no se han ingresado vértices...\n";
    } else {
        string origen, destino;
        cout << "Ingrese el nombre de la vértice de origen\n";
        cin >> origen;
        for (auto & c: origen) c = toupper(c);
        cout << "Ingrese el nombre de la vértice de destino\n";
        cin >> destino;
        for (auto & c: destino) c = toupper(c);
        gestor.primeroProfundidad(origen, destino);
    }
}
void dijkstra(){
    if (gestor.vacio()){
        cout << "Aún no se han ingresado vértices...\n";
    } else {
        string origen, destino;
        cout << "Ingrese el nombre de la vértice de origen\n";
        cin >> origen;
        for (auto & c: origen) c = toupper(c);
        cout << "Ingrese el nombre de la vértice de destino\n";
        cin >> destino;
        for (auto & c: destino) c = toupper(c);
        gestor.dijkstra(origen, destino);
    }
}

