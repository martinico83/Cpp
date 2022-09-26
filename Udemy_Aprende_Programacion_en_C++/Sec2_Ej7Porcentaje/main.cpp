#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2, nota3, resultado;
    cout <<"Ingrese una nota: ";cin >> nota1;cout << endl;
    cout <<"Ingrese otra nota: ";cin >> nota2;cout << endl;
    cout <<"Ingrese otra nota: ";cin >> nota3;cout << endl;
    nota1 *= 0.3;
    nota2 *= 0.6;
    nota3 *= 0.1;
    resultado = nota1 + nota2 + nota3;
    cout.precision(2);
    cout << "La nota final es: "<<resultado<<endl;

    return 0;
}
