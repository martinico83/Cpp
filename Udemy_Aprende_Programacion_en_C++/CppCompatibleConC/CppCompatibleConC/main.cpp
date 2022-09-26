#include <iostream>
#include <string>
#include "matematicas.h"

using namespace std;

int main()
{
    float a,b;
    a = 3.9;
    b = 6.5;
    float c;
    c = suma(a,b);
    cout << c << endl;
    cout << resta(a,b)<< endl;
    cout << multiplicacion(a,b)<< endl;
    cout << division(a,b)<< endl;
    string nombre, apellido, nombreCompleto;
    nombre = "Marin Nicolas";
    apellido = "Orona Sacido";
    nombreCompleto = apellido + " "+ nombre;
    cout << apellido<< " "<< nombre<< endl;
    cout<<nombre[0]<<endl;

    cout << "hola mundo"<< endl;
    return 0;
}
