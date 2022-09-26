#include <iostream>

using namespace std;

/*struct Persona{
    string nombre;
    int edad;
    double salario;
};*/

struct Persona{
    string nombre;
    int edad;
    double salario;
    void imprime();
};

//void imprime (Persona &p);

int main()
{
    Persona humano1, humano2, humano3;
    humano1.nombre = "Nicolas";
    humano1.edad = 22;
    humano1.salario = 156000;
    humano2.nombre = "Edgardo";
    humano2.edad = 30;
    humano2.salario = 230000;
    humano3.nombre = "Emilse";
    humano3.edad = 28;
    humano3.salario = 240000;
    humano1.imprime();
    humano2.imprime();
    humano3.imprime();
    return 0;
}

void Persona::imprime (){
    cout << "Nombre: "<< nombre<< endl;
    cout << "Edad: "<< edad<< endl;
    cout << "Salario: "<< salario<< endl;
    cout << endl;
}

/*void imprime (Persona &p){
    cout << "Nombre: "<< p.nombre<< endl;
    cout << "Edad: "<< p.edad<< endl;
    cout << "Salario: "<< p.salario<< endl;
    cout << endl;
}*/
