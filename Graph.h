#pragma once
#include <string>
#include <vector>
#include <iostream>

class Graph {

	static std::vector<std::vector<Graph>> paths;

	std::string name;
	int position_in_paths;
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
	Graph& operator=(Graph&& source);

//add paths
	void addPaths(const Graph& connectedVertex);
//print paths
	static void printPaths();

//tets func
	void print_();

	bool operator==(const Graph& right_obj);


};



