#include <iostream>
using namespace std;

int main() {
float a,b,c,d,e,f,resultado;
cout<<"\nIngrese el valor a: ";cin>>a;
cout<<"\nIngrese el valor b: ";cin>>b;
cout<<"\nIngrese el valor c: ";cin>>c;
cout<<"\nIngrese el valor d: ";cin>>d;
cout<<"\nIngrese el valor e: ";cin>>e;
cout<<"\nIngrese el valor f: ";cin>>f;
resultado=(a+(b/c))/(d+(e/f));
cout.precision(2);
cout<<"\nEL resultado es: "<<resultado<<endl;
return 0;
}