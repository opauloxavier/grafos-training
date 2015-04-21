#include "structAdj.h"


structAdj::structAdj(int vertices)
{
	adj = new ListaSEncad[vertices];
	tamanhoLista=0;
	numeroVertices=vertices;
}

void structAdj::insereVertice(float valor)
{
	if(tamanhoLista<numeroVertices){

	ListaSEncad *lista = new ListaSEncad();

	lista->inserePri(valor);

	adj[tamanhoLista] = *lista;

	tamanhoLista++;
	
	}

	else
		printf("Ja atingiu o numero maximo de vertices");
}

void structAdj::insereAresta(int posicaoLista,float valor)
{
	if(!adj[posicaoLista].isEmpty() and posicaoLista<numeroVertices)
		adj[posicaoLista].insereNo(valor);
	else
		printf("E necessario criar o vertice primeiro");
}
