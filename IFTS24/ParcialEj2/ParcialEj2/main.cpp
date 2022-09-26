//Alumno: Orona Sacido Martin Nicolas

#include <iostream>

using namespace std;

int main()
{
    float centigrados = 0, fahrenheit = 0.0;
    int humedad = 0, seguir = 1;
    while (seguir == 1) {
        cout << "Ingrese la tempertura en grados centigrados: "; cin >> centigrados; cout << endl;
        cout << "Ingrese la humedad: "; cin >> humedad; cout << endl;
        fahrenheit = (centigrados * 1.8) + 32;
        if(fahrenheit <= 15 && humedad < 80){
            cout <<fahrenheit<< " FAHRENHEIT FRIO Y SECO!!"<< endl;
        }else{
            if(fahrenheit <= 15 && humedad >= 80){
                cout << fahrenheit<< " FAHRENHEIT TEMPLADO Y HUMEDO!!"<< endl;
            }else{
                if(fahrenheit > 15 && humedad < 80){
                    cout <<fahrenheit<< " FAHRENHEIT TEMPLADO Y SECO!!"<< endl;
                }else{
                    if(fahrenheit > 15 && humedad >= 80){
                        cout <<fahrenheit<< " FAHRENHEIT CALIDO Y HUMEDO!!"<< endl;
                    }
                }
            }
        }
        cout << "Desea cargar los datos de otra localidad (0 = NO) (1= SI): "; cin >> seguir; cout << endl;
        while (seguir != 0 && seguir != 1){
            cout << "DEBE INGRESAR CERO (0) u UNO (1)"<< endl;
            cout << "Ingrese nuevamente una respuesta: "; cin >> seguir; cout << endl;
        }
    }
    return 0;
}


