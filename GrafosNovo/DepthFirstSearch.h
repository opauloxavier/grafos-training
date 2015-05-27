#include "Graph.h"

class DepthFirstSearch{

	public:
		int time;

		DepthFirstSearch();
		void visit(Graph *graph, int index);
		void DFS(Graph *graph);
		~DepthFirstSearch();
};

DepthFirstSearch::DepthFirstSearch(){

	time = 0;
}

void DepthFirstSearch::visit(Graph *graph, int index){

	Node *aux;
	time++;
	graph->vertexes[index].timePush = time;
	graph->vertexes[index].paint();
	cout<<"Visitei o vértice "<<index<<" e empilhei!"<<endl;
	for(aux = graph->vertexes[index].neighbors->first;  aux != NULL; aux = aux->next){

		if(graph->vertexes[aux->value].color == 'w'){

			graph->vertexes[aux->value].previous = &graph->vertexes[index];
			visit(graph, aux->value);
		}
	}

	cout<<"Desempilhei "<<index<<endl;
	graph->vertexes[index].paint();
	time++;
	graph->vertexes[index].timePop = time;
}

void DepthFirstSearch::DFS(Graph *graph){

	for(int i = 0; i < graph->numVertexes; i++)
		if(graph->vertexes[i].color == 'w')
			visit(graph, i);

}

DepthFirstSearch::~DepthFirstSearch(){}