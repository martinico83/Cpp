#include <iostream>

using namespace std;

int suma(int a=7, int b=7);

int main()
{
    cout << suma() << endl;
    return 0;
}

int suma(int a, int b){
    return a+b;;
}
