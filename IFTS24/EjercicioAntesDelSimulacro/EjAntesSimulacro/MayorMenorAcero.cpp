#include<iostream>

using namespace std;

int main(){
    int numero = 0;
    int contPositivos = 0;
    int contNegativos = 0;
    int i = 1;
    while (i <= 10 ) {
        cout << "Ingrese 10 numeros: "; cin >> numero; cout << endl;
        if(numero > 0){
            contPositivos++;
        } else{
            if(numero < 0){
                contNegativos++;
            }
        }
        i++;
    }
    cout <<"La cantidad de positivos es: "<<contPositivos<< endl;
    cout <<"La cantidad de negativos es: "<<contNegativos<< endl;
}
