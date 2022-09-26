#include <iostream>

using namespace std;

int main()
{
    float precio,precioFinal=0;
    int iva=21;
    cout<<"Ingrese el precio de un producto: ";cin>>precio;cout<<endl;
    precioFinal=precio+(precio*iva)/100;
    cout<<"El precio final con iva es: "<<precioFinal<<endl;
    return 0;
    /*float n1,n2,suma,resta,multi,div;
    cout<<"Ingrese un numero: ";cin>>n1;
    cout<<"\nIngrese otro numero: ";cin>>n2;
    suma=n1+n2;
    resta=n1-n2;
    multi=n1*n2;
    div=n1/n2;
    cout<<"\nEl resultado de la suma es: "<<suma;
    cout<<"\nEl resultado de la resta es: "<<resta;
    cout<<"\nEl resultado de la multiplicacion es: "<<multi;
    cout<<"\nEl resultado de la division es: "<<div<<endl;*/

    /*int numero = 15;
    cout << "Hello world!\n";
    cout << numero<<endl;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout <<"\nEl numero es "<< numero<<endl;*/


}