#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertar_elemento_lista(Nodo *&, int );
void mostrar_elementos_lista(Nodo *);
void menu();
void buscar_en_lista(Nodo *, int);
void eliminar_elemento_lista(Nodo *&, int);

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
        cout<< "3-Buscar elemento en lista\n";
        cout<< "4-Eliminar elemento de lista\n";
        cout<< "5-Salir\n";
        cout<< "\nIngrese una opcion: "; cin>> opcion; cout<< endl;
        switch (opcion) {
        case 1:
            cout<< "Ingrese un numero: "; cin>>dato; cout<< endl;
            insertar_elemento_lista(lista, dato);
            break;
        case 2:
            mostrar_elementos_lista(lista);
            break;
        case 3:
            cout<< "\nIngrese el numero a buscar: "; cin>> dato; cout<< endl;
            buscar_en_lista(lista,dato);
            break;
        case 4:
            cout<< "\nIngrese el elemento a eliminar: "; cin>> dato; cout<< endl;
            eliminar_elemento_lista(lista,dato);
            break;
        }
} while (opcion != 5);


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

void buscar_en_lista(Nodo *lista, int n){
    bool flag = false;
    Nodo *actual = new Nodo();
    actual = lista;
    while ((actual != NULL) && (actual->dato <= n)) {
        if(actual->dato == n){
            flag = true;
        }
        actual = actual->siguiente;
    }
    if(flag == true){
        cout << "\nElemento "<< n<< " Si a sido encontrado en lista.\n";
    } else{
        cout << "\nElemento "<< n<< " NO a sido encontrado en lista.\n";
    }

}

void eliminar_elemento_lista(Nodo *&lista, int n){
    //preguntar si la lista esta vacia
    if(lista != NULL){
        Nodo *auxBorrar;
        Nodo *anterior = NULL;

        auxBorrar = lista;

        //recorrer la lista
        while ((auxBorrar != NULL) && (auxBorrar->dato != n)) {
            anterior = auxBorrar;
            auxBorrar = auxBorrar->siguiente;
            }
            //el elemento no ha sido encontrado
            if(auxBorrar == NULL){
                cout<< "El elemento no ha sido encontrado"<< endl;
            }//el primer elemento es el que vamos a eliminar
            else if(anterior == NULL){
                lista = lista->siguiente;
                delete auxBorrar;
            }//el elemento esta en la lista pero no es el primer nodo
            else{
                anterior->siguiente = auxBorrar->siguiente;
                delete auxBorrar;
            }
    }
}
