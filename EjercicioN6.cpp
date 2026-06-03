//desarrollar un programa en C++ que permita capturar 3 numeros enteros positivos y que determine e imprima si los numeros fueron capturados en orden creciente o no.
#include <iostream>
using namespace std;
int main(){
	
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int selec = 0;
	
	do{
		cout<<"Ingrese 3 numeros enteros positivos"<<endl;
		cout<<"N1: ";
		cin>>n1;
		cout<<"N2: ";
		cin>>n2;
		cout<<"N3: ";
		cin>>n3;
		
		if(n1>n2 && n2>n3){
			cout<<"Los valores fueron tomados en orden decreciente."<<endl;
		}
		
		else if(n3>n2 && n2>n1){
			cout<<"Los valores fueron tomados en orden creciente"<<endl;
		}
		
				
		cout<<"Desea ingresar otro numero?"<<endl;
		cout<<"Si (1)"<<endl;
		cout<<"No (2)"<<endl;
		cin>>selec;		
	}
	while(selec !=2);
	return 0;
}
