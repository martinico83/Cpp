#include <iostream>
using namespace std;

int main() {
    float numeroA, numeroB, mayor;
    cout << "Ingrese un numero: "; cin>> numeroA; cout<< endl;
    cout << "Ingrese otro numero: "; cin>> numeroB; cout<< endl;
    if(numeroB >= numeroA)
    {
        mayor = numeroB;
    } else
    {
        mayor = numeroA;
    }

    cout << "El mayor es: "<< mayor << endl;

    return 0;
}
