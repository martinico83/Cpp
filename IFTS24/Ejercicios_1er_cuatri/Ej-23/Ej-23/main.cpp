#include <iostream>

using namespace std;

int main()
{
    int nota;
    int contMayorIgual7 = 0;
    int contMenor7 = 0;
    for (int i = 0; i <10 ; i++)
    {
        cout << "Ingrese 10 notas de alumnos: ";
        cin >> nota;
        if( nota >=7 ){
            contMayorIgual7++;
        }else
        {
            if(nota < 7 ){
                contMenor7++;
            }
        }
    }
    cout << "Las notas mayores iguales a 7 son: " << contMayorIgual7 << endl;
    cout << "Las notas menores a 7 son: " << contMenor7 << endl;

    return 0;
}
