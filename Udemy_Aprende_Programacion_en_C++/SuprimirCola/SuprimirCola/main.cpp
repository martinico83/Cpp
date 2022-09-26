#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertar_cola(Nodo *&, Nodo *&, int );
void suprimir_cola(Nodo *&, Nodo *&, int & );
bool cola_vacia(Nodo *);

int main()
{
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int dato;
    cout<< "ingrese un dato: "; cin >> dato; cout<< endl;
    insertar_cola(frente,fin,dato);
    cout<< "ingrese un dato: "; cin >> dato; cout<< endl;
    insertar_cola(frente,fin,dato);
    cout<< "ingrese un dato: "; cin >> dato; cout<< endl;
    insertar_cola(frente,fin,dato);

    // Eliminar los elementos de la cola

    cout<< "\nQuitando los nodos de la cola"<<endl;

    while(frente != NULL){
        suprimir_cola(frente,fin,dato);
        if(frente != NULL){
            cout<< dato<<" , ";
        } else{
            cout<< dato<<" . ";
        }
    }

    return 0;
}

void suprimir_cola(Nodo *&frente, Nodo *&fin, int &n){

    n = frente->dato;
    Nodo *aux = frente;

    if(frente == fin){
        frente = NULL;
        fin = NULL;
    } else{
        frente = frente->siguiente;
    }
    delete aux;
}


// funcion para insertar elementos en una cola
void insertar_cola(Nodo *&frente, Nodo *&fin, int n){
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = n;
    nuevoNodo->siguiente = NULL;
    if(cola_vacia(frente)){
        frente = nuevoNodo;
    }else{
        fin->siguiente = nuevoNodo;
    }


    fin = nuevoNodo;
    cout<< "\tElemento "<< n<< " insertado correctamente en la cola"<<endl;
}



// funcion para determinar si la cola esta vacia
bool cola_vacia(Nodo *frente){
    return (frente == NULL)? true : false;

    /*    if(frente == NULL){
        return true;
    }else {
        return false;
    }     */
}










