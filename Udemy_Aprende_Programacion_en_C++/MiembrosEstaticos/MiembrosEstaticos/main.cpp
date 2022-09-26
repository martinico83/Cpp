#include <iostream>

using namespace std;

struct Persona{
    string nombre;
    int edad;
    double salario;
    static string videojuegos;
    void datosDePersona();
};

void datosDePersona();

// La variable videojuegos es compartido por todos las personas y si lo modifico en el main
// tambien se modifica a las demas personas
string Persona::videojuegos = "Super Mario Bros.";

int main()
{
    Persona humano1, humano2;
    humano1.nombre = "Ramon";
    humano2.nombre = "Julia";
    humano1.edad = 52;
    humano2.edad = 36;
    humano1.salario = 120500;
    humano2.salario = 320230;
    //humano1.videojuegos = "Sonic.";
    humano1.datosDePersona();
    humano2.datosDePersona();
    return 0;
}


void Persona::datosDePersona(){
    cout << nombre<< endl;
    cout << edad<< endl;
    cout << salario<< endl;
    cout << videojuegos<< endl;
    cout << endl;
}







