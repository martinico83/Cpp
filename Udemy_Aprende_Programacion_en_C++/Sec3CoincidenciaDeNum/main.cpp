#include <iostream>
using namespace std;
int main() {
    int numeroA,numeroB,numeroC,numeroAdivinador;
    cout << "Ingrese un numero: "; cin >>numeroA;cout<<endl;
    cout << "Ingrese otro numero: "; cin >>numeroB;cout<<endl;
    cout << "Ingrese otro numero: "; cin >>numeroC;cout<<endl;
    cout << "Ingrese el numero adivinador: "; cin >>numeroAdivinador;cout<<endl;
    if((numeroAdivinador) == numeroA || (numeroAdivinador) == numeroB ||
       (numeroAdivinador) == numeroC)
    {
        cout << "El numero coincide!!\n";
    }else
    {
        cout << "No hubo coincidencia!!\n";
    }

    return 0;
}
