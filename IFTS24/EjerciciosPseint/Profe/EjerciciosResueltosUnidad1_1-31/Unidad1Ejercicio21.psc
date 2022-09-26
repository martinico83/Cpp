Algoritmo Unidad1Ejercicio21
	Escribir "Ingrese un valor inicial:"
	Leer ValorInicial
	Escribir "Ingrese un valor final:"
	Leer ValorFinal
	Si ValorFinal >= ValorInicial Entonces
		I = ValorFinal
		Mientras I >= ValorInicial Hacer
			Escribir I
			I = I - 1
		FinMientras
	SiNo
		Escribir "El valor final es menor al valor inicial"
	FinSi
FinAlgoritmo
