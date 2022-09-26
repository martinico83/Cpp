Algoritmo Unidad1Ejercicio30
	
	cantidadNegativosPares <- 0	
	sumaNegativos = 0
	sumaPositivos = 0

	Para i<-1 Hasta 10 Hacer
		
		Escribir 'Ingrese un valor: '
		Leer valorIngresado
		
		Si valorIngresado < 0 Entonces
			Si valorIngresado MOD 2 = 0 Entonces
				cantidadNegativosPares = cantidadNegativosPares + 1
			FinSi
			sumaNegativos = sumaNegativos + valorIngresado
		SiNo
			sumaPositivos = sumaPositivos + valorIngresado
		FinSi
		
	FinPara
	
	Escribir 'Cantidad numeros negativos pares: ',cantidadNegativosPares,' - Suma total de numeros positivos: ',sumaPositivos,' - Suma total de numeros negativos:',sumaNegativos
	
FinAlgoritmo
