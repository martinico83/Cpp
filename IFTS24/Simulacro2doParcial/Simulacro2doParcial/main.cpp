#include <iostream>

using namespace std;

int main() {
    char seguir;
    int nota=0;

    do {
        cout<<"1) El listado de todas las matrículas de los alumnos y la nota de cada uno.";
        cout<<"2) El estado general del curso.";
        cout<<"3) Permitir al usuario consultar cuantos alumnos obtuvieron una nota ingresada por teclado";

        cout << "\nDesea seguir (S/N): ";
        cin >> seguir;
        while ((seguir != 's') && (seguir != 'n')) {
            cout << "\nDEBE INGRESAR (S/N)!!" << endl;
            cout << "\nDesea seguir (S/N): ";
            cin >> seguir;
        }

    } while (seguir == 's');
}
