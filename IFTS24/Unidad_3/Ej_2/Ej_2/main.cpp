#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char seguir;
    int cantidadNumeros=0;
    int contadorNumeros=0;
    int base=0;
    int exponente=0;

    do {
        cout<<"Cuantos numeros desea ingresar?: ";cin>>cantidadNumeros;cout<<endl;
        while(contadorNumeros<cantidadNumeros){
            cout<<"\nIngrese la base: ";cin>>base;cout<<endl;
            cout<<"Ingrese el exponente: ";cin>>exponente;cout<<endl;
            cout<<"El resultado de la potencia es: "<<pow(base,exponente);
            contadorNumeros++;
        }

        cout << "\nDesea seguir (S/N): ";
        cin >> seguir;
        while ((seguir != 's') && (seguir != 'n')) {
            cout << "\nDEBE INGRESAR (S/N)!!" << endl;
            cout << "\nDesea seguir (S/N): ";
            cin >> seguir;
        }

    } while (seguir == 's');
}
