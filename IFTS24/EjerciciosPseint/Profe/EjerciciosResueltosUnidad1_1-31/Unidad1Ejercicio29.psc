Algoritmo Unidad1Ejercicio29	

	numeroMayor <- 0	
	numeroPosicion <- 0	
	
	Para i<-1 Hasta 20 Hacer	
		
		Escribir 'Ingrese un valor: '
		Leer valorIngresado
		
		Si i = 1 Entonces
			numeroMayor = valorIngresado				
			numeroPosicion <- 1
		SiNo
			Si valorIngresado>numeroMayor Entonces
				numeroMayor <- valorIngresado				
				numeroPosicion = i
			FinSi
		FinSi
		
	FinPara
	
	Escribir 'El mayor de los números ingresados es: ',numeroMayor,' y se ingresó en ',numeroPosicion,' lugar'
	
FinAlgoritmo
