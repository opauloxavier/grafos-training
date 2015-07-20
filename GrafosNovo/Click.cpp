#include "Graph.h"
using namespace std;


class Click{

	public:
		Vertex *vertexes;
		Click();
		void findClickMaximal(Graph *a,int k);

		~Click();
};

Click::Click(){
}

void Click::findClickMaximal(Graph *a,int k){
	List *answers = new List();
	bool insert=true;
	answers->addNode(k);

	for(int j=0;j<a->numVertexes;j++){
		for(int i=0;i<answers->size();i++){
			int *vizinhos=a->vertexes[j].neighbors->returnValue();
			
			if(!a->vertexes[j].neighbors->find(vizinhos[i]))
				insert=false;
		}
	if(insert)
		answers->addNode(j);	
	}
	
	cout << "O click maximal é composto de "<<answers->size()<<" vértices"<<endl;

	//cout<<"Os vértices que compoe o click são: "<<endl;
	//answers->printList();
}

Click::~Click(){}