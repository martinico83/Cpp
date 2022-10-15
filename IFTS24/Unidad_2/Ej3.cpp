/*
3. Realizar un ejercicio que permita cargar un vector de 7 elementos, sumarlos y
mostrar el resultado por pantalla. a. Realizar la carga con una lista de valores
predefinido b. Realizar la carga con valores ingresados por el usuario por
teclado
  */

#include <iostream>

using namespace std;

int main() {
  char seguir;

  do {
    int numeros[] = {3, 2, 5, 6, 2, 1, 1};
    int numeros2[7];
    int suma = 0;

    for (int i = 0; i < 7; i++) {
      suma = suma + numeros[i];
    }
    cout << "\nLa suma es: " << suma << endl;
    suma = 0;

    for (int i = 6; i >= 0; i--) {
      cout << "\nIngrese " << i + 1 << " numeros: ";
      cin >> numeros2[i];
      cout << endl;
    }

    for (int i = 6; i >= 0; i--) {
      cout << "\nNumero del vector: " << numeros2[i] << endl;
    }

    for (int i = 6; i >= 0; i--) {
      suma = suma + numeros2[i];
    }
    cout << "\nLa suma es: " << suma << endl;
    suma = 0;

    cout << "\nDesea seguir (S/N): ";
    cin >> seguir;
    while ((seguir != 's') && (seguir != 'n')) {
      cout << "\nDEBE INGRESAR (S/N)!!" << endl;
      cout << "\nDesea seguir (S/N): ";
      cin >> seguir;
    }

  } while (seguir == 's');
}