#include<iostream>

using namespace std;

int main(){
    int numero = 0;
    int suma = 0;
    cout << "Ingrese un numero: "; cin >> numero; cout << endl;
    for(int i=0; i <= numero; i++ ){
        suma = suma + i;
    }
    cout << "La suma total hasta el numero "<< numero<< " es: "<< suma<< endl;
    return 0;
}
