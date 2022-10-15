/*
2. Realizar un programa que permita cargar 10 valores por teclado, los almacene
en un vector y luego recorra el vector y muestre los valores por pantalla.
  */

#include <iostream>

using namespace std;

int main() {
  char seguir;

  do {
    int numeros[10];

    for (int i = 9; i >= 0; i--) {
      cout << "\nIngrese " << i + 1 << " numeros: ";
      cin >> numeros[i];
    }

    for (int i = 9; i >= 0; i--) {
      cout << "\nNumero: " << numeros[i] << endl;
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