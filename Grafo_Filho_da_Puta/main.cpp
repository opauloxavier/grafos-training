#include "Grafo.cpp"
#include <iostream>

using namespace std;

int main(){

	// int vertices = 5;
	// Grafo *g = new Grafo(vertices);

	// g->vertices[0].insereVizinho(1);
	
	// g->vertices[1].insereVizinho(0);
	// g->vertices[1].insereVizinho(2);
	// g->vertices[1].insereVizinho(3);

	// g->vertices[2].insereVizinho(1);
	// g->vertices[2].insereVizinho(3);
	// g->vertices[2].insereVizinho(4);

	// g->vertices[3].insereVizinho(1);
	// g->vertices[3].insereVizinho(2);

	// g->vertices[4].insereVizinho(2);
	//g->vertices[4].insereVizinho(5);

	//g->vertices[5].insereVizinho(4);

	// g->buscaLargura(0);

	// for (int i=0;i<vertices;i++)
	// 	cout<<g->vertices[i].cor<<endl;

	// for (int i=0;i<vertices;i++)
	// 	cout<<g->vertices[i].distancia<<endl;


		//g->buscaLargura();

	//cout << g->vertices[0].cor ;

	// Lista *l = new Lista();

	// l->insereNo(5);
	// l->insereNo(6);
	// l->insereNo(7);
	// l->insereNo(8);
	// l->insereNo(9);
	// l->insereNo(10);
	// l->insereNo(11);
	// l->insereNo(12);
	// l->insereNo(13);
	// l->insereNo(14);
	// l->insereNo(15);
	// l->insereNo(16);

	// l->consultaLista();
	// cout<<endl;
	// l->removeDaFila();
	// l->removeDaFila();
	// l->removeDaFila();

	// l->consultaLista();

	// l->insereNo(17);

	// cout<<endl;

	// l->consultaLista();

	Grafo *g = new Grafo(3);

	g->vertices[0].insereVizinho(1);
	g->vertices[0].insereVizinho(2);

	g->vertices[1].insereVizinho(2);

	g->buscaProfundidade(0);


	return 0;
}
