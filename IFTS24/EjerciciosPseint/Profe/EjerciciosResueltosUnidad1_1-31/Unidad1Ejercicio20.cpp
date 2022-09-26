#include <iostream>
using namespace std;

main(){
	
	//Declaro variables
	int i = 0;
	int c = 0;
	int sumaTotal = 0;
	int resultado;
	
	//Recorro con un ciclo hasta 20
	while (c < 20) {
		
		resultado = i % 2;
		
		if(resultado != 0){
			sumaTotal = sumaTotal + i;
			c++;		
		}
		
		i++;
	}
	

	cout<<"La suma de los primeros 20 numeros impares es: "<<sumaTotal;
	
	
}
