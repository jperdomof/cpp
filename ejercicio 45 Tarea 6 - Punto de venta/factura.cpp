
#include <iostream>

using namespace std;

double subtotal, impuesto, total;
string listaproductos;

	void agregarproducto(string descripcion, int cantidad, double precio)
	{
		listaproductos= listaproductos + descripcion + "\n";
		subtotal= subtotal + (cantidad * precio);
		impuesto= subtotal * 0.15;
		total= subtotal + impuesto;
	}
	
	void imprimirfactura()
	{
		system("cls");
		cout<<"********************"<<endl;
		cout<<"      FACTURA"<<endl;
		cout<<"********************"<<endl;
				
		cout<<"     PRODUCTOS:"<<endl<<endl;
		cout<<listaproductos;
		
		cout<<endl;
		cout<<"********************"<<endl;
		cout<<"Subtotal: "<<subtotal<<endl;
		cout<<"Impuesto: "<<impuesto<<endl;
		cout<<"********************"<<endl<<endl;
		cout<<"Total a pagar: L. "<<total<<endl;
		cout<<"\n****Gracias por su Visita****"<<endl<<endl;
		system("pause");
		
	}
