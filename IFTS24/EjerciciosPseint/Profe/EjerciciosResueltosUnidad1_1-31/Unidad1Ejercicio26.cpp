#include <iostream>
using namespace std;

main(){
	
	//Declaro variables
	int i = 1;
	int cantidadPares = 0;
	int cantidadImpares = 0;
	int cantidadNumeros,valorIngresado,resultado;		
	
	//Pido por pantalla la cantidad de valores a ingresar
	cout<<"Ingrese la cantidad de numeros a ingresar:";
	cin>>cantidadNumeros;
	
	//Recorro con un ciclo hasta la cantidad definida en la variable cantidadNumeros
	while (i <= cantidadNumeros) {
		
		cout<<"Ingrese un valor:";
		cin>>valorIngresado;
		
		resultado = valorIngresado % 2;
		
		if(resultado == 0){
			cantidadPares++;
		}else{
			cantidadImpares++;
		}
		
		i++;
	}
	
	cout<<"Cantidad total: "<<cantidadNumeros<<endl;
	cout<<"Cantidad pares: "<<cantidadPares<<endl;
	cout<<"Cantidad impares: "<<cantidadImpares<<endl;
	
	
}
