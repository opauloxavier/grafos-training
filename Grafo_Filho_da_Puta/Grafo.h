#include "Vertice.cpp"

class Grafo{
	
	public:
		Vertice *vertices;
		Lista *fila;
		Lista *pilha;
		int tempo;
		int verticesGrafo;

		Grafo(int numVertices);
		void inserirVertice();
		void buscaLargura(int indice);
		void buscaProfundidade(int indice);
		void visita(int indice);
		~Grafo();
};