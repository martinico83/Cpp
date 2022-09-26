Algoritmo Unidad1Ejercicio7
	Escribir "Ingrese la primer calificacion parcial:"
	Leer ParcialUno
	Escribir "Ingrese la segunda calificacion parcial:"
	Leer ParcialDos
	Escribir "Ingrese la tercera calificacion parcial:"
	Leer ParcialTres
	SumaParciales = ParcialUno + ParcialDos + ParcialTres
	PromedioParciales = SumaParciales / 3
	PorcentajeParciales = PromedioParciales * 0.55
	Escribir "Ingrese la nota del examen final:"
	Leer ExamenFinal
	PorcentajeExamenFinal = ExamenFinal * 0.3
	Escribir "Ingrese la nota del trabajo final:"
	Leer TrabajoFinal
	PorcentajeTrabajoFinal = TrabajoFinal * 0.15
	CalificacionFinal = PorcentajeParciales + PorcentajeExamenFinal + PorcentajeTrabajoFinal
	Escribir "La calificacion final para la materio Algoritmos es:",CalificacionFinal
FinAlgoritmo
