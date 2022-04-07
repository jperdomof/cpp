/*
  Proposito del programa: Ciclo Do while

*/

#include <iostream>

using namespace std;

int main()
{

	int a= 2;
	int b= 10;
	
	while(a > b)
	{
		cout<<"a > b"<<endl;
		break;
	} 
	
	do{
		cout<<" a > b"<<endl;
		break;
		
	}while(a > b);


 return 0;
}


