/*
Por definição as cores utilizadas serão representadas por Branco(w), Cinza(g), Azul(b)
w - vertice não visitado
g - vertice visitado porém ainda na fila
b - vertice visitado e fora da fila
*/

#include "Lista.cpp"

class Vertice{

	public:
		char cor;
		int distancia;
		int info;
		Vertice *anterior;
		Lista *vizinhos;
		int tempoEmpilhar;
		int tempoDesempilhar;

		Vertice();
		void definirInfo(int indice);
		int exibirInfo();
		void pintar();
		void definirDistancia();
		int exibirDistancia();
		void definirAnterior(Vertice *ant);
		void insereVizinho(int valor);
		void exibeVizinhos();
		Lista *exibirLista();
		~Vertice();

};