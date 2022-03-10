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
			cout<<"3 - CHOCOLATE"<<endl;
			
			cout<<"Ingrese una opcion: "<<endl;
			cin>>opcionproducto;
			
			switch(opcionproducto)
			{
				case 1:
					agregarproducto("1-Capuccino: L. 40.00 ", 1, 40);
					break; 
					
					case 2:
						agregarproducto("1-Expresso: L. 30.00", 1, 30);
						break;
						
						case 3:
							agregarproducto("1-Chocolate: L. 45.00", 1, 45);
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
					cout<<"*****************"<<endl;
					cout<<"1 - GRANITA DE CAFE"<<endl;
					cout<<"2 - GRANITA DE FRUTA"<<endl;
					cout<<"3 - PINA COLADA"<<endl;
			
					cout<<"Ingrese una opcion: "<<endl;
					cin>>opcionproducto;
			
				switch(opcionproducto)
				{
				case 1:
					agregarproducto("1-Granita de cafe: L. 45.00 ", 1, 45);
					break; 
					
					case 2:
						agregarproducto("1-Granita de fruta: L. 50.00", 1, 50);
						break;
						
						case 3:
							agregarproducto("1-Pina colada: L. 55.00", 1, 55);
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
						
						case 3:
						{
							cout<<"REPOSTERIA"<<endl;
							cout<<"*****************"<<endl;
							cout<<"1 - PASTEL TRES LECHES"<<endl;
							cout<<"2 - PASTEL DE BANANO"<<endl;
							cout<<"3 - TORTA DE FRESA"<<endl;
			
							cout<<"Ingrese una opcion: "<<endl;
							cin>>opcionproducto;
			
						switch(opcionproducto)
						{
							case 1:
							agregarproducto("1-Pastel tres leches: L. 35.00 ", 1, 35);
							break; 
					
							case 2:
								agregarproducto("1-Pastel de banano: L. 38.00", 1, 38);
								break;
						
							case 3:
								agregarproducto("1-Torta de fresa: L. 40.00", 1, 40);
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
						
			
			
				
}
	
}
