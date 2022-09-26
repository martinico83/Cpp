#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Ingrese un numero: "; cin >> numero; cout << endl;
    if(numero == 0)
    {
        cout << "EL numero es cero!!"<< endl;
    }else if((numero % 2) == 0)
    {
        cout << "ES PAR!!";
    }else
    {
        cout << "ES IMPAR!!";
    }
    return 0;
}
