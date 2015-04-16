#include "ListaSEncad.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

ListaSEncad::ListaSEncad()
{
	pri = NULL;
	it = NULL;
}

float ListaSEncad::consulta()
{
	if(it != NULL)
		return it->consultaInfo();
	else
	{
		printf("Nó invalido");
	exit(1);
	}
}

void ListaSEncad::atribui(float val)
{
	if(it != NULL)
		it->atribInfo(val);
	else
		printf("Nó invalido");
}

bool ListaSEncad::busca(float val)
{
No *p;

	for(p = pri; p != NULL; p = p->consultaProx())
	{
		if(p->consultaInfo() == val)
		return true;
	}
	
	return false;
}

void ListaSEncad::inicio()
{
	it = pri;
}

void ListaSEncad::proximoNo()
{
	it = it->consultaProx();
}

bool ListaSEncad::fimDaLista()
{
	return (it == NULL);
}

ListaSEncad::~ListaSEncad()
{
No *p = pri;
	while(p != NULL)
	{
		No *t = p->consultaProx();
		delete p;
		p = t;
	}
}

void ListaSEncad::inserePri(float val)
{ 
	No *p = new No();
	p->atribInfo(val);
	p->atribProx(pri);
	pri=p;
}

void ListaSEncad::insereAntesNo(float val)
{
	No *p=new No();
	No *temp = new No();
	No *novo = new No();
		
	if(pri==it)
	{
		inserePri(val);
	}
		
	else
	{
		novo->atribInfo(val);
		
		for ( p=pri; p!= it ; p = p->consultaProx())
		{
			temp=p;
		}
		
		temp->atribProx(novo);
		novo->atribProx(it);
	
	}		
}

void ListaSEncad::insereNo(float val)
{
	No *p=new No();
	No *temp = new No();
	No *temp2 = new No();
	
	temp2->atribInfo(val);
	
	for( p=pri ; p!= NULL ; p = p->consultaProx())
	{
		temp=p;
	}
	
	temp->atribProx(temp2);
}


void ListaSEncad::removeUlt()
{
	No *ultimo= new No();
	No *anterior = new No();

	for(it=pri;!fimDaLista();it = it->consultaProx())
	{
		ultimo=it;
	}
	
	for(it=pri;it!=ultimo;it = it->consultaProx())
	{
		anterior=it;
	}
	
	delete ultimo;
	anterior->atribProx(NULL);
}	

void ListaSEncad::eliminaPri(){
	
	No *p;
	
	if(pri != NULL){	
		
		p = pri;
		pri = p->consultaProx();
		delete p;
	}
	else
		exit(1);
}

void ListaSEncad::removeIt()
{
		No *novo = new No();
		No *p = new No();
		No *anterior = new No();
	
	
	if(it==pri)
			eliminaPri();
			
	else{
	
		
		for(p=pri; p != it; p = p->consultaProx())
		{
				anterior=p;		
		}
		
		novo = it->consultaProx();	
		anterior->atribProx(novo);
		
		delete it;	
		
		it=novo;
	}
	
}


