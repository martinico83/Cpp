#include <iostream>
using namespace std;

main(){
	
	//Declaro variables
	int i = 1;
	int sumaTotal = 0;
	int numero;
		
	//Recorro con un ciclo hasta 10
	while (i <= 10) {
		
		cout<<"Ingrese el valor "<<i<<":";
		cin>>numero;
		
		sumaTotal = sumaTotal + numero;

		i++;
	}
	
 	cout<<"La suma total de los numeros ingresados es: "<<sumaTotal;
	
	
}
