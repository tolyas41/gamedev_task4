#pragma once
#include <vector>
#include "Node.h"

class Graph {
public:
	std::vector<Node*> graph;

	Graph();
	~Graph();
	void addNode(Node& node);

	void printGraph() const;

	void deleteNode(const Node& node);

};

