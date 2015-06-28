#include "Node.h"
#include <iostream>
#include <cstdlib>

using namespace std;

class List{

	public:
		Node *first;
		Node *it;

		List();
		void setFirst(int value);
		void addNode(int value);
		void removeLast();
		void vizinhosPog(List *a);
		void begin();
		void printList();
		bool find(int value);
		int size();
		void removeFirst();
		int *returnValue();
		bool endList();
		~List();
};

List::List(){

	first = NULL;
	it = NULL;
}


void List::removeFirst(){

	Node *p;

	if(first != NULL){
		p=first;
		first=p->next;
		it=first;

	}
	delete p;
}

void List::setFirst(int value){

	if(first == NULL){

		Node *n = new Node(value);

		//n -> next = first;

		first = n;
		it = n;
	}
}


void List::addNode(int value){

	if(first==NULL)
		setFirst(value);
	else{

		if(!find(value)){
		Node *p = new Node();
		 	Node *temp = new Node();
		 	Node *temp2 = new Node(value);
	
	
			for( p = first ; p!= NULL ; p = p->next){
	
			 	temp = p;
			}
	
			temp->next =  temp2;
		}
		else
			cout<<"Duplicado"<<endl;
	}
}

void List::begin(){

	it = first;
}

void List::removeLast(){

	Node *last;
	Node *previous;

	for(last = first; last -> next != NULL; last = last -> next){

		previous = last;
	}

	it = previous;

	delete last;

	it -> next = NULL;
}

void List::printList(){

	begin();

	while(it	 != NULL){

		cout<<it->value<<", ";
		it = it -> next;
	}

	cout<<endl;
}

int *List::returnValue(){

	
	int contador=0;
	int *valores = new int[size()];

	begin();

	while(it != NULL){

		valores[contador]=it->value;
		it = it -> next;
		contador++;
	}

	return valores;
}

bool List::endList(){

	return(it -> next == NULL);
}

int List::size(){

	int size=0;

	begin();

	while(it	 != NULL){
		it = it -> next;
		size++;
	}

	return size;
}

bool List::find(int value){

	begin();

	while(it	 != NULL){
		if(it->value==value){
			return true;
			break;
		}
		it = it -> next;
	}

	return false;
}

List::~List(){

	Node *n = first;

	while(n != NULL){

		Node *m = n -> next;
		delete n;
		n = m;
	}

	cout<<"Lista Deletada"<<endl;
}
