/*
4. Ingrese 20 valores enteros y muéstrelos en pantalla en una línea , en el
orden de ingreso y en la línea siguiente en el orden inverso al de ingreso
  */

#include <iostream>

using namespace std;

int main() {
  char seguir;
  int numeros[20];

  do {
    for (int i = 19; i >= 0; i--) {
      cout << "\nIngtrese " << i + 1 << " numeros: ";
      cin >> numeros[i];
      cout << endl;
    }
    for (int i = 19; i >= 0; i--) {
      cout << numeros[i];
    }
    cout << endl << endl;

    for (int i = 0; i < 20; i++) {
      cout << numeros[i];
    }
    cout << endl;

    cout << "\nDesea seguir (S/N): ";
    cin >> seguir;
    while ((seguir != 's') && (seguir != 'n')) {
      cout << "\nDEBE INGRESAR (S/N)!!" << endl;
      cout << "\nDesea seguir (S/N): ";
      cin >> seguir;
    }

  } while (seguir == 's');
}