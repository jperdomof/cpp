
#include <iostream>

using namespace std;

double subtotal;
string listaproductos;

	void agregarproducto(string descripcion, int cantidad, double precio)
	{
		listaproductos= listaproductos + descripcion + "\n";
		subtotal= subtotal + (cantidad * precio);
	}
