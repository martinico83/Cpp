#include <iostream>
using namespace std;

main(){
	
	//Declaro variables
	int i,valorInicial,valorFinal;
	
	//Pido por pantalla un valor inicial
	cout<<"Ingrese un valor inicial:";
	cin>>valorInicial;	
		
	//Pido por pantalla un valor final
	cout<<"Ingrese un valor final:";
	cin>>valorFinal;
	
	if(valorFinal >= valorInicial){
		
		i = valorFinal;
		
		while (i >= valorInicial) {			
			cout<<i<<endl;	
			i--;
		}
		
	}else{
		cout<<"El valor final es menor al valor inicial";		
	}

	
}
