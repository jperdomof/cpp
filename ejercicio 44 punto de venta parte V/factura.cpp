
#include <iostream>

using namespace std;

double subtotal;
string listaproductos;

	void agregarproducto(string descripcion, int cantidad, double precio)
	{
		listaproductos= listaproductos + descripcion + "\n";
		subtotal= subtotal + (cantidad * precio);
	}
	
	void imprimirfactura()
	{
		system("cls");
		cout<<"********"<<endl;
		cout<<"FACTURA"<<endl;
		cout<<"********"<<endl;
		cout<<endl;
		
		cout<<"productos:"<<endl;
		cout<<listaproductos;
		
		cout<<endl;
		cout<<"subtotal: "<<subtotal;
		cout<<endl;
		cout<<endl;
		system("pause");
		
	}
