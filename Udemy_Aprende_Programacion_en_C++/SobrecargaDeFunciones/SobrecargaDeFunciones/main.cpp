#include <iostream>

using namespace std;

int suma(int a, int b){
    cout << "int"<< endl;
    return a+b;
}

float suma(float a, float b){
    cout << "float"<< endl;
    return a+b;
}

double suma(double a, double b){
    cout << "double"<< endl;
    return a+b;
}

int main()
{
    cout << suma(1,2) << endl;
    cout << suma(1.5f,2.5f) << endl;
    cout << suma(1.8,2.4) << endl;
    return 0;
}
