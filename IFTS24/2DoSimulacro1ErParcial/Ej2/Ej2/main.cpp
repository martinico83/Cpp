#include <iostream>

using namespace std;

int main()
{
    int dia = 0;
    cout << "Ingrese un numero entre 1 y 7, y le dire que dia es: "; cin >> dia; cout << endl;
    switch (dia) {
    case 1:
        cout << "LUNES"<< endl;
        break;
    case 2:
        cout << "MARTES"<< endl;
        break;
    case 3:
        cout << "MIERCOLES"<< endl;
        break;
    case 4:
        cout << "JUEVES"<< endl;
        break;
    case 5:
        cout << "VIERNES"<< endl;
        break;
    case 6:
        cout << "SABADO"<< endl;
        break;
    case 7:
        cout << "DOMINGO"<< endl;
        break;
    default:
        cout << "\nDebe ser un numero entre 1 y 7!!"<<endl;
        break;
    }
    return 0;
}
