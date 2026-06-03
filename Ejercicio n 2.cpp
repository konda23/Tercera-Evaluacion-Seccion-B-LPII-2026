////Desarrollar un programa en C que permita captura 4 numeros de teclado y que determine e imprima el mayor y el menor de ellos

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int NumeroMayor=0;
	int NumeroMenor=0;
	int opc=0;
	int numero=0;
	
	
	do{
		system("cls");	
		
		for(int i=1 ; i<=4 ; i++){
		cout<<"Ingrese  numeros"<<endl;
		cin>>numero;
		
		if(i==1){
			NumeroMenor=numero;
			NumeroMayor=numero;
		}

		if(numero>NumeroMayor){
			NumeroMayor=numero;
		}
		
		if(numero<NumeroMenor){
			NumeroMenor=numero;
		}
		
		
	}
	cout<<"Numero Menor es: "<<NumeroMenor<<endl;
	cout<<"Numero Mayor es: "<<NumeroMayor<<endl;
	int NumeroMayor=0;
	int NumeroMenor=0;
	
	cout<<"Repetir proceso "<<endl;
	cout<<"1..Si "<<endl;
	cout<<"2..No "<<endl;
	cin>>opc;
		
	}while(opc==1);
	
	
	return 0;
}
