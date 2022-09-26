Algoritmo Unidad1Ejercicio10
	Escribir "Ingrese el primer valor:"
	Leer PrimerValor
	Escribir "Ingrese el segundo valor:"
	Leer SegundoValor
	Si PrimerValor = SegundoValor Entonces
		Escribir "Los valores ingresados son iguales"
	SiNo
		Si PrimerValor > SegundoValor Entonces
			Escribir "El primer valor es el mayor ",PrimerValor
		SiNo
			Escribir "El segundo valor es el mayor ",SegundoValor
		FinSi
	FinSi
FinAlgoritmo
