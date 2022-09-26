Algoritmo Unidad1Ejercicio31
	
	cantidadHastaOchentaKilos = 0
	cantidadMayorOchentaKilos = 0	
	
	Hacer
		
		Escribir 'Ingrese el peso del empleado (-1 para salir): '
		Leer valorIngresado		
		
		si valorIngresado <> -1 Entonces
			si valorIngresado <= 80 Entonces
				cantidadHastaOchentaKilos = cantidadHastaOchentaKilos + 1 
			SiNo
				cantidadMayorOchentaKilos = cantidadMayorOchentaKilos + 1 
			FinSi				
		FinSi	
		
	Hasta Que valorIngresado = -1
	
	Escribir "Empleados con peso hasta 80kg: ",cantidadHastaOchentaKilos," - Empleados con mas de 80kg: ",cantidadMayorOchentaKilos
	
FinAlgoritmo
