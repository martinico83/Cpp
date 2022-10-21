/*Realizar un programa que pida el ingreso de dos valores por teclado y muestre el resultado de las operaciones raiz
cuadrada de ambos valores y el resultado de ambos valores al cubo (Utilizando las funciones de la librería Math)*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char seguir;
    int numero1= 0;
    int numero2= 0;
    int cuadrado1 = 0;
    int cuadrado2 = 0;
    int cubo1 = 0;
    int cubo2 = 0;

    do {
        cout << "Ingrese un numero: ";cin >> numero1;cout << endl;
        cout << "Ingrese otro numero: ";cin >> numero2;cout << endl;
        cuadrado1 = pow(numero1,2);
        cuadrado2 = pow(numero2,2);
        cubo1 = pow(cuadrado1,3);
        cubo2 = pow(cuadrado2,3);
        cout << "El cuadrado del primer numero es: "<<cuadrado1<< endl;
        cout << "El cuadrado del primer numero es: "<<cuadrado2<< endl;
        cout << "El cubo del cuadrado del primer numero es: "<<cubo1<< endl;
        cout << "El cubo del cudrado del segundo numero es: "<<cubo2<< endl;


      cout << "\nDesea seguir (S/N): ";
      cin >> seguir;
      while ((seguir != 's') && (seguir != 'n')) {
        cout << "\nDEBE INGRESAR (S/N)!!" << endl;
        cout << "\nDesea seguir (S/N): ";
        cin >> seguir;
      }

    } while (seguir == 's');

    return 0;
}
