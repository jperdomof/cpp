/*
  Proposito del programa: Arreglos unidimencionales tipo string
 
*/

#include <iostream>

using namespace std;

int main()
{

	int numeros[]= {4, 5, 8, 10};
	
	for(int i= 0; i < 3; i++)
	{
		cout<<numeros[i]<<endl;
	}
	
	string nombres[]= {"Juan", "Maria", "Pedro", "Jose", "Pablo"};
	
	for(int i= 0; i < 5; i++)
	{
		cout<<nombres[i]<<endl;
	}

 return 0;
}


