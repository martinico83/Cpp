/*
 * Declarar dos vectores de 5 elementos cada uno (v1 y v2) con valores predefinidos. Recorrerlos y
mostrar por pantalla la multiplicación de los valores de cada vector EJ: cout<< V1[0] * v2[0]
 * */
#include <iostream>

using namespace std;

int main()
{    
    int vec1[] = {3,4,5,9,7};
    int vec2[] = {1,2,8,7,6};
    for(int i = 0; i < 5; i++){
        cout << "( Vector1["<< i <<"]"<< " = "<< vec1[i]<< ") X "<< "( Vector2["<< i <<"]"<< " = "<< vec2[i]<< ") = " << vec1[i] * vec2[i]<< endl;
    }
    return 0;
}
