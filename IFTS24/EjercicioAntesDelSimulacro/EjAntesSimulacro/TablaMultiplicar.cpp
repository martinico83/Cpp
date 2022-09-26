#include<iostream>

using namespace std;

int main()
{
    int tabla = 0;
    int resultado = 0;
    cout << "Elija la tabla de multiplicar entre 0-10: "; cin >> tabla; cout << endl;
    for(int i = 0; i <= 10; i++){
        resultado = tabla * i;
        cout << tabla<< " X "<< i<< " = "<< resultado<< endl;
    }
    return 0;
}
