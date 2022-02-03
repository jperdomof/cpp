/*
  Proposito del programa: Calcular las operaciones basicas (suma, resta, multiplicacion y division) de dos numeros ingresados por el usuario
  
  creado por: Jose Luis Perdomo
  
  Fecha: 02-02-2022
*/

#include <iostream>

using namespace std;

int main()
{
	float Numero_1=0, Numero_2=0;
	
	float Suma=0, Resta=0, Multiplicacion=0, Division=0;
	
		cout<<"   *** Programa para calcular operaciones basicas de dos numeros ***"<<endl;
		cout<<"\nIngrese el primer numero: "<<endl;
		cin>>Numero_1;
		cout<<"\nIngrese el segundo numero: "<<endl;
		cin>>Numero_2;
		
			Suma= Numero_1 + Numero_2;
			Resta= Numero_1 - Numero_2;
			Multiplicacion= Numero_1 * Numero_2;
			Division= Numero_1 / Numero_2;
			
			cout<<"\nEl resultado de la suma es: "<<Suma<<endl;
			cout<<"El resultado de la resta es: "<<Resta<<endl;
			cout<<"El resultado de la multiplicacion es: "<<Multiplicacion<<endl;
			cout<<"El resultado de la division es: "<<Division<<endl;
			
 return 0;
}


