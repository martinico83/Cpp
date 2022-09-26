#include <iostream>

using namespace std;

int main()
{
    char seguir = 's';
    float sueldo;
    int entreCienYdos = 0;
    int mayorTres = 0;
    int acumuladorSueldo = 0;
    while ( seguir == 's' ) {
        cout << "Desea Ingresar el sueldo de un empleado? : "; cin >> seguir; cout << endl;
        if (seguir == 's'){
            cout << "Ingrese el sueldo : "; cin >> sueldo; cout << endl;
            if (sueldo >= 100 && sueldo <= 200 ){
                acumuladorSueldo = acumuladorSueldo + sueldo;
                entreCienYdos++;
            }else{
                if ( sueldo > 300 ){
                    acumuladorSueldo = acumuladorSueldo + sueldo;
                    mayorTres++;
                }
            }
        }
    }
    cout << "Entre 100 y 200 hay : " << entreCienYdos << endl;
    cout << "Mayor a 300 hay : " << mayorTres << endl;
    cout << "El gasto en sueldos de la empresa es : " << acumuladorSueldo << endl;
    return 0;
}
