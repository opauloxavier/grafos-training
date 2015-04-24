#include "Vertice.cpp"

class Grafo{
	
	public:
		Vertice *vertices;
		Lista *fila;
		int verticesGrafo;
		Grafo(int numVertices);
		void inserirVertice();
		void buscaLargura(int indice);
		~Grafo();
};