#include <iostream>
using namespace std;

int main()
{
	int opcion = 0;
	do
	{
		cout << "Ingrese 1 para mostrar mensaje\n";
		cout << "Ingrese 2 para hacer algo m�s\n";
		cout << "Ingrese 0 para salir\n";
		
		cout << "Ingrese una opci�n a ejecutar\n";
		cin >> opcion;
	}
	//Mostramos el men� hasta que la opci�n sea cero
	while(opcion !0);
	system("PAUSE");
	return 0;
}
