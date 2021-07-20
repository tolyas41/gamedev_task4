#include "Graph.h"
#include <iostream>

Graph::Graph() {
}

Graph::~Graph() {
}

void Graph::addNode(Node& node) {
	graph.push_back(&node);
}

void Graph::printGraph() const {
	for (const Node* node : graph) {
		if (node->name != "") {
			std::cout << "\n" << node->name << " - ";
			for (const Node* linkedNode : node->links) {
				if (linkedNode->name != "") {
					std::cout << linkedNode->name << " ";
				}
			}
		}
	}
}

void Graph::deleteNode(const Node& node) {
	graph.erase(std::remove(graph.begin(), graph.end(), &node), graph.end());
}
