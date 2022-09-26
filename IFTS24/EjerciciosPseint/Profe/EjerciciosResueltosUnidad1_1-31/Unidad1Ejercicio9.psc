Algoritmo Unidad1Ejercicio9
	Escribir "Ingrese codigo de vendedor:"
	Leer CodigoVendedor
	Escribir "Ingrese monto vendido:"
	Leer MontoVendido
	Si CodigoVendedor < 100 Entonces
		Comision = MontoVendido * 0.30
	SiNo
		Si CodigoVendedor > 200 Entonces
			Comision = MontoVendido * 0.10
		SiNo
			Comision = MontoVendido * 0.20
		FinSi
	FinSi
	Escribir "Codigo de vendedor: ",CodigoVendedor,", Monto vendido: ",MontoVendido,", Comision: ",Comision
FinAlgoritmo
