#include <iostream>
using namespace std;
int main() {
    int edad;
    cout << "Ingrese una edad: "; cin >> edad; cout << endl;
    if ((edad >= 18) && (edad <= 25))
    {
        cout << "Dentro del rango!!\n";
    }else
    {
        cout << "Fuera de rango!!\n";
    }
    return 0;
}
