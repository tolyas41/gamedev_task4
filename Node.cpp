#include "Node.h"

Node::Node()
	: Node("") {
}

Node::Node(std::string initializationName) {
	name = initializationName; 
}

//copy constructor
Node::Node(Node& source) {
	links = source.links;
	name = source.name;
}

//move constructor
Node::Node(Node&& source) 
	: name(source.name) {
}

//destructor
Node::~Node() {
}

//copy assignment operator
Node& Node::operator=(const Node& source) {
	links = source.links;
	name = source.name;
	return *this;
}

//move assignment operator
Node& Node::operator=(Node&& source) noexcept {
	name = source.name;
	return *this;
}

//add paths
void Node::addLinks( Node& linkedNode) {
	if (std::find(links.begin(), links.end(), &linkedNode) == links.end()) {
		links.push_back(&linkedNode);
		linkedNode.links.push_back(this);
	}
}

void Node::clearNode() {
	name = "";
	links.clear();
}
