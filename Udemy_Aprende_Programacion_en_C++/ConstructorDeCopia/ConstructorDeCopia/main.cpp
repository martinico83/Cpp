#include <iostream>

using namespace std;

struct Punto{
    double x, y;

    Punto(double a = 0.0, double b = 0.0);
    Punto(const Punto &otro);
    void imprime();
};

int main()
{
    /*Punto p(2.5,6.9), q;
    p.imprime();
    q.imprime();*/

    /*Punto p(2.5,6.9);
    Punto q = p;
    p.imprime();
    q.imprime();*/

    Punto p(2.5,6.9);
    Punto q(p);
    p.imprime();
    q.imprime();
    return 0;
}

Punto::Punto(double a, double b){
    cout << "Normal"<< endl;
    x = a;
    y = b;
}

Punto::Punto(const Punto &otro){
    cout << "Se copio"<< endl;
    x = otro.x;
    y = otro.y;
}

void Punto::imprime(){
    cout << x<< " "<< y<< endl;
}
