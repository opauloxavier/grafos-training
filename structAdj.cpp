#include "structAdj.h"

structAdj::structAdj(int vertices)
{
	adj = new ListaSEncad[vertices];
	tamanhoLista=0;
}


void structAdj::insereVertice(float valor)
{
	ListaSEncad *lista = new ListaSEncad();

	lista->inserePri(valor);

	adj[tamanhoLista] = *lista;

	tamanhoLista++;
}

void structAdj::insereAresta(int posicaoLista,float valor)
{
	adj[posicaoLista].insereNo(valor);
}

int main(){

	structAdj *a = new structAdj(4);

	a->insereVertice(3);
	a->insereVertice(2);
	a->insereAresta(0,4);

	printf("%d",a->adj[0].busca(4));

	printf("EU FUNCIONO");

	getchar();


	return 0;
};