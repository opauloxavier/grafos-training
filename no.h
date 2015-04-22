class No{
	
	private:
		float info;
		No *prox;
		char cor;
	
	public:
		No();
		float consultaInfo();
		No *consultaProx();
		void atribInfo(float val);
		void atribProx(No *p);
		char retCor();
		void pinta();
		~No();
};
