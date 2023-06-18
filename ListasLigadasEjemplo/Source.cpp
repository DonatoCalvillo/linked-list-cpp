#include "User.h"
#include "Node.h"
#include <iostream>

using namespace std;

void main() {
	User usuarioUno("Edgar", "Calvillo");
	User usuarioDos("Nallely", "Dominique");
	User usuarioTres("Edmudno", "Ocaña");
	User usuarioCuatro("Donato", "Calvillo");

	Node* ll = new Node();

	//Add
	ll->addNodeAtEnd(usuarioUno);
	ll->addNodeAtEnd(usuarioDos);
	ll->addNodeAtEnd(usuarioTres);
	ll->addNodeAtIndex(3, usuarioCuatro);
	
	//Get
	ll->getAllNodes();
	cout << "--------------------------" << endl;
	//ll->getNodeByIndex(13);
	//ll->deleteAllNodes();
	//ll->deleteNodeAtEnd();
	//ll->getAllNodes();
	//cout << "--------------------------" << endl;
	//ll->deleteNodeAtBegin();
	//ll->getAllNodes();

	ll->deleteByIndex(2);
	ll->getAllNodes();





	system("pause > nul");
}