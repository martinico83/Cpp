#include <iostream>
using namespace std;

main(){
	
	//Declaro las variables
	int codigoVendedor;
	float montoVendido, comision;	
	
	//Solicito por pantalla que ingrese codigo de vendedor
	cout<<"Ingrese codigo de vendedor: ";
	cin>>codigoVendedor;
	
	//Solicito por pantalla que ingrese el monto vendido
	cout<<"Ingrese monto vendido: ";
	cin>>montoVendido;
	
	//Depende el codigo del vendedor se le calcula la comision indicada
	if (codigoVendedor < 100) {
		comision = montoVendido * 0.30;
	} else {
		if (codigoVendedor > 200){
			comision = montoVendido * 0.10;
		} else {
			comision = montoVendido * 0.20;
		}			
	}
	
	//Muestro por pantalla el resultado
	cout<<"Codigo de vendedor: "<<codigoVendedor<<" - Monto vendido: "<<montoVendido<<" - Comision: "<<comision;
		

}
