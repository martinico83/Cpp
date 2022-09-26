Algoritmo Unidad1Ejercicio22
	I = 1
	MenorNumero = 0
	
	Mientras I <= 6 Hacer
		Escribir "Ingrese un numero:"
		Leer Numero	
		
		Si I = 1 Entonces
			MenorNumero = Numero
		SiNo
			Si Numero <= MenorNumero Entonces				
				MenorNumero = Numero				
			FinSi
		FinSi		

		I = I + 1
	FinMientras
	Escribir "El menor numero ingresado es: ",MenorNumero
FinAlgoritmo
