#include "Graph.h"
#include <algorithm>

std::vector<std::vector<Graph>> Graph::paths;
int Graph::count = 0;

Graph::Graph()
	: name("none") {
}

Graph::Graph(std::string init_name) {
	name = init_name; 
	position_in_paths = count;
	paths.push_back(std::vector<Graph>());
	paths[count].push_back(*this);

	count++;
}

//copy constructor
Graph::Graph(const Graph& source) 
	: name(source.name), position_in_paths(source.position_in_paths) {
}

//move constructor
Graph::Graph(Graph&& source) 
	/*: name(source.name)*//*, position_in_paths(source.position_in_paths)*/ {
	//paths.erase(paths.begin() + position_in_paths);

	//for (auto& remove_this : paths) {
	//	remove_this.erase(std::remove(remove_this.begin(), remove_this.end(), *this), remove_this.end());
	//}

	//name = source.name;
	//count--;
}

//destructor
Graph::~Graph() {
	count--;
}

//copy assignment operator
Graph& Graph::operator=(const Graph& source) {
	paths.erase(paths.begin() + position_in_paths);

	for (auto& remove_this : paths) {
		remove_this.erase(std::remove(remove_this.begin(), remove_this.end(), *this), remove_this.end());
	}

	name = source.name;
	position_in_paths = source.position_in_paths;
	return *this;
}

//move operator
Graph& Graph::operator=(Graph&& source) {
	
	return *this;
}

//add paths
void Graph::addPaths(const Graph& connectedVertex) {
	if (name != connectedVertex.name) {
		paths[position_in_paths].push_back(connectedVertex);
		paths[connectedVertex.position_in_paths].push_back(*this);
	}
}

//print paths
void Graph::printPaths() {
	for (std::vector<Graph> &vect1D : paths) {
		for (auto x : vect1D) {
			std::cout << x.name << " ";
		}
		std::cout << std::endl;
	}
}


//test func
void Graph::print_() {
	std::cout << name << std::endl;
}


bool Graph::operator==(const Graph& right_obj) {
	return name == right_obj.name;
}
