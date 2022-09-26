#include <iostream>

using namespace std;

struct Punto{
    double x, y;
};

/* da el mismo resultado pero es menos practico
Punto suma( const Punto &p, const Punto &q );   */

Punto operator + ( const Punto &p, const Punto &q );

int main()
{
    Punto a,b,r;
    a.x = 5.8;
    a.y = 3.5;
    b.x = 6.2;
    b.y = 1.2;
    r = a + b;
    //r = suma(a,b);
    cout << r.x <<"---"<< r.y << endl;
    return 0;
}

Punto operator + ( const Punto &p, const Punto &q ){
    Punto r;
    r.x = p.x + q.x;
    r.y = p.y + q.y;
    return  r;
}

/*
Punto suma( const Punto &p, const Punto &q ){
    Punto r;
    r.x = p.x + q.x;
    r.y = p.y + q.y;
    return  r;
}  */
