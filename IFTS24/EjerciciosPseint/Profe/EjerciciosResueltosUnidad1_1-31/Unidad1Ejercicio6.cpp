#include <iostream>
using namespace std;

#define IVA 0.21; //Definimos una constante llamada IVA

main(){
	
	//Declaro las variables
	int importe;
	int resultado;
	
	//Solicito por pantalla que ingresen el importe de la compra
	cout<<"Ingrese el importe de la compra: ";
	cin>>importe;	
	
	//Calculo el resultado
	resultado = importe * IVA;
	
	//Muestro por pantalla el resultado
	cout<<"El IVA del importe ingresado es: "<<resultado;	

}
