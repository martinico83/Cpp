#include<iostream>
using namespace std;
int main {
  float a,b,c;
  cout<<"\nEJERCICIO DE INTERCAMBIO DE VALORES\n";
  cout<<"\nIngrese un valor a la vaiable A: ";cin>>a;
  cout<<"\nIngrese un valor a la vaiable B: ";cin>>b;
  cout<<"EL VALOR DE A ES: "<<a;
  cout<<"EL VALOR DE A ES: "<<a;
  c=a;
  a=b;
  b=c;
  cout<<"\nDESPUES DEL INTERCAMBIO\n";
  cout<<"EL VALOR DE A ES: "<<a;
  cout<<"EL VALOR DE B ES: "<<b;
return 0;
}