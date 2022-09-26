#include <iostream>
using namespace std;

int main() {
    int flag = 0;
    float numeroA, numeroB, numeroC, mayor = 0;
    cout << "Ingrese un numero: " << endl; cin >> numeroA;
    cout << "Ingrese otro numero: "<< endl; cin >> numeroB;
    cout << "Ingrese otro numero: "<< endl; cin >> numeroC;
    if(flag == 0)
    {
        mayor = numeroA;
        flag = 1;
    }
    if(numeroB >= mayor)
    {
        mayor = numeroB;
    }
    if(numeroC >= mayor){
        mayor = numeroC;
    }
    cout << "El numero mayor es: "<< mayor << endl;

    return 0;
}
