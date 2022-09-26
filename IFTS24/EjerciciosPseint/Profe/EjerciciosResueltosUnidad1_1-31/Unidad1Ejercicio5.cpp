#include <iostream>
using namespace std;

main(){
	
	int A,B,C,Suma,Promedio,Producto;
	
	cout<<"Ingrese el primer valor: ";
	cin>>A;
	
	cout<<"Ingrese el segundo valor: ";
	cin>>B;
	
	cout<<"Ingrese el tercer valor: ";
	cin>>C;
	
	Suma = A + B + C;
	
	Producto = A * B * C;
	
	Promedio = Suma / 3;
	
	cout<<"La suma es: "<<Suma;
	
	cout<<"El producto es: "<<Producto;
	
	cout<<"El promedio es: "<<Promedio;
	
}

