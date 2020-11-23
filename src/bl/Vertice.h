//
// Created by Mario Martinez on 23/11/20.
//

#ifndef GRAFO_ENLACE_MULTIPLE_VERTICE_H
#define GRAFO_ENLACE_MULTIPLE_VERTICE_H

#include <string>
class Vertice;
#include "Arista.h"


using namespace std;

class Vertice {
public:
//    Vertice(const string &nombre);

    Vertice(int indice, const string &nombre, Vertice *sig = nullptr, Arista *ady = nullptr);

    virtual ~Vertice();

    const string &getNombre() const;

    void setNombre(const string &nombre);

    Vertice *getNext() const;

    void setNext(Vertice *next);

    Arista *getAdy() const;

    void setAdy(Arista *ady);

    int getIndice() const;

    void setIndice(int indice);

private:
    int indice; // para ordenar lo vértices en forma ascendente
    string nombre;
    Vertice *next;
    Arista *ady;
};


#endif //GRAFO_ENLACE_MULTIPLE_VERTICE_H
