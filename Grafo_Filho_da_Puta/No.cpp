#include "No.h"

No::No(){}

int No::consultaInfo(){

	return info;
}

void No::atribuiInfo(int valor){
	
	info = valor;
}

void No::atribuiProximo(int valor){

	No *novo = new No();
	novo->atribuiInfo(valor);

	prox = novo;
}

No *No::consultaProximo(){

	return prox;
}

No::~No(){}