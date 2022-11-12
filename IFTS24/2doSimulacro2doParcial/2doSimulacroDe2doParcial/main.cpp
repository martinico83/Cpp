#include <iostream>
#define HABITACIONES 12
#define DOBLES 5

using namespace std;

int buscarHabitacion(int);
int listarCuadruples(int);
int estadoHabitacion(int);

int habitaciones[HABITACIONES];

int main() {
  char seguir;
  int opcion = 0;
  int ocupantes = 0;
  int habitacionLibre = 0;
  int buscar = 0;

  for (int i = 0; i < HABITACIONES; i++) {
    habitaciones[i] = 0;
  }

  do {
    cout << "1) Actualizar estado de habitación";
    cout << endl;
    cout << "2) Listar números de habitaciones cuádruples ocupadas";
    cout << endl;
    cout << "3) Permitir al usuario ingresar un número de habitación y mostrar "
            "al estado OCUPADA/LIBRE de acuerdo al estado.";
    cout << endl;
    cout << "4) Salir.";
    cout << endl;
    cout << "\nIngrese una opcion: ";
    cin >> opcion;
    switch (opcion) {
    case 1:
      cout << "\nIngrese la cantidad de huespedes: ";
      cin >> ocupantes;
      cout << endl;
      habitacionLibre = buscarHabitacion(ocupantes);
      if (habitacionLibre == 0) {
        cout << "\nYa no queda lugar!!" << endl;
      }
      if (habitacionLibre == -1) {
        cout << "\nSolo hay habitaciones para 4!!" << endl;
      }
      if (habitacionLibre != 0 && habitacionLibre != -1) {
        cout << "\nLa habitacion libre es la: " << habitacionLibre << endl;
      }
      break;
    case 2:
      cout << "\nHabitaciones disponibles: " << endl;
      for (int i = DOBLES; i < HABITACIONES; i++) {
        if (listarCuadruples(i) != 0) {
          cout << "\n" << listarCuadruples(i) << endl;
        }
      }
      break;
    case 3:
      cout << "\nIngrese el numero de la habitacion: ";
      cin >> buscar;
      cout << endl;
      if (estadoHabitacion(buscar)) {
        cout << "\nOCUPADO!!" << endl;
      } else {
        cout << "\nLIBRE!!" << endl;
      }
      break;
    case 4:
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

int buscarHabitacion(int ocupantes) {
  int numeroHabitacion = 0;
  if (ocupantes <= 2) {
    for (int i = 0; i < DOBLES; i++) {
      if (habitaciones[i] == 0) {
        numeroHabitacion = i + 1;
        habitaciones[i] = 1;
        i = 10;
      }
    }
  }
  if (ocupantes > 2 && ocupantes <= 4) {
    for (int i = DOBLES; i < HABITACIONES; i++) {
      if (habitaciones[i] == 0) {
        numeroHabitacion = i + 1;
        habitaciones[i] = 1;
        i = 24;
      }
    }
  }

  if (ocupantes > 4) {
    numeroHabitacion = -1;
  }

  return numeroHabitacion;
}

int listarCuadruples(int posicion) {
  int numeroHabitacion = 0;
  if (habitaciones[posicion] == 1) {
    numeroHabitacion = posicion + 1;
  }
  return numeroHabitacion;
}

int estadoHabitacion(int numero) { return habitaciones[numero - 1]; }
