#include <iostream>

using namespace std;

class Persona{
public:
    Persona();
    ~Persona();
    Persona(const Persona &otra);
    Persona(const string &nom);
    Persona(int e);
    Persona(double s);
    Persona(const string &nom, int e);
    Persona(int e, double s);
    Persona(const string &nom, double s);
    Persona(const string &nom, int e, double s);
    void imprime();

    void cambia_nombre(const string nom);
    void cambia_edad(int e);
    void cambia_salario(double s);

private:
    string nombre;
    int edad;
    double salario;
};

int main()
{
    Persona humano1("MARTIN",500.25), humano2, humano3;
    humano2.cambia_nombre("Julio");
    humano2.cambia_edad(65);
    humano2.cambia_salario(652321);
    humano1.imprime();
    humano2.imprime();
    humano3.imprime();
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

Persona::~Persona(){
    cout << "Hasta pronto"<< " "<< nombre<< endl;
    cout << endl;
}

Persona::Persona(const Persona &otra){
    nombre = otra.nombre;
    edad = otra.edad;
    salario = otra.salario;
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
    cout << endl;
}

void Persona::cambia_nombre(const string nom){
    nombre = nom;
}

void Persona::cambia_edad(int e){
    edad = e;
}

void Persona::cambia_salario(double s){
    salario = s;
}
