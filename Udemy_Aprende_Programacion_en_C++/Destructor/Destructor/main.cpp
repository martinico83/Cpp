#include <iostream>

using namespace std;

struct Persona{
    string nombre;

    Persona();
    Persona(const string &nom);

    ~Persona();  // Destructor
    void muestra();
};

int main()
{
    Persona humano1("Martincho");
    cout << "Hello World!" << endl;
    humano1.muestra();
    return 0;
}

Persona::Persona(){
    nombre = "----";
}

Persona::Persona(const string &nom){
    nombre = nom;
}

void Persona::muestra(){
    cout << nombre<< endl;
}

Persona::~Persona(){
    cout << "Adios Martincho"<< endl;
}
