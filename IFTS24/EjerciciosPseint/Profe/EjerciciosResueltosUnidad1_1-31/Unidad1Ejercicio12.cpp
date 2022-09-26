#include <iostream>
using namespace std;

main(){
	
	//Declaro las variables
	int dia;	
	
	//Solicito por pantalla que ingrese el dia de la semana en numero
	cout<<"Ingrese el dia de la semana en numero: ";
	cin>>dia;
	
	switch (dia) {
		case > 7:
			cout<<"Dia Mayor a 7";
			break;
		case 2:
			cout<<"Dia Martes";	
			break;
		case 3:
			cout<<"Dia Miercoles";
			break;
		case 4:
			cout<<"Dia Jueves";
			break;
		case 5:
			cout<<"Dia Viernes";
			break;
		case 6:
			cout<<"Dia Sabado";
			break;
		case 7:
			cout<<"Dia Domingo";			
			break;
		default:
			cout<<"Dia invalido";			
			break;		
	}
	
	//asdsdasd	
}
