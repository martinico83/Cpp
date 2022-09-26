#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float cateto1, cateto2, hipotenusa;

    cout << "Ingrese el cateto 1: "; cin >> cateto1;
    cout << "Ingrese el cateto 2: "; cin >> cateto2;

    hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2,2));

    cout.precision(2);
    cout << "La hipotenusa es: " << hipotenusa;

    return 0;
}
