#include "Vertex.h"

class Edge{

	public:
		int origin;
		int destiny;
		int distance;

		Edge();
		void setEdge(int o, int d, int value);
		~Edge();
};

Edge::Edge(){}

void Edge::setEdge(int o, int d, int value){

	origin = o;
	destiny = d;
	distance = value;
}


Edge::~Edge(){}
