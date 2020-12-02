//
// Created by Mario Martinez on 23/11/20.
//

#ifndef GRAFO_ENLACE_MULTIPLE_GESTOR_H
#define GRAFO_ENLACE_MULTIPLE_GESTOR_H

#include "../bl/Grafo.h"
#include "../ui/utilitario/Validar.h"
//
//Validar val;

class Gestor {
public:
    Gestor();

    Grafo *getGrafo() const;

    void setGrafo(Grafo *grafo);

    void insertVertice(int valor, string nombre);

    string insertaArista(string salida, string llegada, int peso);

    string listaAdyacencia();

    string listaAdyacenciaXVertice(string vertice);

    string eliminarArista(string salida, string llegada);

    string eliminarVertice(string vertice);

    void eliminarGrafo();

    int numVertices();

    bool vacio() const;

    string recorridoAnchura(string pOrigen);

    string recorridoProfundidad(string pOrigen);

    string primeroAnchura(string pOrigen, string pDestino);

    string primeroProfundidad(string pOrigen, string pDestino);

    string dijkstra(string pOrigen, string pDestino);
private:
    Grafo *grafo;
};

#endif //GRAFO_ENLACE_MULTIPLE_GESTOR_H
