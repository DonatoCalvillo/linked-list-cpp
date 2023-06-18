#include "Node.h"

Node* head = NULL;
Node* aux = NULL;
Node* tail = NULL;

Node::Node() {}

Node::Node(User data) {
	this->_data = data;
}

Node::~Node() {
	this->deleteAllNodes();
}

void Node::deleteAllNodes() {
	cout << "Destruyendo nodos..." << endl;
	while (head != NULL) {
		aux = head;
		head = aux->_next;
		free(aux);
	}
	head = aux = tail = NULL;
}

void Node::deleteNodeAtEnd() {
	int count = 0;
	aux = head;
	Node* prevNode = new Node();

	while (count < this->_size - 1)
	{
		prevNode = aux;
		aux = aux->_next;
		count++;
	}

	prevNode->_next = NULL;
	tail = prevNode;

	free(aux);
	aux = NULL;
}

void Node::deleteNodeAtBegin() {
	aux = head;
	head = aux->_next;

	free(aux);
	aux = NULL;
}

void Node::deleteByIndex(int index) {
	if (index > 0 && index > this->_size) return;
	if (index == 0) return this->deleteNodeAtBegin();
	if (index == this->_size - 1) return this->deleteNodeAtEnd();

	int count = 0;
	aux = head;
	Node* prevNode = new Node();

	while (count < index)
	{
		prevNode = aux;
		aux = aux->_next;
		count++;
	}
	
	prevNode->_next = aux->_next;
	free(aux);
	aux = NULL;

}

void Node::addNodeAtEnd(User _data) {

	aux = new Node(_data);

	if (head == NULL) {
		head = new Node(_data);
		tail = head;
	}
	else {
		tail->_next = aux;
		tail = aux;
	}

	this->_size++;

}

void Node::addNodeAtBegin(User _data) {
	aux = new Node(_data);

	if (head == NULL) {
		head = new Node(_data);
		tail = head;
	}
	else {
		aux->_next = head;
		head = aux;
	}

	this->_size++;
}

void Node::addNodeAtIndex(int index, User _data) {
	if (index > 0 && index > this->_size) return;
	if (index == 0) return this->addNodeAtBegin(_data);
	if (index == this->_size) return this->addNodeAtEnd(_data);

	int count = 0;
	aux = head;
	Node* prevNode = new Node();

	while (count < index)
	{
		prevNode = aux;
		aux = aux->_next;
		count++;
	}
	prevNode->_next = new Node(_data);
	prevNode->_next->_next = aux;

}

void Node::getAllNodes() {
	aux = head;
	while (aux != NULL)
	{
		cout << aux->_data.getFullName() << endl;
		aux = aux->_next;
	}
}

Node* Node::getNodeByIndex(int index) {
	if (index > 0 && index > this->_size) return NULL;

	int count = 0;
	aux = head;

	while (count < index)
	{
		aux = aux->_next;
		count++;
	}

	return aux;
}
