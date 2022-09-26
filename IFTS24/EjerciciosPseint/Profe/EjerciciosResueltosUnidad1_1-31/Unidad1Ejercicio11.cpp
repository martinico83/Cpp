#include <iostream>
using namespace std;

main(){
	
	//Declaro las variables
	float numero;
	float resto;
	
	//Pido por pantalla que ingresen un numero
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	//Calculo el resto del numero ingresado
	resto = numero % 2;
	
	//Pregunto si el resto es igual a cero
	if (resto == 0){
		cout<<"El numero ingresado es PAR";		
	} else {
		cout<<"El numero ingresado es IMPAR";
	}

}
