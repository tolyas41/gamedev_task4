#include "Graph.h"

std::vector<std::vector<std::string>> Graph::paths;
int Graph::count = 0;

Graph::Graph()
	: name("none") {
}

Graph::Graph(std::string init_name) {
	name = init_name; 
	paths.push_back(std::vector<std::string>());
	paths[count].push_back(name);
	//paths[0][0] = name;
	count++;
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

//add paths
void Graph::addPaths(const Graph& connectedVertex) {
	//std::cout << std::stoi(name);
	//paths[0].push_back(connectedVertex.name);
}
//print paths
void Graph::printPaths() {
	for (std::vector<std::string> vect1D : paths)
	{
		for (auto x : vect1D)
		{
			std::cout << x << " ";
		}
		std::cout << std::endl;
	}
}


//tets func
void Graph::print_() {
	std::cout << name;
}
