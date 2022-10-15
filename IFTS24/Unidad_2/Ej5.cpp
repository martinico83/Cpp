/*
5. Realizar un programa que permita ingresar 10 números , los almacene en un
vector y luego muestre solamente los números pares que contiene el vector.
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
      cout << endl;
    }

    for (int i = 9; i >= 0; i--) {
      if ((numeros[i] % 2) == 0) {
        cout << "\nNumero par: " << numeros[i] << endl;
      }
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