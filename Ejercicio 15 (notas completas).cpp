/*
  Proposito del programa: calificar la nota segun el rango entre 0 y 100
  Autor:Jose Luis Perdomo
  fecha: 09-02-2022
  
*/

#include <iostream>

using namespace std;

int main()
{
	int Nota= 0, Salir=1; // declaracion de varibles
	
	cout<<"*** Calificacion de Notas ***"<<endl;
	
	
		while(Salir==1) // condicion para iniciar y salir del ciclo//
		{
			cout<<"\n Ingrese su Nota debe estar en el rango de 0 a 100 "<<endl;
			cin>>Nota;
			
				while(Nota<0 || Nota>100) // condicion para no ingresar numeros negativos, ni mayores de 100 //
				{
					break;
				}
				
				if(Nota<=100 && Nota>=96)
				{
					cout<<"\nSu calificacion es: A++"<<endl;
				}
				
				if(Nota<=95 && Nota>=91)
				{
					cout<<"\nSu calificacion es: A+"<<endl;
				}
				if(Nota<=90 && Nota>=86)
				{
					cout<<"\nSu calificacion es: A"<<endl;
				}
				if(Nota<=85 && Nota>=81)
				{
					cout<<"\nSu calificacion es: A-"<<endl;
				}
				if(Nota<=80 && Nota>=76)
				{
					cout<<"\nSu calificacion es: B+"<<endl;
					
				}
				if(Nota<=75 && Nota>=71)
				{
					cout<<"\nSu calificacion es: B"<<endl;
				}
				if(Nota<=70 && Nota>=66)
				{
					cout<<"\nSu calificacion es: B-"<<endl;
				}
				if(Nota<=65 && Nota>=60)
				{
					cout<<"\nSu calificacion es: C"<<endl;
				}
				if(Nota<=59 && Nota>=0)
				{
					cout<<"\nSu calificacion es: C-"<<endl;
				}
				
				cout<<"\nPresione 1 para Continuar o Presione cualquier otra tecla para Salir"<<endl;
				cin>>Salir;
		}
	
				cout<<"\n ** El programa finalizo correctamente **"<<endl;
	

 return 0;
}


