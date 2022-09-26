#include <iostream>
using namespace std;
int main() {
    char caracter;
    cout << "\nIngrese un caracter: ";cin >> caracter;cout << endl;
/*    if( (caracter == 97 ) || (caracter == 101 ) || (caracter == 105 ) ||
        (caracter == 111 ) || (caracter == 117 ))
    {
        cout << "Es vocal minuscula!! " << endl;
    }else
    {
        cout << "NO ES vocal minuscula!!" << endl;
    }*/

    switch (caracter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout << "Es vocal minuscula"; break;
        default: cout << "NO ES VOCAL MINUSCULA"; break;
    }
    return 0;
}
