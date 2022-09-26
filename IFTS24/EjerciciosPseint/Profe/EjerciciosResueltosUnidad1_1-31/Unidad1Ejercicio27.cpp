#include <iostream>
using namespace std;

main(){
	
	//Declaro variables
	int i = 1;
	int numeroMenor = 0;
	int numeroMayor = 0;
	int numeroSuma = 0;
	float numeroPromedio = 0;
	int cantidadNumeros,valorIngresado;		
	
	//Pido por pantalla la cantidad de numeros a ingresar
	cout<<"Ingrese la cantidad de numeros a ingresar:";
	cin>>cantidadNumeros;
	
	//Recorro con un ciclo hasta la cantidad definida en la variable cantidadNumeros
	for(i=1;i<=cantidadNumeros;i++){
		
		cout<<"Ingrese un valor:";
		cin>>valorIngresado;
		
		if(i == 1){
			numeroMenor = valorIngresado;
			numeroMayor = valorIngresado;						
		}else{
			if(valorIngresado < numeroMenor){
				numeroMenor = valorIngresado;
			}			
			if(valorIngresado > numeroMayor){
				numeroMayor = valorIngresado;
			}			
		}
				
		numeroSuma = numeroSuma + valorIngresado;
		
	}
	
	numeroPromedio = numeroSuma / cantidadNumeros;
	
	cout<<"Mas grande: "<<numeroMayor<<endl;
	cout<<"Mas pequeño: "<<numeroMenor<<endl;
	cout<<"Promedio: "<<numeroPromedio<<endl;
	
	
}
