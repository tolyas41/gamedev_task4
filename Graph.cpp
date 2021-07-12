#include "Graph.h"


std::vector<std::vector<Graph>> Graph::paths;

Graph::Graph()
	: name("none") {
}

Graph::Graph(std::string init_name) {
	name = init_name;
}

//copy constructor
Graph::Graph(const Graph& source) 
	: name(source.name) {}

//move constructor
Graph::Graph(Graph&& source) 
	: name(source.name){}

//destructor
Graph::~Graph() {
}

//copy assignment operator
Graph& Graph::operator=(const Graph& source) {
	name = source.name;
	return *this;
}

//move operator
Graph& Graph::operator=(Graph&& source) noexcept {
	name = source.name;
	return *this;
}

