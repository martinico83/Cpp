Algoritmo Unidad1Ejercicio28
	
	cantidadMayoresCero = 0	
	sumaMayoresCero = 0
	promedioMayoresCero = 0
	
	Hacer
		
		Escribir 'Ingrese un valor, (0 para salir): '
		Leer valorIngresado
		
		si valorIngresado > 0 Entonces
			cantidadMayorCero = cantidadMayorCero + 1 
			sumaMayoresCero = sumaMayoresCero + valorIngresado
		FinSi		
		
	Hasta Que valorIngresado = 0
	
	promedioMayoresCero = sumaMayoresCero / cantidadMayorCero
	
	Escribir "Promedio de los numeros ingresados mayores a cero: ",promedioMayoresCero
	
	
	
FinAlgoritmo
