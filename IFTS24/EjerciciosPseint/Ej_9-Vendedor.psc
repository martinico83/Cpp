Algoritmo sin_titulo
	Escribir "Ingrese el monto de la compra: "	
	Leer montoVenta
	Escribir "Ingrese codigo del vendedor: "
	Leer codigoVendedor
	si codigoVendedor < 100 Entonces
		comision =  montoVenta * 0.3 
	SiNo
		si codigoVendedor >= 100 y codigoVendedor <= 200 Entonces
			comision = montoVenta * 0.2 
		SiNo
			comision = montoVenta * 0.1 
		FinSi
	FinSi
	Escribir "El monto de la compra fue: ", montoVenta
	Escribir "El codigo del vendedor es: ", codigoVendedor
	Escribir "La comision es de: ", comision
FinAlgoritmo
