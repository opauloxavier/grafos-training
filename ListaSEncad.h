#include "No.cpp"

class ListaSEncad{

	private:
		No *pri;
		No * it;
	
	public:
		ListaSEncad();
		float consulta();
		void atribui(float val);
		bool busca(float val);
		void inicio();
		void proximoNo();
		bool fimDaLista();
		void inserePri(float val);
		void posicaoAnterior(float val);
		void insereAntesNo(float val);
		void insereNo(float val);
		void insereNoBase(No *no);
		void eliminaPri();
		void removeUlt();
		void removeIt();
		void inserePriNo(No *no);
		int tamanhoLista();
		bool isEmpty();
		No* consultaNo();
		~ListaSEncad();
};
