#include "User.h"

User::User(){}

User::User(string nombre, string apellido) {
	this->_nombre = nombre;
	this->_apellido = apellido;
}

string User::getFullName() {
	return this->_nombre + ' ' + this->_apellido;
}