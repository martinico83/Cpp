#include <iostream>
using namespace std;

main(){
	
	//Declaro las variables
	int base;
	int altura;
	int superficie;
	
	//Solicito por pantalla que ingresen la base
	cout<<"Ingrese la base: ";
	cin>>base;
	
	//Solicito por pantalla que ingresen la altura
	cout<<"Ingrese la altura: ";
	cin>>altura;
	
	//Calculo la superficie del rectangulo multiplicando la base por la altura
	superficie = base * altura;
	
	//Muestro por pantalla el resultado
	cout<<"Base: "<<base<<" - Altura: "<<altura<<" - Superficie: "<<superficie;	

}
