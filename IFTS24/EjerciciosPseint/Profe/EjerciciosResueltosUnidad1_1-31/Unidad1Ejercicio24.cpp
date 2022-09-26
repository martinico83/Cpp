#include <iostream>
using namespace std;

main(){
	
	//Declaro variables
	int i = 1;
	int totalSueldos = 0;
	int sueldoMenor = 0;
	int sueldoMayor = 0;
	int cantidadEmpleados,sueldo;		
	
	//Pido por pantalla la cantidad de empleados a ingresar
	cout<<"Ingrese la cantidad de empleados:";
	cin>>cantidadEmpleados;
	
	//Recorro con un ciclo hasta la cantidad definida en la variable cantidadPersonas
	while (i <= cantidadEmpleados) {
		
		cout<<"Ingrese el sueldo del empleado:";
		cin>>sueldo;
		
		if(sueldo >= 100 && sueldo <= 200){
			sueldoMenor++;
		}else{
			if(sueldo > 300){
				sueldoMayor++;
			}
		}
		
		totalSueldos = totalSueldos + sueldo;	

		i++;
	}
	
	cout<<"Cantidad de empleados con sueldo entre 100 y 200: "<<sueldoMenor<<endl;
	cout<<"Cantidad de empleados con sueldo mayor a 300: "<<sueldoMayor<<endl;
	cout<<"Total Sueldos: "<<totalSueldos<<endl;
	
	
}
