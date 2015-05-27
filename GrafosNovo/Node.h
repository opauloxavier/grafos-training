class Node{

	public:
		int value;
		Node *next;

		Node(int val);
		Node();
		~Node();
};

Node::Node(){
	next=NULL;
}

Node::Node(int val){

	value = val;
	next=NULL;
}

Node::~Node(){}
