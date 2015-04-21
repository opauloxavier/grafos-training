#include "structAdj.cpp"

class Grafo{

	private:
	//	structAdj *structGrafo;
	public:
		structAdj *structGrafo;
		Grafo();
		Grafo(int vertices);
		structAdj *retornaAdj();
		structAdj *geraGrafo(int vertices);
		~Grafo();
};