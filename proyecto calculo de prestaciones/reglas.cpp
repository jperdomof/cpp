#include <iostream>
#include <locale.h>

using namespace std;

void reglas()
{
	system("cls");
		
	setlocale(LC_CTYPE, "spanish");   // activar uso de letra � //
	
	cout<<"       ***** CALCULO DE PRESTACIONES LABORALES *****"<<endl;
	cout<<endl;
	
	cout<<"\n\n   Cesantia contratos permanentes"<<endl;
	cout<<"\n\nSi el empleado es despedido tiene derecho a indeminizacion por el patrono."<<endl;
	cout<<"Esta depende del tiempo de antiguedad, dentro de la empresa."<<endl;
	cout<<"\nDe 3 a 6 meses:   10 dias de salario."<<endl;
	cout<<"\nDe 6 a 1 a�o:     20 dias de salario."<<endl;
	cout<<"\nDe Mas de 1 a�o   1 mes de salario por a�o trabajado + los dias proporcionales."<<endl;
	cout<<"\nSi la persona est� en per�odo de prueba, no tendr� derecho a indemnizaci�n ni preaviso"<<endl;
	cout<<"ni preaviso"<<endl;
	cout<<"______________________________________________________________________"<<endl;
	
	cout<<"\n   Preaviso contratos permanentes"<<endl;
	cout<<"\n Si el empleado es despedido y tiene mas de 1 a�o de antiguedad"<<endl;
	cout<<"tiene derecho a que se le avise que sera despedido, de lo contrario,"<<endl;
	cout<<"la empresa pagara al empleado un preaviso de 2 meses de salario promedio"<<endl;
	cout<<"El salario promedio se calcula multiplicando su salario por 14"<<endl;
	cout<<"y diviendo el resultado entre 12"<<endl;
	system("pause");
	
	
	
	
	
}



	
