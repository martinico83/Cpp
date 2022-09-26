Algoritmo Unidad1Ejercicio17
	SumaAltura = 0
	I = 0
	Escribir "Ingrese la cantidad de personas:"
	Leer CantidadPersonas
	Mientras I < CantidadPersonas Hacer
		Escribir "Ingrese la altura:"
		Leer Altura
		SumaAltura = SumaAltura + Altura
		I = I + 1
	FinMientras
	Promedio = SumaAltura / CantidadPersonas
	Escribir "El promedio de altura de las personas ingresadas es: ",Promedio
FinAlgoritmo
