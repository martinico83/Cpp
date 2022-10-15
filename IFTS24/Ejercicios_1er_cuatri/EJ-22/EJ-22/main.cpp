#include <iostream>

using namespace std;

int main()
{
    int numero;
    int minimo = 0;
    int flag = 0;
    int i = 1;
    while (i <= 6) {
        cout << "Ingrese 6 numeros enteros: ";
        cin >> numero; cout << endl;
        if (flag == 0){
            minimo = numero;
            flag = 1;
        }
        if (numero < minimo){
            minimo = numero;
        }
        i++;
    }
    cout << "El menor numero es: " << minimo << endl;
    return 0;
}

