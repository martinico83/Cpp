#include <iostream>
using namespace std;

main(){
	
	//Declaro las variables
	int parcialUno,parcialDos,parcialTres;

	//Solicito el primer valor
	cout<<"Ingrese la primer calificacion parcial: ";
	cin>>parcialUno;
	
	//Solicito el segundo valor
	cout<<"Ingrese la segunda calificacion parcial: ";
	cin>>parcialDos;
	
	//Solicito el tercer valor
	cout<<"Ingrese la tercera calificacion parcial: ";
	cin>>parcialTres;
	
	//Declaro las variables
	int sumaParciales,promedioParciales,porcentajeParciales;	
	sumaParciales = parcialUno + parcialDos + parcialTres;	
	promedioParciales = sumaParciales / 3;	
	porcentajeParciales = promedioParciales * 0.55;	
	
	//Declaro variables
	int examenFinal,porcentajeExamenFinal;	
	cout<<"Ingrese la nota del examen final: ";
	cin>>examenFinal;	
	porcentajeExamenFinal = examenFinal * 0.3;
	
	
	//Declaro variables
	int trabajoFinal,porcentajeTrabajoFinal,calificacionFinal;	
	cout<<"Ingrese la nota del trabajo final: ";
	cin>>trabajoFinal;	
	porcentajeTrabajoFinal = trabajoFinal * 0.15;
	calificacionFinal = porcentajeParciales + porcentajeExamenFinal + porcentajeTrabajoFinal;
	
	//Muestro por pantalla los resultados
	cout<<"La calificacion final para la materio Algoritmos es: "<<calificacionFinal;

}

