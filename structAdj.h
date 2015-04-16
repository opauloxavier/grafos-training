#include "ListaSEncad.cpp"

class structAdj{

	private:
		//ListaSEncad *adj ;
		int tamanhoLista;
		No *auxiliar;
	
	public:
		ListaSEncad *adj ;
		structAdj(int vertices);
		void insereVertice(float valor);
		void insereAresta(int posicaoLista,float valor);
		void criaGrafo();

		~structAdj();
};