#include "Grafo.h"

Grafo::Grafo(int numVertices){

	vertices = new Vertice[numVertices];

	for(int i = 0; i < numVertices; i++)
		vertices[i].definirInfo(i);
}

void Grafo::buscaLargura(){

	fila = new Lista();

	vertices[0].pintar();
	fila->insereNo(vertices[0].info);
	
	vertices[0].vizinhos->inicio();

	while(vertices[1].vizinhos->it != NULL){
		fila->insereNo(vertices[1].vizinhos->it->info);
		vertices[1].vizinhos->it = vertices[1].vizinhos->it->prox;
	}

	fila->consultaLista();
	//fila->insereNo(vertices[1].vizinhos()->pri->info

}

Grafo::~Grafo(){}