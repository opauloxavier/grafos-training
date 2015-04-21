class No{
	
	private:
		float info;
		No *prox;
	
	public:
		No();
		float consultaInfo();
		No *consultaProx();
		void atribInfo(float val);
		void atribProx(No *p);
		~No();
};
