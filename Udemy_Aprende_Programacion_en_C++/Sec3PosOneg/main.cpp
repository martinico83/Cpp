#include <iostream>
using namespace std;
int main() {
    float numero;
    cout << "Ingrese un numero: "; cin >> numero; cout << endl;
    if(numero == 0)
    {
        cout << "El numero es cero\n";
    }else if(numero > 0)
    {
        cout << "El numero es positivo\n";
    } else
    {
        cout << "El numero es negativo\n";
    }
    return 0;
}
