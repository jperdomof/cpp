/*
  Proposito del programa: Funciones con ciclos
  
*/

#include <iostream>

using namespace std;

void imprimircaracteres(char caracter, int ciclos)
{
	for(int i=0; i < ciclos; i++)
	{
		cout<<caracter;
	}
	cout<<endl;
}

int main()
{
	imprimircaracteres('@', 10);
	imprimircaracteres('#', 5);
	cout<<"Hola mundo"<<endl;
 	imprimircaracteres('#', 1000);


 return 0;
}


