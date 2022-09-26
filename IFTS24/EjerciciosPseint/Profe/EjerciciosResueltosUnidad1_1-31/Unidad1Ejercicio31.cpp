#include <iostream>
using namespace std;

main(){
	
	//Declaro variables
	int cantidadHastaOchentaKilos = 0;
	int cantidadMayorOchentaKilos = 0;
	int valorIngresado;		

	do{
		
		cout<<"Ingrese el peso del empleado (-1 para salir): ";
		cin>>valorIngresado;
		
		if(valorIngresado != -1){
			if(valorIngresado <= 80){
				cantidadHastaOchentaKilos++;
			}else{
				cantidadMayorOchentaKilos++;
			}			
		}
		
	}
	while(valorIngresado != -1);
		
	cout<<"Empleados con peso hasta 80kg: "<<cantidadHastaOchentaKilos<<endl;	
	cout<<"Empleados con mas de 80kg: "<<cantidadMayorOchentaKilos<<endl;
	
}
