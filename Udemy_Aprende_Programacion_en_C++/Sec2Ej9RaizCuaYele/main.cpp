#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float valorX, valorY, resultado;

    cout << "\nIngrese el valor de X: "; cin >> valorX;
    cout << "\nIngrese el valor de Y: "; cin >> valorY;

    resultado = (sqrt(valorX)) / (pow(valorY, 2) - 1);

    cout.precision(2);
    cout << "\nEl resultado es: "<< resultado<< endl;

    return 0;
}
