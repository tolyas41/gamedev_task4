#include "Graph.h"
#include <vector>
#include <iostream>


int main() {

	Graph v1("1");
	Graph v2("2");
	Graph v3("33");
	Graph v4("4");
	Graph v5("5");
	
	//v1.addPaths(v2);
	//v1.addPaths(v3);
	//std::vector<std::vector<std::string>> paths;
	//paths[0].push_back("names");

	Graph::printPaths();

	v1.print_();

	return 0;
}

