#include "Graph.h"
#define INF 1000

class Dijkstra{
	public:
		List *fila;

	Dijkstra();
	void relax(Graph *g,int v,int u,int w);
	void Inicializa(Graph *a);
	void capeta(Graph *a);
	~Dijkstra();

};

Dijkstra::Dijkstra(){
	fila = new List();
}

void Dijkstra::relax(Graph *g,int v,int u,int w){

	int disViz = g->vertexes[u].disTotal+w;
	if(g->vertexes[v].disTotal>disViz){
		g->vertexes[v].disTotal=disViz;
		g->vertexes[v].previous = &g->vertexes[u];
	}
}

void Dijkstra::Inicializa(Graph *a){
	a->vertexes[0].disTotal=0;

	for(int i=1;i<a->numVertexes;i++)
		a->vertexes[i].disTotal = INF;
}

void Dijkstra::capeta(Graph *a){

	Inicializa(a);

	fila->setFirst(0);
	int loop = 0;

	Node *p;
	Node *n;

		for(p = a->vertexes[0].neighbors->first; p != NULL; p = p->next){

				fila->addNode(p->value);
		}

	int i = 0;

	while(fila->first !=NULL){

		for(p = a->vertexes[fila->first->value].neighbors->first; p != NULL; p = p -> next) {

			for(n = p; i < ((a->numVertexes - 1)*(fila->first->value)+(a->numVertexes - 1)); n = n->next){

				relax(a, n->value, fila->first->value, a->edges[i].distance);
				i++;
			}
		}
		cout<<"------------------"<<endl;
		for(int k = 0; k < a->numVertexes; k++)
			cout<<"Loop: "<<loop<<" Vertice "<< k <<": "<<a->vertexes[k].disTotal<<endl;
		cout<<"------------------"<<endl;

		fila->removeFirst();
		loop++;
	}
}

Dijkstra::~Dijkstra(){}
