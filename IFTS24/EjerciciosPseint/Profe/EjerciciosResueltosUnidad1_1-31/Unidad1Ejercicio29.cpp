#include <iostream>
using namespace std;

main(){
	
	//Declaro variables
	int numeroMayor = 0;
	int numeroPosicion = 0;
	int valorIngresado;	
	
	for(int i=1;i<=20;i++){
		
		cout<<"Ingrese un valor:";
		cin>>valorIngresado;
		
		if(i == 1){
			numeroMayor = valorIngresado;
			numeroPosicion = 1;			
		}else{
			if(valorIngresado > numeroMayor){
				numeroMayor = valorIngresado;
				numeroPosicion = i;
			}			
		}		
	}	
	
	cout<<"El mayor de los números ingresados es: "<<numeroMayor<<" y se ingreso en "<<numeroPosicion<<" lugar"<<endl;

	
}
