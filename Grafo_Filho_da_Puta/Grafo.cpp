#include "Grafo.h"
#include <cstdio>

Grafo::Grafo(int numVertices){

	vertices = new Vertice[numVertices];

	for(int i = 0; i < numVertices; i++)
		vertices[i].info = i;
}

void Grafo::buscaLargura(int indice){

	int auxiliar = indice;
	int indiceVizinho;

	fila = new Lista();


	vertices[auxiliar].pintar();
	fila->insereNo(vertices[auxiliar].info);
	
	while(fila->pri != NULL){

		vertices[auxiliar].vizinhos->inicio();

		int i = 1;

		while(!vertices[auxiliar].vizinhos->fimDaLista()){

			indiceVizinho = vertices[auxiliar].vizinhos->it->info;

			if(vertices[indiceVizinho].cor == 'w'){
				fila->insereNo(indiceVizinho);
				vertices[indiceVizinho].pintar();
				vertices[indiceVizinho].anterior = &vertices[auxiliar];
				vertices[indiceVizinho].definirDistancia();
			}


			vertices[auxiliar].vizinhos->it = vertices[auxiliar].vizinhos->it->prox;

			i++;
			
		}

		vertices[auxiliar].pintar();

		cout<<"Visitei o vertice "<<fila->pri->info<<"..."<<endl;

		fila->removeDaFila();

		if(fila->pri != NULL)
			auxiliar = fila->pri->info;

		//cout<<auxiliar<<endl;
	}
	//fila->insereNo(vertices[1].vizinhos()->pri->info

}

Grafo::~Grafo(){}