//Dados 3 numeros que representan los lados de un triangunlo, determine que tipo de triangulo es.
#include <iostream>
using namespace std;
int main(){
	
	int a = 0;
	int b = 0;
	int c = 0;
	int selec = 0;
	
	do{
		int a = 0;
		int b = 0;
		int c = 0;
		cout<<"Indique el valor de cada lado del triangulo"<<endl;
		cout<<"A:";
		cin>>a;
		cout<<"B:";
		cin>>b;
		cout<<"C:";
		cin>>c;
		
		if(a==b && a==c && b==c){
			cout<<"Ha ingresado un triangulo Equilatero"<<endl;
		}
		
		else if (a==b && a!=c || a==c && b!=a || b==c && c!=a){
			cout<<"Ha ingresado un triangulo Isoceles"<<endl;
		}
		
		else if(a!=b && b!=c && c!=a){
			cout<<"Ha ingresado un triangulo escaleno"<<endl;
		}
				
		cout<<"Desea ingresar otro numero?"<<endl;
		cout<<"Si (1)"<<endl;
		cout<<"No (2)"<<endl;
		cin>>selec;		
	}
	while(selec !=2);
	return 0;
}
