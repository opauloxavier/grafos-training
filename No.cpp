#include "no.h"
#include <stdio.h>
#include <stdlib.h>

No::No(){
	cor='w';
}

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

char No::retCor(){
	return cor;
}

void No::pinta(){
	if(cor=='w'){
		cor='g';
	}

	else if(cor=='g')
		cor='b';
}

No::~No(){}


