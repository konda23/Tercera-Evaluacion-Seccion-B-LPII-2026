//Desarrollar un programa en C++ que permita leer un numero entero positivo de teclado y dependiendo del valor capturado despliegue en pantalla
//el dia de la semana al que le corresponderia dicho numero, es decir si esta en un rango del 1 al 7, el 1 corresponderia al Domingo, el 2
//corresponderia al lunes
#include <iostream>
using namespace std;
int main(){
	
	int dia = 0;
	int selec = 0;
	
	do{
		
	cout<<"Ingrese un numero del 1 al 7: ";
	cin>>dia;
	
	switch(dia){
		case 1:
			
			cout<<"Domingo"<<endl;
			break;
			
		case 2:
			
			cout<<"Lunes"<<endl;
			break;
			
		case 3:
			
			cout<<"Martes"<<endl;
			break;
			
		case 4:
			
			cout<<"Miercoles"<<endl;
			break;
			
		case 5:
			
			cout<<"Jueves"<<endl;
			break;			
			
		case 6:
			
			cout<<"Viernes"<<endl;
			break;			
			
		case 7:
			
			cout<<"Sabado"<<endl;
			break;			
			
		default:
			
			cout<<"Ingreso un numero fuera del rango [1 - 7]"<<endl;
			break;
		}
		
		cout<<"Desea ingresar otro numero?"<<endl;
		cout<<"Si (1)"<<endl;
		cout<<"No (2)"<<endl;
		cin>>selec;
	}
	while(selec !=2);
	return 0;
}
