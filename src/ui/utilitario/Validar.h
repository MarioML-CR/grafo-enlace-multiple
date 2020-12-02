//
// Created by Mario Martinez on 23/11/20.
//

#ifndef GRAFO_ENLACE_MULTIPLE_VALIDAR_H
#define GRAFO_ENLACE_MULTIPLE_VALIDAR_H

#include <iostream>
using namespace std;

class Validar {
public:
    int ingresarInt(string);

    int nPrimoMenorQue(int); // retorna el número primo menor al indice pasado por argumento

    bool esPrimo(int); // Analiza si un número es primo

    static int stringASCII(string &);
};

#endif //GRAFO_ENLACE_MULTIPLE_VALIDAR_H
