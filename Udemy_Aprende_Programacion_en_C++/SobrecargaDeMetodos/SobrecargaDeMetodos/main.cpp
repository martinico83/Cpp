#include <iostream>

using namespace std;

struct Persona{
    string nombre;
    void imprime()const;
    void imprime(int num)const;
};

int main()
{
    Persona humano1;
    humano1.nombre = "Martin";
    cout << "Hello World!" << endl;
    humano1.imprime();
    return 0;
}

void Persona::imprime()const{
    cout << nombre<< endl;
}

void Persona::imprime(int num) const{
    for(int i=0; i<num; i++){
        cout << nombre<<endl;
    }
}
