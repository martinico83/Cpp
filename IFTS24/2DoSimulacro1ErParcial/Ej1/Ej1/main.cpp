#include <iostream>

using namespace std;

int main()
{
    int dias = 0;
    int años = 0;
    int contDias = 0;
    int contMes = 0;
    int contAños = 0;
    cout << "Ingrese los dias: "; cin >> dias; cout <<endl;
    contDias = dias;
    while(contDias >= 365 ){
        contDias = contDias - 365;
        contAños++;
    }
    años = contAños;
    if(años >= 1) {
        contMes = contAños*12;
    }
    cout << "La cantidad de dias es: "<< contDias<< endl;
    cout << "La cantidad de meses es: "<< contMes<< endl;
    cout << "La cantidad de años es: "<< contAños<< endl;
    return 0;
}
