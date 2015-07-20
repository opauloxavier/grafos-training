#include <iostream>
#include "DepthFirstSearch.h"
#include "BellmanFord.h"

using namespace std;

int main(){

	Graph *d = new Graph(7);

	d->generateGraph();

	DepthFirstSearch *a = new DepthFirstSearch();

	a->componentesConexas(d);

	return 0;
}