Algoritmo Unidad1Ejercicio23
	I = 1
	NotasMayores = 0
	NotasMenores = 0
	Mientras I <= 10 Hacer
		Escribir "Ingrese la nota de un alumno:"
		Leer Nota
		Si Nota >= 7 Entonces
			NotasMayores = NotasMayores + 1
		SiNo
			NotasMenores = NotasMenores + 1
		FinSi
		I = I + 1
	FinMientras
	Escribir "La cantidad de notas mayor o igual a 7 son: ",NotasMayores," y la cantidad de notas menores a 7 son: ",NotasMenores
FinAlgoritmo
