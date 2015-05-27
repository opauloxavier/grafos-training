#include "List.h"

class Vertex{

	public:
		char color;
		int timePush;
		int timePop;
		int info;
		int disTotal;
		List *neighbors;
		Vertex *previous;

		Vertex();
		void paint();
		~Vertex();
};

Vertex::Vertex(){

	color = 'w';
	neighbors = new List();
	timePush = 0;
	timePop = 0;
}

void Vertex::paint(){

	if(color == 'w')
		color = 'g';
	else if(color == 'g')
		color = 'b';
}

Vertex::~Vertex(){}