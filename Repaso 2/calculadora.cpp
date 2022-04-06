
#include <iostream>
#include "calculadora.h"
#include "misc.h"

int dividir(int a, int b)
{
	if(b ==0)
	{
		cout<<"No se puede dividir entre cero"<<endl;
		return 0;
	}
	
	return a / b;
}

int suma(int a, int b)
{
	return a + b;
}

int restar(int a, int b)
{
	return a - b;
}

int multiplicacion(int a, int b)
{
	return a * b;
}


