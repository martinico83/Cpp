Algoritmo Unidad1Ejercicio27

	numeroMenor <- 0
	numeroMayor <- 0
	numeroSuma <- 0
	numeroPromedio <- 0
	
	Escribir 'Ingrese la cantidad de numero a ingresar: '
	Leer cantidadNumeros	
	Para i<-1 Hasta cantidadNumeros Hacer
		Escribir 'Ingrese un valor: '
		Leer valorIngresado		
		
		Si i = 1 Entonces
			numeroMenor = valorIngresado				
			numeroMayor = valorIngresado
		SiNo
			Si valorIngresado < numeroMenor Entonces
				numeroMenor <- valorIngresado
			FinSi
			Si valorIngresado>numeroMayor Entonces
				numeroMayor <- valorIngresado
			FinSi			
		FinSi
		
		numeroSuma <- numeroSuma+valorIngresado
	FinPara	
	numeroPromedio <- numeroSuma/cantidadNumeros
	Escribir 'Mas grande: ',numeroMayor,' - Mas pequeño: ',numeroMenor,' - Promedio: ',numeroPromedio
FinAlgoritmo
