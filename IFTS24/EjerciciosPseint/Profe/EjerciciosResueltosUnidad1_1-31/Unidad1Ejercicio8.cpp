#include <iostream>
using namespace std;

main(){
	
	//Declaro las variables
	int descuento = 0;
	float importe;
	float importeTotal;
	
	//Solicito por pantalla que ingresen el importe de la compra
	cout<<"Ingrese el importe: ";
	cin>>importe;	
	
	//Pregunto si el importe es mayor a mil
	if (importe > 1000) {
		descuento = importe * 0.20;	
	}
	
	
	//Calculo el importe total
	importeTotal = importe - descuento;
	
	//Muestro por pantalla el resultado
	cout<<"El importe total es: "<<importeTotal;	

}
