/*
1. Realizar un programa que contenga un vector con los 5 primeros números
naturales y los muestre. a. Realizar la carga del vector con valores
predefinidos. EJ int n[] = { 1, 2, 3, 4, 5 };
  */

#include <iostream>

using namespace std;

int main() {
  char seguir;

  do {
    int n[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
      cout << n[i] << endl;
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