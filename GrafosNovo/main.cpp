#include <iostream>
#include "Click.cpp"

using namespace std;

int main(){

	Graph *d = new Graph(4);

	d->generateGraph();

	Click *a = new Click();

	a->findClickMaximal(d,0);
	
	return 0;
}