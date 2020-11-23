//
// Created by Mario Martinez on 23/11/20.
//

#ifndef GRAFO_ENLACE_MULTIPLE_ARISTA_H
#define GRAFO_ENLACE_MULTIPLE_ARISTA_H

class Arista;
#include "Vertice.h"
#include <string>
using namespace std;

class Arista {
public:

//    Arista(int peso, const string &nombre, Vertice *ady, Arista *sig = nullptr);

    Arista(int peso, const string &nombre, Vertice *ady, Arista *sig = nullptr, Vertice *prev = nullptr);

    virtual ~Arista();

    int getPeso() const;

    void setPeso(int peso);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    Arista *getSig() const;

    void setSig(Arista *sig);

    Vertice *getAdy() const;

    void setAdy(Vertice *ady);

    Vertice *getPrev() const;

    void setPrev(Vertice *prev);

private:
    int peso;
    string nombre;
    Vertice *ady;
    Arista *sig;
    Vertice *prev;
};



#endif //GRAFO_ENLACE_MULTIPLE_ARISTA_H
