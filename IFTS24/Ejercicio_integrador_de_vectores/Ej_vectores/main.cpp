/*
Una institución educativa cuenta con la nota final de  10 alumnos de un curso.   Para cada alumno se ingresan por teclado el número de alumno (1-10) y la nota.
Se pide que escriba un programa que
        1. Informe el promedio de notas de todos los alumnos.
        2. Muestre el número de alumno que obtuvo la mayor nota.
        3. Ingrese un numero de legajo y el sistema informe su nota
 */

#include <iostream>
#define LEGAJOYNOTAS 10

using namespace std;

int main() {
    char seguir = 's';
    int opcion;
    int numLegajo = 0;
    int bandera = 1;
    float sumaNotas = 0;
    float promedio = 0;
    float mayorNota = 0;
    int legajo[LEGAJOYNOTAS];
    float nota[LEGAJOYNOTAS];

    do {
        cout << "\n--------------------------MENU-------------------";
        cout << "\n1-Ingrese la el legajo y nota de 10 alumnos.\n";
        cout << "2-Promedio de notas de todos los alumnos.\n";
        cout << "3-Legajo de alumno que obtuvo la mayor nota.\n";
        cout << "4-Ingrese legajo para saber nota.\n";
        cout << "5-Salir.\n";
        cout << "\nIngrese una opcion: "; cin >> opcion; cout << endl;
        switch(opcion){
        case 1:
            for(int i = 0; i < LEGAJOYNOTAS; i++){
                cout << "Ingrese el legajo del alumno: "; cin >> legajo[i]; cout << endl;
                cout << "Ingrese la nota del alumno: "; cin >> nota[i]; cout << endl;
            }
            break;
        case 2:
            for(int i = 0; i < LEGAJOYNOTAS; i++){
                sumaNotas = sumaNotas + nota[i];
            }
            promedio = sumaNotas / 3;
            cout << "El promedio de notas es: " << promedio << endl;
            break;
        case 3:
            for(int i = 0; i < LEGAJOYNOTAS; i++){
                if(bandera == 1){
                    mayorNota = nota[i];
                    bandera = 0;
                } else{
                    if(nota[i] >= mayorNota){
                        mayorNota = nota[i];
                    }
                }
            }
            for(int i = 0; i < LEGAJOYNOTAS; i++){
                if(nota[i] == mayorNota){
                    cout << "El legajo de mayor nota es: " << legajo[i] << endl;
                }
            }
            break;
        case 4:
            cout << "Ingrese el legajo para saber la nota: "; cin >> numLegajo; cout << endl;
            for(int i = 0; i < LEGAJOYNOTAS; i++){
                if(numLegajo == legajo[i]){
                    cout << "La nota es: " << nota[i];
                }
            }
            break;
        case 5:
            seguir = 'n';
            break;
        }

    } while (seguir == 's');

    return 0;
}
