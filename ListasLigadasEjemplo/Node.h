#pragma once
#include "User.h"
#include <iostream>
#include <string>

using namespace std;

class Node {
private:
	User _data;
	Node* _next = NULL;
	int _size = 0;
public:
	Node();

	Node(User data);

	~Node();

	//delete
	void deleteAllNodes();

	void deleteNodeAtEnd();

	void deleteNodeAtBegin();

	void deleteByIndex(int index);

	//add
	void addNodeAtEnd(User _data);

	void addNodeAtBegin(User _data);

	void addNodeAtIndex(int index, User _data);

	//get
	void getAllNodes();

	Node* getNodeByIndex(int index);

};

