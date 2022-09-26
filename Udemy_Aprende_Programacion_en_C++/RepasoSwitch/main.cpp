#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout<<"\nIngrese un numero entre 1-5: ";cin>>numero;
    switch(numero)
    {
        case 1: cout<<"\nEl numero es 1!\n";break;
        case 2: cout<<"\nEl numero es 2!\n";break;
        case 3: cout<<"\nEl numero es 3!\n";break;
        case 4: cout<<"\nEl numero es 4!\n";break;
        case 5: cout<<"\nEl numero es 5!\n";break;
        default: cout<<"\nEl numero no esta entre 1 y 5!!!\n"; break;

    }
    return 0;
}
