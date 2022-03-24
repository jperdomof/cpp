/*
  Proposito del programa: Funcion que devuelve la raiz de un numero ingresado por el usuario
    
*/

#include <iostream>
#include <math.h>

using namespace std;

double raiz(double y);

int main()
{
	double numero;
	
	cout<<"Ingrese un numero: \n";
	cin>>numero;
	
	cout<<"\nLa raiz cuadrada del numero: "<<numero<<" es: "<<raiz(numero);
	
 return 0;
}

double raiz(double numero){
	
	return sqrt(numero);
}


