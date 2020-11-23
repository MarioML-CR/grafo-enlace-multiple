//
// Created by Mario Martinez on 23/11/20.
//

#ifndef GRAFO_ENLACE_MULTIPLE_GRAFO_H
#define GRAFO_ENLACE_MULTIPLE_GRAFO_H

#include "Vertice.h"
#include <queue> // para la cola
#include <list> // para la lista
#include <stack> // para la pila

class Grafo {
public:
    Grafo(Vertice *head = nullptr, Vertice *tail = nullptr, int tam = 0);

    virtual ~Grafo();

    Vertice *getHead() const;

    void setHead(Vertice *head);

    Vertice *getTail() const;

    void setTail(Vertice *tail);

    int getTam() const;

    void setTam(int tam);

    bool esListaVacia() const;

    int numVertices() const;

    Vertice *getVertice(string &nombre);

    void insertVertice(int indice, string & nombre);

    string insertaArista(string &salida, string &llegada, int peso);

    void listaAdyacencia();

    void eliminarArista(string &salida, string &llegada);

    bool eliminarVertice(string &pEliminar);

    void elminarGrafo();

    void recorridoAnchura(string &pOrigen);

    void recorridoProfundidad(string &pOrigen);

    void primeroAnchura(string &pOrigen, string &pDestino);

    void primeroProfundidad(string &pOrigen, string &pDestino);

    void dijkstra(string &pOrigen, string &pDestino);
private:
    Vertice *head;
    Vertice *tail;
    int tam;

    void insertarAlIincio(int indice, string & nombre);

    void insertarAlFinal(int indice, string & nombre);

    void eliminarArista(Vertice * origen, Vertice * destino);

    bool eliminarVertice(Vertice * vert);

    void recorridoAnchura(Vertice *origen);

    void recorridoProfundidad(Vertice *origen);

    void primeroAnchura(Vertice * origen, Vertice * destino);

    void primeroProfundidad(Vertice * origen, Vertice * destino);

    void dijkstra(Vertice * origen, Vertice * destino);

    static bool comparacion(pair<Vertice*, int> a, pair<Vertice*, int> b);
};



#endif //GRAFO_ENLACE_MULTIPLE_GRAFO_H
