Algoritmo sin_titulo
	resto = 0
	Escribir "Ingresar desde donde calcular los 20 primeros numeros impares: "
	Leer comienzo
	Para i = comienzo Hasta comienzo + 20 Con Paso 1 Hacer
		resto = i mod 2
		si resto <> 0 Entonces
			Escribir i
		FinSi
	FinPara
FinAlgoritmo
