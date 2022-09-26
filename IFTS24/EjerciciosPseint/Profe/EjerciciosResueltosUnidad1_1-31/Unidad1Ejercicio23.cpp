#include <iostream>
using namespace std;

main(){
	
	//Declaro variables
	int i = 1;
	int nota;
	int notasMayores = 0;
	int notasMenores = 0;

	//Recorro con un ciclo hasta 10
	while (i <= 10) {
		
		cout<<"Ingrese la nota de un alumno:";
		cin>>nota;
		
		if(nota >= 7){
			notasMayores++;			
		}else{
			notasMenores++;
		}	

		i++;
	}
	
	cout<<"La cantidad de notas mayor o igual a 7 son: "<<notasMayores<<" y la cantidad de notas menores a 7 son: "<<notasMenores;
	
	
}
