/*
  Proposito del programa: Funcion Nombre completo
    
*/

#include <iostream>

using namespace std;

string nombrecompleto(string nombre, string apellido)
{
	return nombre + " " + apellido;
}

int main()
{
	string primerNombre="";
	string primerApellido="";
	
	 cout<<"Ingrese su primer nombre: ";
	 cin>>primerNombre;
	 cout<<"Ingrese su primer apellido: ";
	 cin>>primerApellido;
	 
	 cout<<endl;
	 
	 cout<<"Nombre completo: "<<nombrecompleto(primerNombre, primerApellido);
	 
 return 0;
}


