#pragma once
#include <string>
#include <vector>

class Graph {

	static int vertices;
	static std::vector<std::vector<Graph>> paths;

	std::string name;

public:

	Graph();
	Graph(std::string init_name);

//copy constructor
	Graph(const Graph& source);

//move constructor
	Graph(Graph&& source);

//destructor
	~Graph();


//copy assignment operator
	Graph& operator=(const Graph& source);

//move operator
	Graph& operator=(Graph&& source) noexcept;

};

