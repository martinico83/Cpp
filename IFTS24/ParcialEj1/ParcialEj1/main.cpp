// Alumno: Orona Sacido Martin Nicolas.


#include <iostream>

using namespace std;

int main()
{
    int angulo1 = 0, angulo2 = 0, angulo3 = 0, sumaAngulos = 0;
    cout << "Ingrese primer angulo: "; cin >> angulo1; cout << endl;
    cout << "Ingrese segundo angulo: "; cin >> angulo2; cout << endl;
    cout << "Ingrese tercer angulo: "; cin >> angulo3; cout << endl;
    sumaAngulos = angulo1 + angulo2 + angulo3;
    if(sumaAngulos == 180)
    {
        if(angulo1 > 90 || angulo2 > 90 || angulo3 > 90){
            cout << "El triangulo es obtusangulo!!"<< endl;
        }else{
            if(angulo1 == 90 || angulo2 == 90 || angulo3 == 90){
                cout << "El triangulo es rectangulo!!"<< endl;
            } else{
                if(angulo1 < 90 && angulo2 < 90 && angulo3 < 90){
                    cout << "El triangulo es acutangulo!!"<< endl;
                }
            }
        }
    }else{
        cout<< "NO ES UN TRIANGULO!! Deben sumar 180 grados!!"<< endl;
    }
    return 0;
}
