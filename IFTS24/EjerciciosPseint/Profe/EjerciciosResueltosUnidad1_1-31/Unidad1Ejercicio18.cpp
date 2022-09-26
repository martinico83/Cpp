#include <iostream>
using namespace std;

main(){
	
	//Declaro variables
	int i = 1;
	int resultado;
		
	//Recorro con un ciclo hasta 500
	while (i <= 500) {		
		
		resultado = i % 8;
		
		if (resultado == 0){			
			cout<<i<<endl;
		}

		i++;
	}

	
}
