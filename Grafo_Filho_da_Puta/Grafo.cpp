#include "Grafo.h"

Grafo::Grafo(int numVertices){

	vertices = new Vertice[numVertices];

	for(int i = 0; i < numVertices; i++)
		vertices[i].definirInfo(i);
}

void Grafo::buscaLargura(){

	fila = new Lista();

	fila->insereNo(vertices[0].consultaInfo());
	vertices[0].pinta();
	fila->insereNo(vertices[0].vizinhos()->pri->info

}

Grafo::~Grafo(){}