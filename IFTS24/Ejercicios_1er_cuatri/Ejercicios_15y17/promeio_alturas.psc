Algoritmo promeio_alturas
	Escribir "cuantas alturas desea ingresar"
	leer alturas
	dato = 0
	contador = 1
	acumulador = 0
	promedio = 0
	Mientras contador <= alturas Hacer
		Escribir "Ingrse altura: "
		Leer dato
		acumulador = acumulador + dato
		contador = contador + 1
	Fin Mientras
	promedio = acumulador / alturas
	Escribir "El promedio de alturas es: ", promedio
FinAlgoritmo
