/*
6. Definir un vector con 20 números predefinidos luego recorrerlo calcular el
promedio y mostrarlo por pantalla
  */

#include <iostream>

using namespace std;

int main() {
  char seguir;
  int suma = 0;
  float promedio = 0;

  do {
    int numeros[] = {1,  3,  8,  9,  100, 56, 33, 2,  47, 36,
                     88, 22, 10, 58, 21,  11, 17, 18, 19, 20};

    for (int i = 0; i < 20; i++) {
      suma = suma + numeros[i];
    }
    promedio = (float)(suma) / 20;
    cout << "\nEl promedio es: " << promedio << endl;

    cout << "\nDesea seguir (S/N): ";
    cin >> seguir;
    while ((seguir != 's') && (seguir != 'n')) {
      cout << "\nDEBE INGRESAR (S/N)!!" << endl;
      cout << "\nDesea seguir (S/N): ";
      cin >> seguir;
    }
    suma = 0;
  } while (seguir == 's');
}