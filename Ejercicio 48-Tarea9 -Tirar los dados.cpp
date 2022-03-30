/*
  Proposito del programa: Mostrar el resultado de dos dados 
  
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
	int dado1=0, dado2=0;
	bool tirar_dado;
	
		tirar_dado= true;
		
		srand(time(NULL));
	
		do
		{
			dado1= rand() % 6 + 1;
			dado2= rand() % 6 + 1;
			
			cout<<"\nEl primer dado cayo en: "<<dado1<<endl;
			cout<<"\nEl segundo dado cayo en: "<<dado2<<endl;
			
			if(dado1== dado2)
			{
				cout<<"\n Felicidades salieron dados pares"<<endl;
			}
			
			cout<<"\n¿Desea lanzar los dados de nuevo? si= 1 y 0= no "<<endl;
			cin>>tirar_dado;
			
		}while(tirar_dado==true);
		
		getch();
		
 return 0;
}


