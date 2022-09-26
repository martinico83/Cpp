#include <iostream>

using namespace std;

int main()
{
    int numeroA = 0;
    int numeroB = 0;
    int resto = 0;
    cout << "Ingrese un numero: "; cin >> numeroA; cout << endl;
    cout << "Ingrese otro numero: "; cin >> numeroB; cout << endl;
    if(numeroA < numeroB){
        int i = numeroA;
        while (i <= numeroB) {
            resto = i % 2;
            if(resto != 0){
                cout << "\nNumero impar: "<< i<< endl<< endl;
            }
            i++;
        }
    } else{
        if(numeroA > numeroB){
            int i = numeroA;
            while (i >= numeroB) {
                resto = i % 2;
                if(resto != 0){
                    cout << "\nNumero impar: "<< i<< endl<< endl;
                }
                i--;
            }
        }
    }
    return 0;
}
