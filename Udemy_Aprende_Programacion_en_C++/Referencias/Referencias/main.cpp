#include <iostream>

using namespace std;

void modifica(int *p){
    *p = 4;
}

void modifica2(int &r){
    r = 10;
}

int main()
{
   // Los punteros se manejan igual que en C asi:
    int x,*p;
    p = &x;
    *p = 5;
    cout << x << endl;
    /* Referencias
    int x;
    int &r = x;
    r = 5;
    cout << x << endl;   */

    //int x = 0;
  /*  modifica(&x);
    cout << x << endl;  */
    modifica2(x);
    cout << x << endl;
    return 0;
}
