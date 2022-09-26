#include <iostream>

using namespace std;

struct Persona{
    string nombre;
    int edad;
};


int main()
{    
    Persona hum1, hum2, *auxHum1, *auxHum2;
    hum1.nombre = "Martin";
    hum1.edad = 45;
    hum2.nombre = "Nicolas";
    hum2.edad = 65;
    auxHum1 = &hum1;
    auxHum2 = &hum2;
    cout << auxHum1->nombre<< endl;
    cout << auxHum1->edad<< endl;
    cout << auxHum2->nombre<< endl;
    cout << auxHum2->edad<< endl;
    return 0;
}
