#include "Vertice.cpp"

class Grafo{
	
	public:
		Vertice *vertices;
		Lista *fila;
		Grafo(int numVertices);
		void inserirVertice();
		void buscaLargura(int indice);
		~Grafo();
};