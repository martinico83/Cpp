/*4. Escribir un programa que visualice una tabla de los N primeros números, siendo N un número que ingresa el
usuario. Utilizar el siguiente diseño de salida suponiendo que el usuario ingresó un tres:
NÚMERO CUADRADO CUBO
1 1 1
2 4 8
3 9 27
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char seguir;
    int numero=0;

    do {
        cout<<"Ingrese la cantidad de numeros a potenciar: ";cin>>numero;cout<<endl;
        cout<<"NUMERO CUADRADO CUBO"<<endl;
        for(int i=1;i<=numero;i++){
            cout<<i<<"\t"<<pow(i,2)<<"\t"<<pow(i,3)<<endl;
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
