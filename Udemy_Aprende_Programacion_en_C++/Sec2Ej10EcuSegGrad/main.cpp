#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float valorA, valorB, valorC, resultadoA, resultadoB;

    cout << "\nIngrese el valor de a: "; cin >> valorA;
    cout << "\nIngrese el valor de b: "; cin >> valorB;
    cout << "\nIngrese el valor de c: "; cin >> valorC;

    resultadoA = (-valorB + (sqrt(pow(valorB,2)-(4*valorA*valorC))))/ (2* valorA);
    resultadoB = (-valorB - (sqrt(pow(valorB,2)-(4*valorA*valorC))))/ (2* valorA);

    cout.precision(2);
    cout << "\nEl primer resultado es: "<< resultadoA;
    cout << "\nEl segundo resultado es: "<< resultadoB << endl;

    return 0;
}
