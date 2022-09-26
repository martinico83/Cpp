#include <iostream>

using namespace std;

void PedirNotas();
void mostrarNotas();
int cantNotas, *calif;

int main()
{
    cout << "Hello World!" << endl;
    PedirNotas();
    mostrarNotas();

    delete [] calif;
    return 0;
}

void PedirNotas(){
    cout << "Ingrese la cantidad de notas: "; cin >> cantNotas; cout << endl;
    int *p, *w;
    w = &cantNotas;
    p = w;
    calif = new int[*p];

    for(int i=0; i<cantNotas; i++){
        cout << "Ingrese una nota: "; cin >> *(calif+i); cout << endl; // cin >> calif[i]; cout << endl; //cin >> *(calif+i); cout << endl;
    }
}

void mostrarNotas(){
    cout << "----Mostrando Notas----"<< endl;
    for(int i =0; i<cantNotas; i++){
        cout << *(calif+i)<< endl; // calif[i] // *(calif+i)
    }
}
