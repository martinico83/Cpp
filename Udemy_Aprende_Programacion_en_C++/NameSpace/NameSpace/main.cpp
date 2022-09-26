#include <iostream>

using namespace std;

namespace Seccion1 {
int x;
int suma(int a, int b);
int resta(int a, int b);
}

int main()
{
    Seccion1::x = 45;
    cout << Seccion1::x + Seccion1::suma(2,3)+ Seccion1::resta(8,6)<< endl;
    return 0;
}


namespace Seccion1 {

int suma(int a, int b){
    return a+b;
}
int resta(int a, int b){
    return a-b;
}

} // end namespace Seccion1
