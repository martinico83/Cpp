/*5. Escribir un programa que muestre al usuario un menú con las siguientes opciones 1 .Calcular Raiz Cuadrada – 2.
Calcular Potencias - 3 .Salir. El programa deberá realizar las operaciones que correspondan de acuerdo a la opción
seleccionada y debe permitir realizar varios cálculos hasta que se presiones salir.*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char seguir = 's';
    int numero=0;
    int potencia=0;
    int opcion=0;

    do {
        cout<<"\n1 .Calcular Raiz Cuadrada\n";
        cout<<"2 .Calcular Potencias\n";
        cout<<"3 .Salir\n";
        cout<<"Ingrese una opcion: ";cin>>opcion;cout<<endl;
        switch (opcion) {
        case 1:
            cout<<"\nIngrese un numero: ";cin>>numero;
            cout<<"\nRaiz cuadrada: "<<pow(numero,0.5)<<endl;
            break;
        case 2:
            cout<<"\nIngrese un numero: ";cin>>numero;
            cout<<"\nIngrese la potencia: ";cin>>potencia;
            cout<<"\nLa potencia del numero "<<numero<<" es: "<<pow(numero,potencia);
            break;
        case 3:
            cout << "\nDesea seguir (S/N): ";
            cin >> seguir;
            while ((seguir != 's') && (seguir != 'n')) {
                cout << "\nDEBE INGRESAR (S/N)!!" << endl;
                cout << "\nDesea seguir (S/N): ";
                cin >> seguir;
            }
            break;
        }



    } while (seguir == 's');
}
