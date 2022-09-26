#include <iostream>

using namespace std;

struct Persona{
    string nombre;
    int edad;
    Persona *obtiene();
};

int main()
{
    Persona humano1;
    humano1.nombre = "Alejo";
    humano1.edad = 23;
    Persona *p;
    p = humano1.obtiene();
    cout << p->nombre << " "<< p->edad<< endl;
    return 0;
}

Persona *Persona::obtiene(){
    return this;
}
