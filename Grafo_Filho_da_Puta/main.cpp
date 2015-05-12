#include "Grafo.cpp"
#include <iostream>

using namespace std;

int main(){

	 int vertices = 6;
	 Grafo *g = new Grafo(vertices);

	 g->vertices[0].insereVizinho(1);
	 g->vertices[0].insereVizinho(2);
	 g->vertices[0].insereVizinho(3);
	
	 g->vertices[1].insereVizinho(0);
	 g->vertices[1].insereVizinho(2);
	 g->vertices[1].insereVizinho(3);

	 g->vertices[2].insereVizinho(1);
	 g->vertices[2].insereVizinho(3);
	 g->vertices[2].insereVizinho(4);

	 g->vertices[3].insereVizinho(1);
	 g->vertices[3].insereVizinho(2);

	 g->vertices[4].insereVizinho(2);
	 g->vertices[4].insereVizinho(5);
	 
	// cout << g->contadorProfundidade<<endl;
	 g->visita(0);


	return 0;
}
