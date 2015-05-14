#include "Grafo.h"
#include <cstdio>

Grafo::Grafo(int numVertices){

	vertices = new Vertice[numVertices];

	tempo = 0;

	pilha = new Lista();

	fila = new Lista();

	for(int i = 0; i < numVertices; i++)
		vertices[i].info = i;

	verticesGrafo=numVertices;

}

void Grafo::buscaLargura(int indice){

	int auxiliar = indice;
	int indiceVizinho = 0;
	
	vertices[auxiliar].pintar();
	fila->insereNo(vertices[auxiliar].info);

	//cout<< "Entrei!"<<endl;
	
	while(fila->pri != NULL){

		vertices[auxiliar].vizinhos->inicio();

		while(!vertices[auxiliar].vizinhos->fimDaLista()){

			indiceVizinho = vertices[auxiliar].vizinhos->it->info;

			if(vertices[indiceVizinho].cor == 'w'){
				fila->insereNo(indiceVizinho);
				vertices[indiceVizinho].pintar();
				vertices[indiceVizinho].anterior = &vertices[auxiliar];
				vertices[indiceVizinho].definirDistancia();
			}

			vertices[auxiliar].vizinhos->it = vertices[auxiliar].vizinhos->it->prox;
			
		}

		vertices[auxiliar].pintar();

		cout<<"Visitei o vertice "<<fila->pri->info<<"..."<<endl;

		fila->removeDaFila();

		if(fila->pri != NULL)
			auxiliar = fila->pri->info;

		//cout<<auxiliar<<endl;
	}

	for(int i=0; i < verticesGrafo ;i++){
		if(vertices[i].cor == 'w')
			cout<<"Grafo desconexo em "<< i<< endl;
			buscaLargura(i);
	}

}

void Grafo::buscaProfundidade(int indice){

	No *p = new No();

	tempo++;

	vertices[indice].pintar();
	vertices[indice].tempoEmpilhar = tempo;

	cout<<"Visitei o vértice "<<indice<<"e empilhei..."<<endl;

	pilha->empilhar(vertices[indice].info);

	for(p = vertices[indice].vizinhos->it;p != NULL; p=p->consultaProximo()){

		if(vertices[p->info].cor == 'w'){

			vertices[p->info].anterior = &vertices[indice];
			buscaProfundidade(p->info);
		}

	}

	int i;

	while(pilha->pri != NULL){
		

		i = pilha->pri->info;
		tempo++;
		vertices[i].pintar();
		vertices[i].tempoDesempilhar = tempo;

		pilha->desempilhar();

		cout<<"Desempilhei o vertice "<<i<<endl;
	}

	for(int i = 0; i < verticesGrafo; i++){

		cout<<"Vértice "<<i<<": "<<vertices[i].tempoEmpilhar<<"/"<<vertices[i].tempoDesempilhar<<endl;
	}

}

void Grafo::profundidade(){
	for(int i=0;i<verticesGrafo;i++)
		if(vertices[i].cor=='w')
			visita(i);	
}


void Grafo::visita(int indice){

	tempo++;
	
	vertices[indice].tempoEmpilhar = tempo;
	vertices[indice].pintar();
	
	No *p = new No();

	cout<< "Empilhei "<<indice<<endl;
	
	for(p = vertices[indice].vizinhos->pri;p != NULL; p=p->consultaProximo()){
		if(vertices[p->info].cor=='w'){
			vertices[p->info].pintar();
			vertices[indice].tempoEmpilhar = tempo;
			visita(p->info);
		}
	}	
	
	vertices[indice].pintar();
	tempo++;
	vertices[indice].tempoDesempilhar = tempo;
	cout<< "Desempilhei: "<<indice<<endl;
}

Grafo::~Grafo(){}