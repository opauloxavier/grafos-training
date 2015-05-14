#include "Grafo.cpp"
#include <iostream>

using namespace std;

int main(){

	 int vertices = 5;
	 Grafo *g = new Grafo(vertices);

	 g->vertices[0].insereVizinho(1);
	 g->vertices[1].insereVizinho(2);
	 g->vertices[2].insereVizinho(3);
	 g->vertices[3].insereVizinho(0);
	 
	// cout << g->contadorProfundidade<<endl;
	 g->profundidade();
	
	return 0;
}

