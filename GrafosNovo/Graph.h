#include <iostream>
#include <fstream>
#include <time.h>
#include "Edge.h"
using namespace std;


class Graph{

	public:
		Vertex *vertexes;
		int numVertexes;
		int numEdges;
		Edge *edges;

		Graph(int num);
		void generateGraph();
		void generateDigraph();
		void printaPog();
		~Graph();
};

Graph::Graph(int num){

	vertexes = new Vertex[num];
	numVertexes = num;
	numEdges=num*(num-1);
	edges = new Edge[numEdges];


	for (int i = 0; i < numVertexes; i++)
		vertexes[i].info = i;
}

void Graph::generateGraph(){

	int matrix[numVertexes][numVertexes];

	ofstream myfile;

	myfile.open("graph.txt");

	srand(time(NULL));

	for(int i = 0; i < numVertexes; i++)
		for (int j = 0; j < numVertexes; j++)
			matrix[i][j] = -1;

	for(int i = 0; i < numVertexes; i++){
		for (int j = 0; j < numVertexes; j++){

			if(matrix[i][j] == -1 ){
				if(i == j)
					matrix[i][j] = 0;
				else if((rand() + i + j) % 2 == 0){

					matrix[i][j] = 1;
					vertexes[i].neighbors ->addNode(j);
					vertexes[j].neighbors ->addNode(i);
				}
				else
					matrix[i][j] = 0;

				matrix[j][i] = matrix[i][j];
			}

			myfile<<matrix[i][j]<<" ";
		}

		myfile<<endl;
	}

	myfile.close();
}

void Graph::generateDigraph(){

	int matrix[numVertexes][numVertexes];

	int pog=0;

	ofstream myfile;

	myfile.open("digraph.txt");

	srand(time(NULL));



	for(int i = 0; i < numVertexes; i++)
		for (int j = 0; j < numVertexes; j++)
			matrix[i][j] = -1;

	for(int i = 0; i < numVertexes; i++){
		for (int j = 0; j < numVertexes; j++){

			if(matrix[i][j] == -1 ){
	 			if(i == j)
	 				matrix[i][j] = 0;
				else {

	 				matrix[i][j] = ((rand() % 50)/(i+1+j) + 1);
	 				vertexes[i].neighbors ->addNode(j);
	 				edges[pog].setEdge(i,j,matrix[i][j]);
	 				pog++;

	 			}
	 		}

			myfile<<matrix[i][j]<<"\t";
		}
		myfile<<endl;
	}

	myfile.close();
}

void Graph::printaPog(){

	for(int i=0;i<numEdges;i++)
		cout<< edges[i].distance <<endl;
}




Graph::~Graph(){}