#include <iostream>
using namespace std;

main(){
	
	//Declaro las variables
	int importe;
	int descuento;
	int total;
	
	//Solicito por pantalla que ingresen el importe
	cout<<"Ingrese el importe de la compra: ";
	cin>>importe;	

	//Calculo el descuento
	descuento = importe * 0.15;
	
	//Calculo el total
	total = importe - descuento;
	
	//Muestro por pantalla el resultado
	cout<<"Total a pagar es: "<<total;	

}
