#include "ListaSEncad.cpp"

class structAdj{

	private:
		//ListaSEncad *adj ;
		int tamanhoLista;
		No *auxiliar;
		int numeroVertices;
	
	public:
		ListaSEncad *adj ;
		structAdj(int vertices);
		void insereVertice(float valor);
		void insereAresta(int posicaoLista,float valor);
		structAdj *geraGrafo(int vertices);
		~structAdj();
};