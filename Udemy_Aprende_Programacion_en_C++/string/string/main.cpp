#include <iostream>
#include <string>

using namespace std;

int main()
{
  /*  const char *nombre;
    string nom;
    nom = "Martin Orona";
    nombre = nom.c_str();
    cout << nombre << endl;*/
    string nombre;
    nombre = "Martin Nicolas";
    string apellido;
    apellido = "Orona Sacido";
    string nombreCompleto;
    nombreCompleto = apellido + " " + nombre;
    cout << nombre<< " "<<apellido << endl;
    cout << nombreCompleto[13]<<nombreCompleto[20]<<nombreCompleto[0]<<nombreCompleto[6]<< endl;
    cout << nombreCompleto.size() << endl;
    return 0;
}
