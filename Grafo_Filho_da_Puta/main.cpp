#include "Grafo.cpp"
#include <iostream>

using namespace std;

int main(){

	Grafo *g = new Grafo(5);

	g->vertices[0].insereVizinho(1);
	
	g->vertices[1].insereVizinho(0);
	g->vertices[1].insereVizinho(2);
	g->vertices[1].insereVizinho(3);

	g->vertices[2].insereVizinho(1);
	g->vertices[2].insereVizinho(3);
	g->vertices[2].insereVizinho(4);

	g->vertices[3].insereVizinho(1);
	g->vertices[3].insereVizinho(2);

	g->vertices[4].insereVizinho(2);

	g->buscaLargura();
		//g->buscaLargura();

	cout << g->vertices[0].cor ;


	return 0;
}
