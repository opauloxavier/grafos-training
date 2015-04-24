#include "Grafo.h"

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

		while(!vertices[auxiliar].vizinhos->fimDaLista()){

			cout<<"Executei 2"<<endl;

			indiceVizinho = vertices[auxiliar].vizinhos->it->info;

			if(vertices[indiceVizinho].cor == 'w')
				fila->insereNo(indiceVizinho);
			
			//fila->consultaLista();

			cout<<vertices[auxiliar].vizinhos->it->info<<endl;


			vertices[auxiliar].vizinhos->it = vertices[auxiliar].vizinhos->it->prox;

			if(vertices[auxiliar].vizinhos->it == NULL)
				cout<<"Filho da Pulta"<<endl;
			
		}

		//fila->consultaLista();

		vertices[auxiliar].pintar();

		cout<<"Visitei o vertice "<<fila->pri->info<<endl;

		fila->removeDaFila();

		if(fila->pri != NULL)
			auxiliar = fila->pri->info;

		cout<<auxiliar<<endl;
	}
	//fila->insereNo(vertices[1].vizinhos()->pri->info

}

Grafo::~Grafo(){}