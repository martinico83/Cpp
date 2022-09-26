#include <iostream>
using namespace std;

main(){
	
	//Declaro las variables
	int importePesos;
	int valorDolar;
	int resultado;
	
	//Solicito por pantalla que ingresen el importe en pesos
	cout<<"Ingrese un importe en pesos: ";
	cin>>importePesos;
	
	//Solicito por pantalla que ingresen el tipo de cambio dolares
	cout<<"Ingrese el valor del tipo de cambio dolares: ";
	cin>>valorDolar;
	
	//Calculo la superficie del rectangulo multiplicando la base por la altura
	resultado = importePesos * valorDolar;
	
	//Muestro por pantalla el resultado
	cout<<"El valor en dolares del importe ingresado es: "<<resultado;	

}
