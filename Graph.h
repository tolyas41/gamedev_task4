#pragma once
#include <string>
#include <vector>
#include <iostream>

class Graph {

	static std::vector<std::vector<std::string>> paths;

	std::string name;

public:
	static int count;

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

//add paths
	void addPaths(const Graph& connectedVertex);
//print paths
	static void printPaths();

//tets func
	void print_();
};

