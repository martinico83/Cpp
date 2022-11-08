#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#define ALUMNOS 2
//#define LEGAJOS 2

using namespace std;

int legajos[ALUMNOS];
int notas[ALUMNOS];
int aprobados=0;
int desaprobados=0;
int promocionados=0;

void mostrarEstadoCurso (void);

int main() {
    char seguir;
    int opcion = 0;
    do {
        cout << "1) El listado de todas las matriculas de los alumnos y la nota de "
                "cada uno.\n";
        cout << "2) El estado general del curso.\n";
        cout << "3) Permitir al usuario consultar cuantos alumnos obtuvieron una "
                "nota ingresada por teclado.\n";
        cout << "\ningrsese una opcion: ";
        cin >> opcion;
        cout << endl;
        switch (opcion) {
        case 1:
            desaprobados=0;
            aprobados=0;
            promocionados=0;
            srand(time(NULL));
            for(int i=0; i<ALUMNOS; i++){
                notas[i]=1+rand()%10;
                legajos[i]=i+1;
            }
            for(int i=0;i<ALUMNOS;i++){
                cout<<"Legajo: "<<legajos[i]<<"--"<<"Nota: "<<notas[i]<<endl;
            }
            break;
        case 2:
            mostrarEstadoCurso();
            break;
        case 3:

            break;
        }

        cout << "\nDesea seguir (S/N): ";
        cin >> seguir;
        while ((seguir != 's') && (seguir != 'n')) {
            cout << "\nDEBE INGRESAR (S/N)!!" << endl;
            cout << "\nDesea seguir (S/N): ";
            cin >> seguir;
        }

    } while (seguir == 's');
}

void mostrarEstadoCurso (void){
    for(int i=0;i<ALUMNOS;i++){
        if(notas[i]<4){
            desaprobados++;
        }else{
            if(notas[i]>=4&&notas[i]<=6){
                aprobados++;
            }else{
                promocionados++;
            }
        }
    }
    cout<<"\nAprobados: "<<aprobados<<endl;
    cout<<"Desaprobados: "<<desaprobados<<endl;
    cout<<"Promocionados: "<<promocionados<<endl;
}





















