Algoritmo Unidad1Ejercicio25
	
	contadorListaUno = 1
	contadorListaDos = 1
	sumaListaUno = 0
	sumaListaDos = 0	
	cantidadRegistros = 15
	
	Mientras contadorListaUno <= cantidadRegistros Hacer
		
		Escribir "Ingrese el valor ",contadorListaUno," de la lista 1:"
		Leer valorIngresado
		
		sumaListaUno = sumaListaUno + valorIngresado
		
		contadorListaUno = contadorListaUno + 1	
		
	FinMientras
	
	
	Mientras contadorListaDos <= cantidadRegistros Hacer
		
		Escribir "Ingrese el valor ",contadorListaDos," de la lista 2:"
		Leer valorIngresado
		
		sumaListaDos = sumaListaDos + valorIngresado
		
		contadorListaDos = contadorListaDos + 1	
		
	FinMientras
	
	
	si sumaListaUno = sumaListaDos Entonces
		Escribir "Listas iguales"
	SiNo
		si sumaListaUno > sumaListaDos Entonces
			Escribir "Lista 1 mayor"	
		SiNo
			Escribir "Lista 2 mayor"	
		FinSi
	FinSi
	
	
FinAlgoritmo
