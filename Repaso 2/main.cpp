#include <iostream>
#include "calculadora.h"
#include "misc.h"

using namespace std;



int main(int argc, char** argv) {
	
	string nombre="";
	string apellido="";
	
	menu();
	
	int resultado= suma(5, 7);
	

	
	cout<<"Resultado de suma: "<<resultado;
	cout<<endl;
	
	resultado= dividir(10, 5);
	cout<<"Resultado de la division: "<<resultado<<endl;
	
	resultado= restar(12, 5);
	cout<<"Resultado de la Resta: "<<resultado<<endl;
	
	resultado= multiplicacion(10, 5);
	cout<<"Resultado de la Multiplicacion: "<<resultado<<endl;
	
	cout<<endl;
	cout<<endl;
	
	cout<<"Ingrese su nombre"<<nombre<<endl;
	cin>>nombre;
	
	cout<<"Ingrese su apellido"<<apellido<<endl;
	cin>>apellido;
	
	cout<<endl;
	cout<<endl;
	
	cout<<"Su nombre completo es: "<<nombrecompleto(nombre, apellido);
	
	
	return 0;	
}
