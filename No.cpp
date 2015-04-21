#include "no.h"
#include <stdio.h>

No::No(){}

float No::consultaInfo(){

	return info;
}

No *No::consultaProx(){

	return prox;
}

void No::atribProx(No *p){

	prox = p;
}

void No::atribInfo(float val){
	
	info = val;
}

No::~No(){}


