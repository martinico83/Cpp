#include <iostream>

using namespace std;

int main()
{
    int numero, dato = 5;
    cout<<"\nDigite un numero: ";cin>>numero;
    /*if(dato == numero)
    {
        cout<<"\nEl numero es 5!!"<<endl;
    }
    else
    {
        cout<<"\nEl numero es diferente de 5"<<endl;
    }*/
    /*if(dato != numero)
    {
        cout<<"\nEl numero no es 5!!"<<endl;
    }
    else
    {
        cout<<"\nEl numero es 5"<<endl;
    }*/
    /*if(numero > dato)
    {
        cout<<"\nEl numero es mayor a 5"<<endl;
    }
    else
    {
        cout<<"\nEl numero es menor de 5"<<endl;
    }*/
    if(numero >= dato)
    {
        cout<<"\nEl numero es mayor o igual a 5"<<endl;
    }
    else
    {
        cout<<"\nEl numero es menor de 5"<<endl;
    }

    return 0;
}
