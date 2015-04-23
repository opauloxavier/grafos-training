class No{
	

	public:
		int info;
		No *prox;
		No();
		int consultaInfo();
		No *consultaProximo();
		void atribuiInfo(int valor);
		void atribuiProximo(int valor);
		~No();
};