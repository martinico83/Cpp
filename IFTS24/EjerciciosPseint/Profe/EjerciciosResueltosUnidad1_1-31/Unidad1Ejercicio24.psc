Algoritmo Unidad1Ejercicio24
	I = 1
	TotalSueldos = 0
	SueldoMenor = 0
	SueldoMayor = 0
	Escribir "Ingrese la cantidad de empleados:"
	Leer CantidadEmpleados
	Mientras I <= CantidadEmpleados Hacer
		Escribir "Ingrese el sueldo del empleado:"
		Leer Sueldo
		Si Sueldo >= 100 && Sueldo <= 200 Entonces
			SueldoMenor = SueldoMenor + 1
		SiNo
			Si Sueldo > 300 Entonces
				SueldoMayor = SueldoMayor + 1
			FinSi
		FinSi
		TotalSueldos = TotalSueldos + Sueldo
		I = I + 1
	FinMientras
	Escribir "Cantidad de empleados con sueldo entre 100 y 200: ",SueldoMenor," - Cantidad de empleados con sueldo mayor a 300: ",SueldoMayor," - Total Sueldos: ",TotalSueldos
FinAlgoritmo
