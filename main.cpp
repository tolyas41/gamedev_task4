#include "Graph.h"
#include <vector>
#include <iostream>


int main() {

	//Graph* v1 = new Graph("1");	
	Graph v1("1");
	Graph v2("2");
	Graph v3("3");
	Graph v4("4");
	Graph v5("5");
	Graph v6 = v5;

	//v1.addPaths(v2);
	v2.addPaths(v1);
	v4.addPaths(v5);
	v4.addPaths(v5);
	//v2.addPaths(v4);
	v5.addPaths(v1);
	v6.addPaths(v1);
	v6.addPaths(v5);
	Graph::printPaths();

	v1 = v2;
	std::cout << "v1 = ";
	v1.print_();
	Graph::printPaths();


	return 0;
}

