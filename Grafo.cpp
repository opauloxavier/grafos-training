		#include "Grafo.h"

		Grafo::Grafo(){
			fila = new ListaSEncad();
		}

		Grafo::Grafo(int vertices){
			structGrafo = new structAdj(vertices);
			fila = new ListaSEncad();
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

		void Grafo::buscaLargura(Grafo *a,int posicaoVertice){

			No *temp;

			temp = a->structGrafo->adj[posicaoVertice].consultaNo();

			if(temp->retCor()=='w'){

				a->fila->inserePriNo(temp);
				temp->pinta();
			}

			else if(temp->retCor() == 'g'){


			}

			else if(temp->retcor()==' b'){

			}


			a->fila->inserePriNo(temp);

			while(!a->fila->fimDaLista() and temp->retCor()!='b'){
				temp = a->fila->consultaNo();
				temp->pinta();
				a->fila->proximoNo();
				//printf("%f",a->fila->consulta());
			}
			

			//printf("%c",a->structGrafo->adj[0].consultaNo()->retCor());
		}

		Grafo::~Grafo(){}


		int main(){

			Grafo *a = new Grafo(3);

			a->structGrafo->insereVertice(0);
			a->structGrafo->insereVertice(1);
			a->structGrafo->insereVertice(2);

			//a->structGrafo->insereVertice(1);
			//a->structGrafo->insereAresta(1,4);
			//a->structGrafo->insereAresta(1,3);

			//a->structGrafo->insereVertice(2);
			//a->structGrafo->insereAresta(2,8);
			//a->structGrafo->insereAresta(2,10);
			
			a->buscaLargura(a);

			printf("%c \n",a->structGrafo->adj[0].consultaNo()->retCor());

			printf("%f \n",a->structGrafo->adj[0].consulta());
			a->structGrafo->adj[0].proximoNo();
			printf("%c \n",a->structGrafo->adj[0].consultaNo()->retCor());

			//printf("%d",a->structGrafo->adj[2].busca(10));

			return 0;
		}
