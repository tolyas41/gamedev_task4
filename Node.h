#pragma once
#include <string>
#include <vector>

class Node {

public:
	std::vector<Node*> links;
	std::string name;

	Node();
	Node(std::string initializationName);

//copy constructor
	Node(Node& source);

//move constructor
	Node(Node&& source);

//destructor
	~Node();


//copy assignment operator
	Node& operator=(const Node& source);

//move operator
	Node& operator=(Node&& source) noexcept;


//add paths
	void addLinks(Node& linkedNode);

	void clearNode();
};



