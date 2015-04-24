#include "No.cpp"

class Lista{

	public:
		No *pri;
		No * it;
		Lista();
		void inserePri(int val);
		void insereNo(int val);	
		int consulta();
		void inicio();
		void proximoNo();
		bool fimDaLista();		
		int tamanhoLista();
		void consultaLista();
		void removeDaFila();
		void empilhar(int indice);
		void desempilhar();
		~Lista();
};
