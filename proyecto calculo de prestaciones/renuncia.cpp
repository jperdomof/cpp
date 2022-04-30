#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

using namespace std;

	void renuncia()
	{
		system("cls");
		
		setlocale(LC_CTYPE, "spanish");   // activar uso de letra Ñ //
		
		// variables del programa //
		int a_renuncia, mes_renuncia, dia_renuncia;
		int a_ingreso, mes_ingreso=0, dia_ingreso=0;
		int antiguedad, decimocuarto_dias, decimotercer_dias;
		int antiguedad_meses, antiguedad_dias, vacaciones_dias, vacaciones;
		
		float salario_mensual, salario_promedio, salario_diario, salario_diariopromedio;
		float preaviso, cesantia, aguinaldo_proporcional, catorceavo_proporcional;
		float cesantia_dias, cesantia_meses, auxilio_cesantia;
		float total_prestaciones;
		
		
			cout<<"       ***** CALCULO DE PRESTACIONES LABORALES POR RENUNCIA *****"<<endl;
			cout<<endl;
			
	
			// Condiciones para no ingresar numeros negativos, ni numeros no validos //
			do{
				cout<<" Ingrese el año que fue despedido de la empresa: "<<endl; 
				cin>>a_renuncia;
			} while((a_renuncia < 1950) || (a_renuncia > 2022));
			
			do{
				cout<<" Ingrese el numero de mes que fue despedido por la empresa: "<<endl; 
				cin>>mes_renuncia;
			} while((mes_renuncia <=0) || (mes_renuncia > 12));
			
			do{
				cout<<" Ingrese el numero de dia que fue despedido por la empresa: "<<endl; 
				cin>>dia_renuncia;
			} while((dia_renuncia <=0) || (dia_renuncia > 30));
			
			do{
				cout<<" Ingrese el numero de año que fue contratado por la empresa: "<<endl; 
				cin>>a_ingreso;
			} while((a_ingreso < 1950) || (a_ingreso > 2022));
			
			do{
				cout<<" Ingrese el numero de mes que fue contratado por la empresa: "<<endl; 
				cin>>mes_ingreso;
			} while((mes_ingreso <=0) || (mes_ingreso > 12));
			
			do{
				cout<<" Ingrese el numero de dia que fue contratado por la empresa: "<<endl; 
				cin>>dia_ingreso;
			} while((dia_ingreso <=0) || (dia_ingreso > 30));
			
			system("cls");
			
			cout<<"       ***** CALCULO DE PRESTACIONES LABORALES POR RENUNCIA *****"<<endl;
			cout<<endl;
			
			cout<<"\nIngrese la cantidad de dias de vacaciones que tiene pendientes: "<<endl;
			cin>>vacaciones_dias;
			
			cout<<"\nIngrese su salario mensual: "<<endl;
			cin>>salario_mensual;
				
				//formulas de calculo //
				antiguedad= a_renuncia - a_ingreso;
				salario_promedio= (salario_mensual * 14) / 12;
				salario_diariopromedio= salario_promedio / 30;
				salario_diario= salario_mensual / 30;
				
				
				antiguedad_meses= mes_renuncia;
				antiguedad_dias= dia_renuncia;
				
				// Condiciones para calcular la cesantia y el preaviso	//			
				if(antiguedad == 0 && antiguedad_meses >=0)
				{
					cesantia= 0;
					preaviso= 0;
				}
				
				if(antiguedad ==1 )
				{
					cesantia= (salario_promedio * antiguedad) /2;
					preaviso= 0;	
				}
				if(antiguedad >1 && antiguedad <=25)
				{
					cesantia = cesantia= (salario_promedio * antiguedad) /2;
					preaviso= 0;
				}
				 if(antiguedad > 25)
				{
					cesantia= salario_promedio * 25 / 2;
					// La ley de codigo de trabajo dice que el maximo de cesantia es de 25 años//
				}
				
						
				cesantia_meses= antiguedad_meses * 30;
				cesantia_dias= (cesantia_meses * 30) / 360;
				auxilio_cesantia= 0; 
								
				aguinaldo_proporcional= (salario_mensual * antiguedad_meses) / 12;
				
				// condicionales para calculo de decimo tercer y decimo cuarto salario proporcional //
				if(antiguedad==0 && antiguedad_meses ==1)
				{
					catorceavo_proporcional= 0;
					aguinaldo_proporcional= 0;
				}
				if(antiguedad==0 && antiguedad_meses==2)
				{
					catorceavo_proporcional= 0;
					aguinaldo_proporcional= 0;
				}
				if(antiguedad ==0 && antiguedad_meses==3)
				{
					catorceavo_proporcional= (salario_mensual * 3) / 12;
					aguinaldo_proporcional= (salario_mensual * 3) / 12;
				}
				if(antiguedad==0 && antiguedad_meses==4)
				{
					catorceavo_proporcional= (salario_mensual * 4) / 12;
					aguinaldo_proporcional= (salario_mensual * 4) / 12;
				}
				if(antiguedad==0 && antiguedad_meses==5)
				{
					catorceavo_proporcional= (salario_mensual * 5) / 12;
					aguinaldo_proporcional= (salario_mensual * 5) / 12;
				}
				if(antiguedad==0 && antiguedad_meses==6)
				{
					catorceavo_proporcional= (salario_mensual * 6) / 12;
					aguinaldo_proporcional= (salario_mensual * 6) / 12;
				}
				if(antiguedad >0 && antiguedad_meses==1)
				{
					catorceavo_proporcional= (salario_mensual * 7) / 12;
					aguinaldo_proporcional= (salario_mensual * 1) / 12;
				}
				if(antiguedad >0 && antiguedad_meses==2)
				{
					catorceavo_proporcional= (salario_mensual * 8) / 12;
					aguinaldo_proporcional= (salario_mensual * 2) / 12;
				}
				if(antiguedad >0 && antiguedad_meses==3)
				{
					catorceavo_proporcional= (salario_mensual * 9) / 12;
					aguinaldo_proporcional= (salario_mensual * 3) / 12;
				}
				if(antiguedad >0 && antiguedad_meses==4)
				{
					catorceavo_proporcional= (salario_mensual * 10) / 12;
					aguinaldo_proporcional= (salario_mensual * 4) / 12;
				}
				if(antiguedad >0 && antiguedad_meses==5)
				{
					catorceavo_proporcional= (salario_mensual * 11) / 12;
					aguinaldo_proporcional= (salario_mensual * 5) / 12;
				}
				if(antiguedad >0 && antiguedad_meses==6)
				{
					aguinaldo_proporcional= (salario_mensual * 6) / 12;
				}
				if(antiguedad >0 && antiguedad_meses==7)
				{
					aguinaldo_proporcional= (salario_mensual * 7) / 12;
					catorceavo_proporcional= (salario_mensual * 1) / 12;
				}
				if(antiguedad >0 && antiguedad_meses==8)
				{
					aguinaldo_proporcional= (salario_mensual * 8) / 12;
					catorceavo_proporcional= (salario_mensual * 2) / 12;
				}
				if(antiguedad >0 && antiguedad_meses==9)
				{
					aguinaldo_proporcional= (salario_mensual * 9) / 12;
					catorceavo_proporcional= (salario_mensual * 3) / 12;
				}
				if(antiguedad >0 && antiguedad_meses==10)
				{
					aguinaldo_proporcional= (salario_mensual * 10) / 12;
					catorceavo_proporcional= (salario_mensual * 4) / 12;
				}
				if(antiguedad >0 && antiguedad_meses==11)
				{
					aguinaldo_proporcional= (salario_mensual * 11) / 12;
					catorceavo_proporcional= (salario_mensual * 5) / 12;
				}
				if(antiguedad >0 && antiguedad_meses==12)
				{
					catorceavo_proporcional= (salario_mensual * 6) / 12;
				}
			
					
					vacaciones= vacaciones_dias * salario_diario;				
					total_prestaciones= (cesantia + auxilio_cesantia) + (preaviso + aguinaldo_proporcional + catorceavo_proporcional) + vacaciones;
					
					// Muestra de los resultados //
					cout<<"\nSus años de trabajo son: "<<antiguedad<<endl;
					cout<<"\n\nSu Cesantia es: "<<cesantia<<"     Su Auxilio de Cesantia es: "<<auxilio_cesantia<<endl;
					cout<<"\n\nSu Preaviso es: "<<preaviso<<"     Su Aguinaldo proporcional es: "<<aguinaldo_proporcional<<endl;
					cout<<"\n\nSu Catorceavo Proporcional es: "<<catorceavo_proporcional<<"       sus vacaciones son: "<<vacaciones<<endl;
					cout<<"\n\nEl total de Prestaciones es: "<<total_prestaciones<<endl;
					cout<<"____________________________________"<<endl;
					cout<<"La ley del marco social establece que si el empleado renuncia tiene derecho"<<endl;
					cout<<"Ala mitad de su cesantia, debe revisar su estado de cuenta en el Rap "<<endl;
					system("pause");
		
	}
				
	
