#include<iostream>
using namespace std;
int main(){
    float a,b,c,d,resultado;    
    cout<<"\nIngrese la variable a: ";cin>>a;
    cout<<"\nIngrese la variable b: ";cin>>b;
    cout<<"\nIngrese la variable c: ";cin>>c;
    cout<<"\nIngrese la variable d: ";cin>>d;
    resultado= a+(b/(c-d));
    cout.precision(2);
    cout<<"\nEl resultado es: "<<resultado<<endl;
    return 0;
}