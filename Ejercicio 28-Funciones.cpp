/*
  Proposito del programa: Funciones 
    
*/

#include <iostream>

using namespace std;

int sumar()
{
	return 5 + 7;
}

	string nombrecompleto()
{
	string nombre= "Juan";
	string apellido= "Perez";
	
	return nombre + " " + apellido;
}

int main()
{
		int resultado= sumar();
		string nombreyapellido= nombrecompleto();
	
		cout<<resultado;
		cout<<endl;
		cout<<nombreyapellido;
	
 		return 0;
}


