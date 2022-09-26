#include <iostream>
using namespace std;

main(){
	
	//Declaro variables
	int i = 1;
	int t = 100;	
	int resultado;
	
	//Recorro con un ciclo hasta la cantidad definida en la variable t
	while (i <= t) {
		
		resultado = i % 2;
		
		if(resultado != 0){
			cout<<"Impar "<<i<<endl;
		}else{
			cout<<"Par "<<i<<endl;			
		}
		
		i++;
	}
	
}
