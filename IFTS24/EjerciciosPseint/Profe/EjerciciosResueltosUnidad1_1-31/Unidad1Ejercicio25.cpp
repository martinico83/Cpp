#include <iostream>
using namespace std;

main(){
	
	//Declaro variables
	int contadorListaUno = 1;
	int contadorListaDos = 1;
	int sumaListaUno = 0;
	int sumaListaDos = 0;
	int cantidadRegistros = 15;		
	int valorIngresado;

	
	//Recorro con un ciclo hasta la cantidad definida en la variable cantidadRegistros
	while (contadorListaUno <= cantidadRegistros) {
		
		cout<<"Ingrese el valor "<<contadorListaUno<<" de la lista 1:";
		cin>>valorIngresado;	
		
		sumaListaUno = sumaListaUno + valorIngresado;	

		contadorListaUno++;
	}
	
	//Recorro con un ciclo hasta la cantidad definida en la variable cantidadRegistros
	while (contadorListaDos <= cantidadRegistros4
	{
		
		cout<<"Ingrese el valor "<<contadorListaDos<<" de la lista 2:";
		cin>>valorIngresado;	
		
		sumaListaDos = sumaListaDos + valorIngresado;	

		contadorListaDos++;
	}
	
	
	if(sumaListaUno = sumaListaDos){
		cout<<"Listas iguales";		
	}else{
		if(sumaListaUno > sumaListaDos){
			cout<<"Lista 1 mayor";		
		}else{
			cout<<"Lista 2 mayor";		
		}		
	}
	
	
}
