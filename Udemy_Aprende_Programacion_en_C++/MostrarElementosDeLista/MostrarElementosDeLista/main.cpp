#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertar_elemento_lista(Nodo *&, int );
void mostrar_elementos_lista(Nodo *);
void menu();

Nodo *lista = NULL;


int main()
{
    menu();

    return 0;
}


void menu(){
    int opcion;
    int dato;

    do {
        cout<< "\n\t\tMENU\n";
        cout<< "1-Ingresar datos a la lista\n";
        cout<< "2-Mostrar datos de la lista\n";
        cout<< "3-Salir\n";
        cin>> opcion;
        switch (opcion) {
        case 1:
            cout<< "Ingrese un numero: "; cin>>dato; cout<< endl;
            insertar_elemento_lista(lista, dato);
            break;
        case 2:
            mostrar_elementos_lista(lista);
            break;
        }
} while (opcion != 3);


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

void mostrar_elementos_lista(Nodo *lista){
    Nodo *actual = new Nodo();
    actual = lista;
    while (actual != NULL) {
        cout<< actual->dato<< " - ";
        actual = actual->siguiente;
    }
}
