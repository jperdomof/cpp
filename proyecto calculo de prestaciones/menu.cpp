#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

using namespace std;

extern void despido();
extern void renuncia();
extern void reglas();

void menu()
{
	setlocale(LC_CTYPE, "spanish");
	
	int opcion= 0;
	
	while(true)
	{
		system("cls");
		cout<<endl;
		cout<<endl;
		cout<<"              ****";
		cout<<" MENU ";
		cout<<"****";
		cout<<endl;
		
		cout<<"\n     1 - CALCULO DE PRESTACIONES POR DESPIDO"<<endl;
		cout<<"\n     2 - CALCULO DE PRESTACIONES POR RENUNCIA"<<endl;
		cout<<"\n     3 - REGLAS PARA EL CALCULO DE PRESTACIONES"<<endl;
		cout<<"\n     0 - SALIR"<<endl;
		
		cout<<"   \n Ingrese una opcion: "<<endl;
		
		cin>>opcion; 
		
		if(opcion==0)
			{
				break;
			}
		
		if(opcion==1)
			{
				despido();
			}
		
		if(opcion==2)
			{
			 	renuncia();	
			}
		if(opcion==3)
		{
				reglas();
		}	
		
		}
		
		
	}
		


