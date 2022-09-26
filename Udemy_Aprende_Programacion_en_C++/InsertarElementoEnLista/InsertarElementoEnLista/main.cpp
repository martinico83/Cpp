#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertar_elemento_lista(Nodo *&, int );

int main()
{
    Nodo *lista = NULL;
    int dato;

    cout<< "Ingrese un numero: "; cin>>dato; cout<< endl;
    insertar_elemento_lista(lista, dato);

    cout<< "Ingrese un numero: "; cin>>dato; cout<< endl;
    insertar_elemento_lista(lista, dato);

    cout<< "Ingrese un numero: "; cin>>dato; cout<< endl;
    insertar_elemento_lista(lista, dato);


    return 0;
}


void insertar_elemento_lista(Nodo *&lista, int n ){
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while ((aux1 != NULL) && (aux1->dato < n)) {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if(lista == aux1){
        lista = nuevoNodo;
    } else{
        aux2->siguiente = nuevoNodo;
    }

    nuevoNodo->siguiente = aux1;

    cout<< "\tElemento "<< n<< " insertado correctamente."<< endl;
}
