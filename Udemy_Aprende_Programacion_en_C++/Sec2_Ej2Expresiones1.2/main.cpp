#include <iostream>
using namespace std;
int main()
{
    float a, b, c, d, resultado;
    cout << "Ingrese un numero: ";cin >> a;
    cout << "Ingrese un numero: ";cin >> b;
    cout << "Ingrese un numero: ";cin >> c;
    cout << "Ingrese un numero: ";cin >> d;
    resultado=(a+b)/(c+d);
    cout.precision(2);
    cout << "El resultado es: " << resultado << endl;
    return 0;
};