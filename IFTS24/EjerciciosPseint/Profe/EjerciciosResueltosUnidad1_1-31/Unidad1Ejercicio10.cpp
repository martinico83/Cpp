#include <iostream>
using namespace std;

main(){
	
	//Declaro las variables
	int primerValor, segundoValor;		
	
	//Solicito por pantalla que ingrese el primer valor
	cout<<"Ingrese el primer valor: ";
	cin>>primerValor;
	
	//Solicito por pantalla que ingrese el segundo valor
	cout<<"Ingrese el segundo valor: ";
	cin>>segundoValor;
	
	//Pregunto cual de los dos numeros ingresados es el mayor
	if (primerValor == segundoValor) {
		cout<<"Los valores ingresados son iguales";
	} else {
		if (primerValor > segundoValor){
			cout<<"El primer valor es el mayor "<<primerValor;
		} else {
			cout<<"El segundo valor es el mayor "<<segundoValor;
		}			
	}

}
