#pragma once
#include <string>
#include <vector>
#include <iostream>

class Graph {

	static std::vector<std::vector<Graph*>> paths;

	std::string name;
	int position_in_paths;
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


//add paths
	void addPaths( Graph& connectedVertex);
//print paths
	static void printPaths();


	bool operator==(const Graph& right_obj);

	bool operator!=(const Graph& right_obj);


};



