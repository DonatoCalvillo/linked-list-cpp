#pragma once
#include <string>

using namespace std;

class User
{
	private:
		string _nombre;
		string _apellido;
	public:
		User();

		User(string nombre, string apellido);

		string getFullName();
};

