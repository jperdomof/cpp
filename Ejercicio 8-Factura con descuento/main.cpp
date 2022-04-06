#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
		//Datos de entrada //
		double subtotal= 0;
		double total= 0;
		double impuesto= 0;
		double descuento= 0;
		double calculodescuento= 0;
		double calculoimpuesto= 0;
		
		cout<<"Ingrese el subtotal de la factura: ";
		cin>>subtotal;
		
		cout<<"Ingrese el descuento (0, 10, 15, 20): ";
		cin>>descuento;
		
		//proceso //
		calculodescuento= (subtotal * descuento) / 100;
		calculoimpuesto= (subtotal - calculodescuento) * 0.15;
		total= subtotal - descuento + calculoimpuesto;
		
		cout<<"El total a pagar es: "<<total<<endl;
	
	return 0;
}
