#include "Graph.h"
#include <vector>
#include <iostream>


int main() {

	Graph v1("1");
	Graph v2("2");
	Graph v3("3");
	Graph v4("4");
	Graph v5("5");
	Graph::printPaths();

	Graph v6 = Graph("6");		
	v5 = Graph("99");			
	Graph::printPaths();

	v1.addPaths(v2);
	v1.addPaths(v2);
	v2.addPaths(v1);
	v3.addPaths(v4);			
	v4.addPaths(v1);
	v6.addPaths(v5);
	Graph::printPaths();
	v1 = v2;					
	v3.addPaths(v4);
	Graph::printPaths();

	return 0;
}

