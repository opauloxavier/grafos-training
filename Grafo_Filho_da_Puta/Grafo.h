#include "Vertice.cpp"

class Grafo{
	
	public:
		Vertice *vertices;
		Lista *fila;
		Lista *pilha;
		Lista *conexos;
		int tempo;
		int verticesGrafo;

		Grafo(int numVertices);
		void inserirVertice();
		void buscaLargura(int indice);
		void buscaProfundidade(int indice);
		void visita(int indice,bool verbose);
		void profundidade(bool verbose);
		void fortementeConexo(bool verbose);
		void grafoTransposto();
		~Grafo();
};