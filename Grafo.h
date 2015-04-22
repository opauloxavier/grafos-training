#include "structAdj.cpp"

class Grafo{

	private:
	//	structAdj *structGrafo;
	public:
		structAdj *structGrafo;
		ListaSEncad *fila;

		Grafo();
		Grafo(int vertices);
		structAdj *retornaAdj();
		structAdj *geraGrafo(int vertices);
		void buscaLargura(Grafo *a);
		~Grafo();
};