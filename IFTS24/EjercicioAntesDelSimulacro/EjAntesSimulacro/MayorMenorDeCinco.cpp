#include<iostream>

using namespace std;

int main()
{
    int numero = 0;
    int mayor = 0;
    int menor = 0;
    int bandera = 0;
    for(int i = 5; i > 0; i--){
        cout << "Ingrese "<< i<< " numeros: "; cin >> numero; cout << endl;
        if(bandera == 0){
            mayor = numero;
            menor = numero;
            bandera = 1;
        }
        if(numero > mayor){
            mayor = numero;
        } else{
            if(numero < menor){
                menor = numero;
            }
        }
    }
    cout << "El numero mayor es:"<< mayor<< endl;
    cout << "El numero menor es:"<< menor<< endl;
    return 0;
}
