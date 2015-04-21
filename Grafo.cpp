		#include "Grafo.h"

		Grafo::Grafo(){

		}

		Grafo::Grafo(int vertices){
			structGrafo = new structAdj(vertices);
		}

		structAdj *Grafo::geraGrafo(int vertices){

			structAdj *a = new structAdj(vertices);

			int arestas=0;
			int valor=0;

			for (int i = 0; i < vertices; i++)
			{
				printf("Digite o valor do vertice: ");
				scanf("%d",&valor);
				a->insereVertice(valor);
			}

			return a;

		}


		Grafo::~Grafo(){}


		int main(){

			Grafo *a = new Grafo(3);

			a->structGrafo->insereVertice(1);
			a->structGrafo->insereVertice(2);
			a->structGrafo->insereVertice(3);
			a->structGrafo->insereAresta(0,2);
			a->structGrafo->insereAresta(0,5);
			a->structGrafo->insereAresta(1,4);
			a->structGrafo->insereAresta(1,3);
			a->structGrafo->insereAresta(2,8);
			a->structGrafo->insereAresta(2,10);

			printf("%d",a->structGrafo->adj[2].busca(10));

			return 0;
		}
