#include <iostream>
using namespace std;

main(){
	
	//Declaro variables
	int cantidadMayoresCero = 0;
	int sumaMayoresCero = 0;
	float promedioMayoresCero = 0;	
	int valorIngresado;	
	
	do{
		
		cout<<"Ingrese un valor, (0 para salir):";
		cin>>valorIngresado;
		
		if(valorIngresado > 0){
			cantidadMayoresCero++;
			sumaMayoresCero = sumaMayoresCero + valorIngresado;
		}
		
	}
	while(valorIngresado != 0);
	
	promedioMayoresCero = sumaMayoresCero / cantidadMayoresCero;	
	
	cout<<"Promedio de los numeros ingresados mayores a cero: "<<promedioMayoresCero<<endl;

	
}
