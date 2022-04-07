/*
  Proposito del programa: Arreglos unidimencionales y ciclos for
 
*/

#include <iostream>

using namespace std;

int main()
{
	int numeros[5]; // declaracion del arreglo //

	for(int i= 0; i < 5; i++)
	{
		numeros[i]= i;
	}
	
	for(int i= 0; i < 5; i++)
	{
		cout<<numeros[i]<<endl;
	}
	
	

 return 0;
}

