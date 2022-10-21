/*Realizar un programa que lea 5 números por teclado, los almacene en un array y los ordene de
forma ascendente.*/

#include <iostream>

using namespace std;

int main() {
    char seguir;
    int numero = 0;
    int auxArray = 0;
    int array[5];

    do {
        for(int i = 0; i < 5; i++){
            cout <<"Ingrese "<< i<< " numeros: "; cin >> numero; cout << endl;
            array[i] = numero;
        }
        for(int x=0; x<5; x++){
            for(int i=x+1; i<5; i++){
                if(array[x] > array[i]){
                    auxArray = array[i];
                    array[i] = array[x];
                    array[x] = auxArray;
                }
            }
        }

        cout<<"ARRAY ORDENADO DE MENOR A MAYOR: ";

        for(int i=0; i<5; i++){
            cout<< array[i]<< ", ";
        }
        cout<< endl;

        cout << "\nDesea seguir (S/N): ";
        cin >> seguir;
        while ((seguir != 's') && (seguir != 'n')) {
            cout << "\nDEBE INGRESAR (S/N)!!" << endl;
            cout << "\nDesea seguir (S/N): ";
            cin >> seguir;
        }

    } while (seguir == 's');
}
