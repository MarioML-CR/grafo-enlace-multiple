//
// Created by Mario Martinez on 23/11/20.
//

#ifndef ARISTA_H
#define ARISTA_H

class Vertice;
#include "Vertice.h"
#include <string>
using namespace std;

class Arista {
public:

//    Arista(int peso, const string &nombre, Vertice *ady, Arista *sig = nullptr);

//    Arista(int peso, const string &nombre, Vertice *ady, Arista *sig = nullptr, Vertice *prev = nullptr);

    Arista(int peso, const string &nombre, Vertice *ady, Arista *sig = nullptr,
           Vertice *prev = nullptr, Arista *ant = nullptr);

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

    Arista *getAnt() const;

    void setAnt(Arista *ant);

private:
    int peso;
    string nombre;
    Vertice *ady;
    Arista *sig;
    Vertice *prev;
    Arista *ant;
};



#endif //GRAFO_ENLACE_MULTIPLE_ARISTA_H
