#include "Vertice.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Vertice::Vertice(){

	cor = 'w';
	vizinhos = new Lista();
	distancia = 0;
}

void Vertice::pintar(){

	if(cor == 'w')
		cor = 'g';
	else if(cor == 'g')
		cor = 'b';
}

void Vertice::definirInfo(int indice){

	info = indice;
}

int Vertice::exibirInfo(){

	return info;
}

void Vertice::definirDistancia(){

	if(anterior != NULL)
		distancia = anterior->exibirDistancia() + 1;
	else
		cout<<"Anterior não definido"<<endl;
}

int Vertice::exibirDistancia(){

	if(distancia == 0)
		cout<<"Vertice Inicial"<<endl;	

	return distancia;
}

void Vertice::definirAnterior(Vertice *ant){

	anterior = ant;
}

void Vertice::insereVizinho(int valor){

	vizinhos->insereNo(valor);
}

void Vertice::exibeVizinhos(){

	vizinhos->consultaLista();
}

Lista *Vertice::exibirLista(){

	return vizinhos;
}

Vertice::~Vertice(){

	delete vizinhos;
}

