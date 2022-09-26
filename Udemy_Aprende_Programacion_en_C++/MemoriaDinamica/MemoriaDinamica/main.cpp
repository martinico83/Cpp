#include <iostream>

using namespace std;

struct Persona{
    string nombre;
    int edad;
    double salario;

    Persona();
    Persona(const string &nom, int e, double s);
    void imprime();
    ~Persona();
};

int main()
{
    cout << "Hello World!" << endl;
    Persona *humano1, *humano2;
    humano1 = new Persona("Martin", 39, 152000);
    humano2 = new Persona;
    humano2->nombre = "Jose";
    humano2->edad = 36;
    humano2->salario = 166354;
    humano1->imprime();
    humano2->imprime();
    delete humano1;
    delete humano2;
    return 0;
}

Persona::Persona(){
    nombre = "----";
    edad = 0;
    salario = 0.0;
}

Persona::Persona(const string &nom,int e, double s){
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

Persona::~Persona(){
    cout << "hasta Pronto"<< " "<< nombre<< endl;
}
