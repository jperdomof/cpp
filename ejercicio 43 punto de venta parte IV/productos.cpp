#include <iostream>

using namespace std;

extern void agregarproducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
	system("cls");
	
	int opcionproducto= 0;
	
	switch(opcion)
	{
		case 1: 
		{
			cout<<"BEBIDAS CALIENTES"<<endl;
			cout<<"*****************"<<endl;
			cout<<"1 - CAPUCCINO"<<endl;
			cout<<"2 - EXPRESSO"<<endl;
			cin>>opcionproducto;
			
			switch(opcionproducto)
			{
				case 1:
					agregarproducto("capuccino", 1, 40);
					break; 
					
					case 2:
						agregarproducto("expresso", 1, 30);
						break;
					
						default:
							cout<<"Producto no valido"<<endl;
							return;
							break;
			}
		}
						cout<<endl;
						cout<<"producto agregado"<<endl<<endl;
						system("pause");
						break;
						
				case 2:
				{
					cout<<"BEBIDAS FRIAS"<<endl;
					cout<<"*************"<<endl;
					system("pause");
					break;
				}
				case 3:
				{
					cout<<"REPOSTERIA"<<endl;
					cout<<"**********"<<endl;
					system("pause");
					break;
				}
				default:
					break;
			
				
	}
	
}
