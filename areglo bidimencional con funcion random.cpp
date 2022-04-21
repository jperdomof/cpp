/*
  Proposito del programa: Arreglo bidimencional con numeros aleatorios
  
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int areglo[5][5];

int i, y, sumafila, sumacolumna;

int main()
{
	srand(time(NULL));

	for(i=0; i<5; i++)
	{
		
		for(y=0; y<5; y++)
		{
			areglo[i][y]= rand() % 10;
			cout<<areglo[i][y]<<" ";
		}
		cout<<endl;
	}

	for(i=0; i<5; i++)
	{
		sumafila= 0;
		for(y=0; y<5; y++)
		{
			sumafila= sumafila + areglo[i][y];
		}
			cout<<"\nLa suma de la fila "<<i<<" es: "<<sumafila;
		}
			cout<<endl;
			
		for(y=0; y<5; y++)
		{
			sumacolumna=0;
			for(i=0; i<5; i++)
			{
				
				sumacolumna= sumacolumna + areglo[i][y];
			}
				cout<<"\nLa suma de la columna "<<y<<" es: "<<sumacolumna;
							
		}
			
 return 0;
}


