#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char seguir;
    int numero=0;

    do {
        cout<<"Ingrese un numero: ";cin>>numero;cout<<endl;
        cout<<"NUMERO EXPONENTE RESULTADO"<<endl;
        for(int i=1;i<=10;i++){
            cout<<numero<<"\t"<<i<<"\t"<<pow(numero,i)<<endl;
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
