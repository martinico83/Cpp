#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&,int);

int main()
{
    Nodo *pila = NULL;
    int n1, n2;

    cout << "Ingrese un numero: "; cin>> n1; cout <<endl;
    agregarPila(pila,n1);
    cout << "Ingrese otro numero: "; cin>> n2; cout <<endl;
    agregarPila(pila,n2);

    return 0;
}

void agregarPila(Nodo *& pila,int n){
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = n;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;

    cout<< "Elemento "<< n<< " agregado correctamente a pila!"<< endl;
}
