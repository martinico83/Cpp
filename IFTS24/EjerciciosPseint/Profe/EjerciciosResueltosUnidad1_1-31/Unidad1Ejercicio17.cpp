#include <iostream>
using namespace std;

main(){
	
	//Declaro variables
	int i = 1;
	int sumaAltura = 0;
	int cantidadPersonas,altura;
	float promedio;
		
	
	//Pido por pantalla la cantidad de numeros a ingresar
	cout<<"Ingrese la cantidad de personas:";
	cin>>cantidadPersonas;
	
	//Recorro con un ciclo hasta la cantidad definida en la variable cantidadPersonas
	while (i <= cantidadPersonas) {
		
		cout<<"Ingrese la altura:";
		cin>>altura;
		
		sumaAltura = sumaAltura + altura;

		i++;
	}
	
	promedio = sumaAltura / cantidadPersonas;
	
	cout<<"El promedio de altura de las personas ingresadas es: "<<promedio;
	
	
}
