#include <iostream>

using namespace std;

struct Persona{
    string nombre;
    int edad;
    double salario;
    Persona();
    Persona(const string &nom);
    Persona(int e);
    Persona(double s);
    Persona(const string &nom, int e);
    Persona(int e, double s);
    Persona(const string &nom, double s);
    Persona(const string &nom, int e, double s);
    void imprime();
};

int main()
{
    Persona humano1("MARTIN",500.25);
    humano1.imprime();
    return 0;
}

Persona::Persona(const string &nom){
    nombre = nom;
    edad = 0;
    salario = 0;
}

Persona::Persona(int e){
    nombre = "----";
    edad = e;
    salario = 0.0;
}

Persona::Persona(double s){
    nombre = "----";
    edad = 0;
    salario = s;
}

Persona::Persona(const string &nom, int e){
    nombre = nom;
    edad = e;
    salario = 0.0;
}

Persona::Persona(int e, double s){
    nombre = "----";
    edad = e;
    salario = s;
}

Persona::Persona(){
    nombre = "---";
    edad = 0;
    salario = 0.0;
}

Persona::Persona(const string &nom, double s){
    nombre = nom;
    edad = 0;
    salario = s;
}

Persona::Persona(const string &nom, int e, double s){
    nombre = nom;
    edad = e;
    salario = s;
}

void Persona::imprime(){
    cout << nombre<< endl;
    cout << edad<< endl;
    cout << salario<< endl;
}
