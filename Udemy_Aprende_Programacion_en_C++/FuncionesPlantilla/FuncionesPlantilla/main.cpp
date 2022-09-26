#include <iostream>

using namespace std;

template<typename Tipo> Tipo suma( Tipo a, Tipo b);

int main()
{
    cout << suma <int> (1.58,2.66) << endl;
    cout << suma <int> (2,5) << endl;
    return 0;
}

template<typename Tipo> Tipo suma( Tipo a, Tipo b){
    return a+b;
}
