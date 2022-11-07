#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#define ALUMNOS 2
#define LEGAJOS 2

using namespace std;

int main() {
  char seguir;
  int nota = 0;
  int opcion = 0;
  char legajos[LEGAJOS];
  char alumnos[ALUMNOS];

  do {
    cout << "1) El listado de todas las matrículas de los alumnos y la nota de "
            "cada uno.\n";
    cout << "2) El estado general del curso.\n";
    cout << "3) Permitir al usuario consultar cuantos alumnos obtuvieron una "
            "nota ingresada por teclado.\n";
    cout << "ingrsese una opcion: ";
    cin >> opcion;
    cout << endl;
    switch (opcion) {
    case 1:

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
