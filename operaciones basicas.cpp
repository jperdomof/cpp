/*
  Proposito del programa: Calcular las operaciones basicas (suma, resta, multiplicacion y division) de dos numeros ingresados por el usuario
  
  creado por: Jose Luis Perdomo
  
  Fecha: 01-02-2022
*/

#include <iostream>

using namespace std;

int main()
{
	float Numero_1=0, Numero_2=0; // Declaracion de variables //
	
	float Suma=0, Resta=0, Multiplicacion=0, Division=0; // Declaracion de variables //
	
		cout<<"   *** Programa para calcular operaciones basicas de dos numeros ***"<<endl;
		cout<<"\nIngrese el primer numero: "<<endl; // se le pide al usuario ingresar el primer numero //
		cin>>Numero_1;
		cout<<"\nIngrese el segundo numero: "<<endl; // se le pide al usuario ingresar el segundo numero //
		cin>>Numero_2;
		
			// instrucciones de las varibles segun su operacion aritmetica //
			Suma= Numero_1 + Numero_2; 
			Resta= Numero_1 - Numero_2;
			Multiplicacion= Numero_1 * Numero_2;
			Division= Numero_1 / Numero_2;
			
			cout<<"\nEl resultado de la suma es: "<<Suma<<endl; // Mostrar resultado de suma de las varibles //
			cout<<"El resultado de la resta es: "<<Resta<<endl; // Mostrar resultado de resta de las varibles //
			cout<<"El resultado de la multiplicacion es: "<<Multiplicacion<<endl; // Mostrar resultado de multiplicacion de las varibles //
			cout<<"El resultado de la division es: "<<Division<<endl; // Mostrar resultado de division de las varibles //
			
 return 0;
}


