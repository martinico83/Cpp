#include <iostream>
using namespace std;

main(){
	
	//Declaro las variables
	int cantidadPersonas;		
	float valorPelicula;
	
	//Solicito por pantalla que ingrese la cantidad de personas
	cout<<"Ingrese la cantidad de personas: ";
	cin>>cantidadPersonas;
	

	//Depende de la cantidad de personas ingresadas calculo el valor de la pelicula
	if (cantidadPersonas < 8){
		valorPelicula = cantidadPersonas * 1.5;
	} else {
		valorPelicula = cantidadPersonas * 0.5;
	}

	//Muestro el resultado por pantalla
	cout<<"El valor de la pelicula es: "<<valorPelicula;
	
}
