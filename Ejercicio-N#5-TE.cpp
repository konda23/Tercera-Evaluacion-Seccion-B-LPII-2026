//Realice un programa que permita calcular las raices de una ecuacion cuadratica, valide cada caso posible, pero no el tipo de dato(una raiz, dos raices, sin raices).
//emplee sentencia de escape para la salida

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a=0;
	int b=0;
	int c=0;
	int opc=0;
	int raizpositiva=0;
	int raiznegativa=0;
	float resultadopositivo=0;
	float resultadonegativo=0;
	
	
	do{
		cout<<"Ingrese variable A"<<endl;
		cin>>a;
		cout<<"Ingrese variable B"<<endl;
		cin>>b;
		cout<<"Ingrese variable C"<<endl;
		cin>>c;
		
	raizpositiva=(-b+sqrt(b*b-(4*a*c)));
	raiznegativa=(-b-sqrt(b*b-(4*a*c)));	
	resultadopositivo= raizpositiva/(2*a); 	
	resultadonegativo= raiznegativa/(2*a);
	
	cout<<"Resultado de raiz positiva: "<<resultadopositivo<<endl;
	cout<<"Resultado de raiz negativo: "<<resultadonegativo<<endl;
	
	cout<<"Quiere Repetir el Programa?"<<endl;
	cout<<"1...Si"<<endl;
	cout<<"2...No"<<endl;
	cin>>opc;	
			
	}while(opc==1);

return 0;	
}
	
	

