#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&,int);
void quitarPila(Nodo *&,int &);

int main()
{
    Nodo *pila = NULL;
    int dato;

    cout << "Ingrese un numero: "; cin>> dato; cout <<endl;
    agregarPila(pila,dato);
    cout << "Ingrese otro numero: "; cin>> dato; cout <<endl;
    agregarPila(pila,dato);

    cout<< "Sacando elementos de la pila --- ";
    while (pila != NULL) {  // Mientras no sea el final de la pila
        quitarPila(pila, dato);
        if(pila != NULL){
            cout << dato<< " , ";
        } else{
            cout << dato<< "."<< endl;
        }
    }

    return 0;
}

void agregarPila(Nodo *& pila,int n){
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = n;
    nuevoNodo->siguiente = pila;
    pila = nuevoNodo;

    cout<< "Elemento "<< n<< " agregado correctamente a pila!"<< endl;
}

void quitarPila(Nodo *& pila,int & n){
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}
