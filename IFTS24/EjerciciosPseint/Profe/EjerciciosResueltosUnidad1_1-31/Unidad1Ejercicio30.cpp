#include <iostream>
using namespace std;

main(){
	
	//Declaro variables
	int cantidadNegativosPares = 0;
	int sumaNegativos = 0;
	int sumaPositivos = 0;
	int valorIngresado,resultado;		

	for(int i=1;i<=10;i++){
		
		cout<<"Ingrese un valor:";
		cin>>valorIngresado;
		
		if(valorIngresado < 0){
			resultado = valorIngresado % 2;
			if(resultado == 0){
				cantidadNegativosPares++;
			}
			sumaNegativos = sumaNegativos + valorIngresado;	
		}else{
			sumaPositivos = sumaPositivos + valorIngresado;	
		}		
	}
		
	cout<<"Cantidad numeros negativos pares: "<<cantidadNegativosPares<<endl;	
	cout<<"Suma total de numeros positivos: "<<sumaPositivos<<endl;
	cout<<"Suma total de numeros negativos: "<<sumaNegativos<<endl;
	
}

