#include <iostream>

using namespace std;

struct Persona{
    static string nombre;
    static void mostrarPersona();
};

string Persona::nombre = "Pedro";

int main()
{
    cout << "Hello World!" << endl;
    Persona::mostrarPersona();
    return 0;
}

void Persona::mostrarPersona(){
    cout << nombre<< endl;
}
