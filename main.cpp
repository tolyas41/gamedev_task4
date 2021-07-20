#include "Node.h"
#include <iostream>
#include "Graph.h"


int main() {

	Node v1("1");
	Node v2("2");
	Node v3("3");
	Node v4("4");
	Node v5("5");
	Node v6 = Node("6");
	Node v0("7");
	Node v7 = v0;

	v1.addLinks(v2);
	v2.addLinks(v1);
	v3.addLinks(v4);			
	v4.addLinks(v1);
	v7.addLinks(v5);
	v6.addLinks(v1);
	v7.addLinks(v6);


	Graph graph;
	graph.addNode(v1);
	graph.addNode(v2);
	graph.addNode(v3);
	graph.addNode(v4);
	graph.addNode(v5);
	graph.addNode(v6);
	graph.addNode(v7);
	//v3.clearNode();

	graph.printGraph();

	return 0;
}

