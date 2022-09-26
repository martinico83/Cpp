#include <iostream>
using namespace std;

main(){
	
	//Declaro variables
	int i = 1;
	int numeroIngresado,menorNumero;	
	
	//Recorro con un ciclo hasta 6
	while (i <= 6) {
		
		//Pido por pantalla que ingrese un numero
		cout<<"Ingrese un numero:";
		cin>>numeroIngresado;
		
		if(i == 1){
			menorNumero = numeroIngresado;	
		}else{
			if(numeroIngresado <= menorNumero){
				menorNumero = numeroIngresado;
			}
		}
		
		i++;
	}
		
	cout<<"El menor numero ingresado es: "<<menorNumero;
	
	
}
