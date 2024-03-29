#include "Lista.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Lista::Lista(){
	
	pri = NULL;
	it = NULL;
}

void Lista::inserePri(int valor){

	if(pri != NULL)
		cout<<"Primeiro valor já inserido"<<endl;
	else{

		No *novo = new No();

		novo->atribuiInfo(valor);

		pri = novo;
		it = novo;
	}

}

void Lista::insereNo(int valor){

	if(pri==NULL)
		inserePri(valor);
	else{
		No *p = new No();
	 	No *temp = new No();
	 	No *temp2 = new No();
	  
	 	temp2->atribuiInfo(valor);
	  
		for( p=pri ; p!= NULL ; p = p->consultaProximo()){

		 	temp = p;
		}
		  
		temp->atribuiProximo(temp2->info);
	}
}


void Lista::inicio(){

	if(pri != NULL)
		it = pri;
}

void Lista::proximoNo(){

	if(it->consultaProximo() != NULL)
		it = it->consultaProximo();
}

bool Lista::fimDaLista(){

	return (it == NULL);	
}

int Lista::tamanhoLista(){

	if(pri != NULL){

		int i = 0;

		No *p;

		for(p = pri; p != NULL; p = p->consultaProximo()){

			i++;
			p = p->consultaProximo();
		}

		return i;
	}
	else
		cout<<"Lista Vazia"<<endl;

	exit(0);
}

void Lista::consultaLista(){

	if(pri != NULL){

		No *p;

		for(p = pri; p != NULL;p = p->consultaProximo()){

			cout<<p->consultaInfo()<<endl;
		}
	}
	else
		cout<<"Lista Vazia"<<endl;
}

void Lista::removeDaFila(){

	No *p;
  
 	if(pri != NULL){ 
 	 
 		p = pri;
 		pri = p->prox;
 		it = pri;
 		delete p;
 	}
 	
 	else
 		exit(1);
}

void Lista::empilhar(int valor){

	No *p = new No();
	p->info = valor;
	p->prox = pri;
	pri=p;
	it=pri;
}

void Lista::desempilhar(){

	removeDaFila();
}

Lista::~Lista(){
	
	No *p = pri;
	
	while(p != NULL)
	{
		No *t = p->consultaProximo();
		delete p;
		p = t;
	}
}