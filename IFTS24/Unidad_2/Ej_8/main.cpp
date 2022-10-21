/*Realizar un programa que recorra un vector, con valores predefinidos , y muestre por pantalla le
mayor de los valores almacenados.*/

#include <iostream>

using namespace std;

int main()
{
    int flag = 0;
    int mayor = 0;
    int vector[]={2,9,6,7,10,3,1};
    for(int i=0; i<7; i++){
        if(flag == 0){
            mayor = vector[i];
            flag = 1;
        }
        if(mayor < vector[i]){
            mayor = vector[i];
        }
    }

    cout << "El numero mayor es: " << mayor << endl;

    return 0;
}
