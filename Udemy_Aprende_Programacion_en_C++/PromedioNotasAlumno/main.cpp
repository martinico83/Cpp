#include <iostream>

using namespace std;

int main()
{
    float nota1,nota2,nota3,resultado;
    cout << "\nIngrese nota de alumno: ";cin>>nota1;
    cout << "\nIngrese nota de alumno: ";cin>>nota2;
    cout << "\nIngrese nota de alumno: ";cin>>nota3;
    resultado = (nota1+nota2+nota3)/3;
    cout.precision(2);
    cout<<"\nEl promedio de las tres notas es: "<<resultado<<endl;
    return 0;
}
