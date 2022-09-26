Algoritmo Unidad1Ejercicio8
	Descuento = 0
	Escribir "Ingrese el importe:"
	Leer Importe
	Si Importe > 1000 Entonces
		Descuento = Importe * 0.20
	FinSi
	ImporteTotal = Importe - Descuento
	Escribir "El importe total es: ",ImporteTotal
FinAlgoritmo
