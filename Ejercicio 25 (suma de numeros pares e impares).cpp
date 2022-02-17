/*
  Proposito del programa: Mostrar la suma de numeros impares y numeros pares del 1 al 10
  Autor: Jose Luis Perdomo
  fecha: 16-02-2022
  
*/

#include <iostream>

using namespace std;

int main()
{
	int Numeros_pares=0, Numeros_impares=0, Total_numeros=0; // variables//
	
	cout<<"*** Programa que suma numeros pares e impares del 1 al 10 ***"<<endl<<endl;
	
	for(int i=1; i<=10; i++) // ciclo principal tipo for//
	{
		if(i % 2==0) // condicion numeros pares //
		{
			Numeros_pares= Numeros_pares + i;
		}
		cout<<"Numeros utilizados: "<<i<<endl;
		
		if(i % 2==1) // condicion numeros impares //
		{
			Numeros_impares= Numeros_impares + i;
		}
		Total_numeros= Numeros_pares + Numeros_impares;
	}
	
	cout<<""<<endl;
	cout<<"Suma total de Numeros pares: "<<Numeros_pares<<endl<<endl;
	cout<<"Suma total de Numeros impares: "<<Numeros_impares<<endl<<endl;
	cout<<"Total Numeros pares + Numeros impares: "<<Total_numeros<<endl;
	
 return 0;
}


