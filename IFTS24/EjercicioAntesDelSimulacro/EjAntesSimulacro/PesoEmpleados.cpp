#include<iostream>

using namespace std;

int main(){
    float peso = 0;
    int contMayor = 0;
    int contMenor = 0;
    char seguir;
    cout << "Desea empezar? (s/n): "; cin >> seguir; cout << endl;
    while (seguir == 's') {
        cout << "Ingrese el peso de un empleado: "; cin >> peso; cout << endl;
        if(peso <= 80){
            contMenor++;
        } else{
            if(peso >80){
                contMayor++;
            }
        }
        cout << "Desea ingresar otro peso de un empleado? (s/n): "; cin >> seguir; cout << endl;
    }
    cout << "Los pesos menores o iguales a 80 KG son: "<< contMenor<< endl;
    cout << "Los pesos mayores a 80 KG son: "<< contMayor<< endl;
    return 0;
}

