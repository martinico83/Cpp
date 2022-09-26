#include <iostream>

using namespace std;

int main()
{
    float sueldo = 0;
    float sueldoConAumento = 0;
    char seguir;
    cout << "Desea entrar al programa (s/n): "; cin >> seguir; cout << endl;
    while (seguir == 's') {
        do {
            cout << "Ingrese el sueldo de un jugador: "; cin >> sueldo; cout << endl;
            if(sueldo <= 6000){
                cout << "El sueldo es: "<< sueldo<< endl;
                sueldoConAumento = sueldo + (sueldo*20)/100;
                cout << "El aumento es del 20 %"<< endl;
                cout << "El sueldo con aumento es: "<< sueldoConAumento<< endl;
            }else{
                if(sueldo >= 6000 && sueldo <= 7900){
                    cout << "El sueldo es: "<< sueldo<< endl;
                    sueldoConAumento = sueldo + (sueldo*10)/100;
                    cout << "El aumento es del 10 %"<< endl;
                    cout << "El sueldo con aumento es: "<< sueldoConAumento<< endl;
                }else{
                    if(sueldo >= 7900 && sueldo <= 12000){
                        cout << "El sueldo es: "<< sueldo<< endl;
                        sueldoConAumento = sueldo + (sueldo*5)/100;
                        cout << "El aumento es del 5 %"<< endl;
                        cout << "El sueldo con aumento es: "<< sueldoConAumento<< endl;
                    }else{
                        cout << "El sueldo es: "<< sueldo<< endl;
                        cout << "Disculpe no hay aumento para usted\n"<< endl;
                    }
                }
            }
        cout << "Desea cargar otro sueldo (s/n): "; cin >> seguir; cout << endl;
        } while (seguir == 's');
}
    return 0;
}
