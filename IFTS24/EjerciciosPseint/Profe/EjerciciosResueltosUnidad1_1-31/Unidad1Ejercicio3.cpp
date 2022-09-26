#include <iostream>
using namespace std;

main(){
	
	//Declaro las variables
	int primerNumero;
	int segundoNumero;
	int resultado;
	
	//Solicito por pantalla que ingresen el primer numero
	cout<<"Ingrese el primer numero: ";
	cin>>primerNumero;
	
	//Solicito por pantalla que ingresen el segundo numero
	cout<<"Ingrese el segundo numero: ";
	cin>>segundoNumero;
	
	//Calculo la suma de los dos numeros ingresados
	resultado = primerNumero + segundoNumero;
	
	//Muestro por pantalla el resultado
	cout<<"La suma del primer numero ingresado y el segundo es: "<<resultado;	

}
