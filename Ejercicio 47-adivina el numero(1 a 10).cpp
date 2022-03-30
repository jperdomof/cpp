/*
  Proposito del programa:

*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int numeroSecreto= 0;
	int minumero= 0;
	
	// inicializa el numero random //
	srand(time(NULL));
	
	// generar un numero entre 1 y 10 //
	numeroSecreto= rand() % 10 + 1;
	
	do
	{
		cout<<"\nAdivina el numero (entre 1 y 10): "<<endl;
		cin>>minumero;
		
		if(numeroSecreto < minumero)
		{
			cout<<"\nEl numero secreto puede ser menor"<<endl;
			
		}
		else
			if(numeroSecreto > minumero)
			{
				cout<<"\nEl numero secreto puede ser mayor"<<endl;
			}
			
			
		
	} while(numeroSecreto != minumero);


 		cout<<endl;
 		cout<<endl;
 		
 		cout<<"Adivinaste"<<endl;
 






 return 0;
}


