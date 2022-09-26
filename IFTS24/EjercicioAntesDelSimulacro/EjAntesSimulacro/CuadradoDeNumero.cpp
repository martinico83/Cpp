#include<iostream>

using namespace std;

int main(){
    int numero = 0;
    int cuadrado = 0;
    cout << "Ingrese un numero: "; cin >> numero;
    if(numero <= 0){
        cout << "ERROR, el número debe ser mayor que cero"<< endl;
    } else{
        cuadrado = numero * numero;
        cout << "El numero es: "<< numero<< endl;
        cout << "El cuadrado es: "<< cuadrado<< endl;

    }
}
