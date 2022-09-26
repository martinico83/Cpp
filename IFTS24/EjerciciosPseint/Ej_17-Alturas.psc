Algoritmo sin_titulo
	acumulador = 0
	contador = 0
	Escribir "Desea ingresar una altura: "
	Leer respuesta
	si respuesta = "s" Entonces
		Mientras respuesta = "s" Hacer
			Escribir "Ingrese la altura: "
			Leer altura
			acumulador = acumulador + altura
			Escribir "Desea seguir?"
			Leer respuesta
			contador = contador + 1
		FinMientras	
		promedio = acumulador / contador
		Escribir "El promedio de alturas es: ", promedio
		Escribir "Hasta pronto!!"
	SiNo
		si acumulador = 0
			Escribir "Hasta pronto!!"		
		FinSi
	FinSi	
FinAlgoritmo
