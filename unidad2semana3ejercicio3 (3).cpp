#include <iostream>
#include "string"
using namespace std;

int main()
{
	string titulos[5];
	string autores[5];
	cout << "Por favor ingrese la siguiente informaci�n de los libros: \n";
	for(int i = 0; i < 5; i++)
	{
		cout<< "\n******* Libro  << i + 1 << " << i + 1 << "********:\n";
		cout << "Titulo: ";
		//cin >> titulos [i]; //No funciona con espacios
		getline(cin, titulos[i]);
		cout << "Autor: ";
		//cin >> autores [i]; //No funciona con espacios
		getline(cin, autores[i]);
	}
}
