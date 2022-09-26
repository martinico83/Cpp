#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
};

void menu();
Nodo *crear_nodo(int);
void insertar_nodo(Nodo *&, int);
void mostrar_arbol(Nodo *, int );

Nodo *arbol = NULL;

int main()
{
    menu();

    return 0;
}

void menu(){
    int dato, opcion;

    do {
        cout<< "\t\tMENU\n";
        cout<< "\n1-Insertar elemento al arbol\n";
        cout<< "\n2-Mostrar arbol completo\n";
        cout<< "\n3-Salir\n";
        cout<< "\nIngrese una opcion: "; cin >> opcion; cout << endl;
        switch (opcion) {
        case 1:
            cout << "\nIngrese un numero: "; cin >> dato; cout << endl;
            insertar_nodo(arbol,dato);
            break;
        case 2:
            int contador = 0;
            mostrar_arbol(arbol,contador);
            break;
        }
    } while (opcion != 3);
}

Nodo *crear_nodo(int n){
    Nodo *nuevoNodo = new Nodo();

    nuevoNodo->dato = n;
    nuevoNodo->der = NULL;
    nuevoNodo->izq = NULL;
    return nuevoNodo;
}

void insertar_nodo(Nodo *&arbol, int n){
    if(arbol == NULL){
        Nodo *nuevoNodo = crear_nodo(n);
        arbol = nuevoNodo;
    } else{
        int valorRaiz = arbol->dato;
        if(n < valorRaiz){
            insertar_nodo(arbol->izq,n);
        } else{
            insertar_nodo(arbol->der,n);
        }
    }
}

void mostrar_arbol(Nodo *arbol, int cont){
    if(arbol == NULL){
        return;
    } else{
        mostrar_arbol(arbol->der, cont+1);
        for(int i = 0; i < cont; i++){
            cout<< "  ";
        }
        cout << arbol->dato<< endl;
        mostrar_arbol(arbol->izq, cont+1);
    }
}
