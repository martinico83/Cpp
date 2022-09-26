#include <iostream>

using namespace std;

class Punto{
public:
    inline Punto(double a=0.0, double b=0.0);
    /*Punto(double a, double b){
        x = a;
        y = b;
    }*/

    double obtiene_x(){
        return x;
    }

    double obtiene_y(){
        return y;
    }

    void cambia_x(double a){
        x = a;
    }

    void cambia_y(double b){
        y = b;
    }
private:
    double x, y;
};

int main()
{
    Punto A(5.9,6.8),B(6.1,1.3);
    //Punto A,B;
    cout << A.obtiene_x()<< "--"<< A.obtiene_y() << endl<< endl;
    cout << B.obtiene_x()<< "--"<< B.obtiene_y() << endl<< endl;
    return 0;
}

inline Punto::Punto(double a, double b){
    x = a;
    y = b;
}
