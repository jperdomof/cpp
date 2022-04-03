/*
  Proposito del programa: Funcion con parametros
*/

#include <iostream>

using namespace std;

	int sumar(int a, int b)
	{
		return a+b;
	}
	int restar(int a, int b)
	{
		return a-b;
	}

int main()
{
	system("cls");
	
	 int numero1=0;
	 int numero2=0;
	 cout<<"Ingrese el valor de a: "<<endl;
	 cin>>numero1;
	 cout<<" Ingrese el valor de b:"<<endl;
	 cin>>numero2;
	 
	 cout<<endl;
	 
	 cout<<"El resultado de la suma es: "<<sumar(numero1, numero2)<<endl;
	 cout<<"El resultado de la resta es: "<<restar(numero1, numero2)<<endl;
	
 return 0;
}


