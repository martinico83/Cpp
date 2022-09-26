#include<iostream>
using namespace std;
int main(){
    float a,b,resultado;
    cout<<"Ingrese un numero: ";cin>>a;
    cout<<"Ingrese un numero: ";cin>>b;
    resultado=(a/b)+1;
    cout.precision(2);
    cout<<"\nEl resultado es: ";cout<<resultado<<endl;

return 0;
};