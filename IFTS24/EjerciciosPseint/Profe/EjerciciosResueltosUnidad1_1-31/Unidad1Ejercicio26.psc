Algoritmo Unidad1Ejercicio26
	
	i = 1
	cantidadPares = 0
	cantidadImpares = 0
	
	Escribir "Ingrese la cantidad de numeros a ingresar:"
	Leer cantidadNumeros
	
	Mientras i <= cantidadNumeros Hacer
		
		Escribir "Ingrese un valor:"
		leer valorIngresado
		
		si valorIngresado MOD 2 = 0 Entonces
			cantidadPares = cantidadPares + 1
		SiNo
			cantidadImpares = cantidadImpares + 1
		FinSi		
		
		i = i + 1
		
	FinMientras
	
	
	Escribir "Cantidad Total: ",cantidadNumeros," - Cantidad pares: ",cantidadPares," - Cantidad impares: ",cantidadImpares	
	
	
FinAlgoritmo
