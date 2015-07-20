#define INF 1000

class BellmanFord{

	public:
		int time;

		BellmanFord();
		void relax(Graph *g,int v,int u,int w);
		void Inicializa(Graph *graph);
		bool Bellman(Graph *graph,int w,int source);
		~BellmanFord();
};

BellmanFord::BellmanFord(){
	time = 0;
}


void BellmanFord::relax(Graph *g,int v,int u,int w){

	int disViz = g->vertexes[u].disTotal+w;
	if(g->vertexes[v].disTotal>disViz){
		g->vertexes[v].disTotal=disViz;
		g->vertexes[v].previous = &g->vertexes[u];
	}
}

void BellmanFord::Inicializa(Graph *graph){
	graph->vertexes[0].disTotal=0;

	for(int i=1;i<graph->numVertexes;i++)
		graph->vertexes[i].disTotal = INF;
}

bool Bellman(Graph *graph,int w, int source){
	//Inicializa
	Inicializa(graph);

	//Relaxa cada aresta (u,v) do Grafo de i=1 até numeroVertices-1 e relaxa cada um deles
	for(int i=1;i<graph->numVertexes-1;i++){
			for(int j=0;j<graph->numEdges;j++) {
					relax(graph, graph->edges[i].origin, graph->edges[i].destiny, graph->edges[i].distance);
				}
			}	
	}
	//checa cada aresta e retorna true ou false, baseado na presença de um ciclo negativo
	for(int i=0;i<graph->numEdges;i++){
		if(graph->vertexes[i].disTotal>graph->vertexes[i].disTotal+w)
			return false;

	return true;
}
