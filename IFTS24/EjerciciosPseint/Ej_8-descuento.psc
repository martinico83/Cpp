Algoritmo sin_titulo
	Escribir "Ingrese el importe de la compra: "  
	leer compra
	si compra > 1000 Entonces
		compra = compra - ( (compra * 20) / 100 )
		Escribir "La compra con descuento es ", compra
	SiNo
		Escribir "No supera el monto requerido para el descuento"
	FinSi		
FinAlgoritmo
