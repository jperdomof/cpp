/*
  Proposito del programa: Calcular el costo total a pagar de una factura 
  Autor: Jose Luis Perdomo	
  fecha: 09-02-2022
  
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int Subtotal=0, Salir=1;
	float Impuesto, Descuento, Total;
	char Factura;

	cout<<"*** Programa para calcular Factura con descuento e impuesto ***"<<endl;
	
	while(Salir==1) // condicion para ejecutar y salir del ciclo
	{
		cout<<"\n Ingrese el Subtotal de la factura"<<endl; 
		cin>>Subtotal;
		cout<<"\n Seleccione el descuento (0, 10, 15, 20)"<<endl;
		cin>>Descuento;
			
			if(Descuento==0) // Condiciones para calcular el descuento //
			{
				Descuento=0;
			}
			else
				if(Descuento==10)
				{
					Descuento= Subtotal * 0.10;
					
				}
				else
					if(Descuento==15)
					{
						Descuento= Subtotal * 0.15;
					}
					else
						if(Descuento==20)
						{
							Descuento= Subtotal * 0.20;
						}
						
						cout<<"Es Factura Excenta? escriba S o N:"<<endl;
						cin>>Factura;
						
						if(Factura=='S' || Factura=='s') // condiciones para incluir o  no el impuesto en factura //
						{
							Impuesto= 0;
						}
						else
							if(Factura=='N' || Factura=='n')
							{
								Impuesto= Subtotal * 0.15;
							}
							
							Total= Subtotal - Descuento + Impuesto; // formula para el calculo de las operaciones //
							
							cout<<"\nEl Descuento es: "<<Descuento<<endl; // mostrar Descuento en pantalla //
							cout<<"El Impuesto es: "<<Impuesto<<endl;     // mostrar Impuesto en pantalla //
							cout<<"El Total a pagar es: "<<Total<<endl;   // mostrar Total en pantalla //
							
							cout<<"\nPresione 1 para Continuar o Presione cualquier otra tecla para Salir"<<endl; // Varible para seguir ejecutando el programa o salir //
							cin>>Salir;
			
	}
							
 return 0;
}


