#include <iostream>
using namespace std;
int main() {
    char letra;
    cout <<"Ingrese una letra: ";cin >> letra; cout << endl;
    if((letra <= 90) && (letra >= 65))
    {
        switch (letra) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': cout << "Es vocal MAYUSCULA\n";break;
            default: cout << "NO ES VOCAL\n"; break;
        }
    }else if((letra <= 122) && (letra >= 97))
    {
        switch (letra) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': cout << "Es vocal MINUSCULA\n";break;
            default: cout << "NO ES VOCAL\n"; break;
        }
}
    return 0;
}
