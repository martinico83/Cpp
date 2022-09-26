#include <iostream>
#include <cstdlib>

using namespace std;

void hacerTabla(int **, int, int);
void mostrarTabla(int **, int, int);


int main()
{
    int **tabla, filas, columnas;

    cout<< "Ingrese el tamanio de filas: "; cin >> filas; cout << endl;
    cout<< "Ingrese el tamanio de columnas: "; cin >> columnas; cout << endl;
// Reservar memoria para la matriz
    tabla = new int *[filas];  // Reservando memoria para las filas
    for(int i = 0; i < filas; i++){
        tabla[i] = new int[columnas]; // Reservando memoria para las columnas
    }

    hacerTabla(tabla, filas, columnas);
    mostrarTabla(tabla, filas, columnas);


    for(int i = 0; i < filas; i++){
        delete[] tabla[i];
    }

    delete[] tabla;

    return 0;
}

void hacerTabla(int **tabla, int filas, int columnas){

    for(int i = 0; i < filas ; i++){
        for(int j = 0; j < columnas; j++){
            cout << "ingrese el valor en la posicion " << i << " -- " << j << ": ";
            cin >> *(*(tabla + i) + j);
        }
    }
}

void mostrarTabla(int **tabla, int filas, int columnas){
    for(int i = 0; i < filas ; i++){
        cout<< endl;
        for(int j = 0; j < columnas; j++){
            cout <<  *(*(tabla + i) + j)<< "   ";
        }
        cout << endl;
    }

}





