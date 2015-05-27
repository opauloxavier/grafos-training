#include <iostream>
#include "Dijkstra.h"

using namespace std;

int main(){

	Graph *d = new Graph(1447);

	d->generateDigraph();

	Dijkstra *a = new Dijkstra();

	a->capeta(d);

	return 0;
}