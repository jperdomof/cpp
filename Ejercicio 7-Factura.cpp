/*
  Proposito del programa: Factura
   
*/

#include <iostream>

using namespace std;

int main()
{
	// Datos de entrada //
	double subtotal= 0;
	double total= 0;
	double impuesto= 0.15;
	
	cout<<"Ingrese el subtotal de la factura: ";
	cin>>subtotal;
	
	//proceso //
	
	total= subtotal + (subtotal * 0.15);
	
	//salida //
	cout<<endl;
	cout<<"Total a pagar es: "<<total<<endl;

 return 0;
}


