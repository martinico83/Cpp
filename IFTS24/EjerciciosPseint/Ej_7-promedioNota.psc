Algoritmo NotaPromdio
	Escribir "Ingrese nota parcial 1: "
	Leer notaP1
	Escribir "Ingrese nota parcial 2: "
	Leer notaP2
	Escribir "Ingrese nota parcial 3: "
	Leer notaP3
	Escribir "Ingrese nota examen final: "
	Leer notaExamenFinal
	Escribir "Ingrese nota trabajo final: "
	Leer notaTrabajoFinal
	parteParciales = ( ( ( notaP1 + notaP2 + notaP3 ) /3 ) * 55 ) / 100
	parteExamenFinal = (notaExamenFinal * 30 ) /100
	parteTrabajoFinal = ( notaTrabajoFinal * 15 ) / 100
	totalNota = parteParciales + parteExamenFinal + parteTrabajoFinal
	Escribir "La nota final es: ", totalNota
FinAlgoritmo

