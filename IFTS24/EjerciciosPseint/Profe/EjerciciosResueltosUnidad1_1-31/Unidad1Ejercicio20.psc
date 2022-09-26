Algoritmo Unidad1Ejercicio20
	I = 0
	C = 0
	SumaTotal = 0
	Mientras C < 20 Hacer
		Si I MOD 2 <> 0 Entonces
			SumaTotal = SumaTotal + I
			C = C + 1
		FinSi
		I = I + 1
	FinMientras
	Escribir "La suma de los primeros 20 numeros impares es: ",SumaTotal
FinAlgoritmo
