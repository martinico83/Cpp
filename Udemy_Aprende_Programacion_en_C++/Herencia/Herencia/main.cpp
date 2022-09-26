#include <iostream>

using namespace std;

class Bebe{
public:
    void gatea(){
        cout <<nombre << " GATEA"<< endl;
    }
    void set_nombre(const string &nom){
        nombre = nom;
    }
    string get_nombre(){
        return nombre;
    }
    protected:
    string nombre;
};

class Padre : public Bebe{
public:
    void camina(){
        cout << nombre<<" CAMINA"<< endl;
    }
//private:
};

int main()
{
    Bebe humano1;
    Padre humano2;
    humano1.set_nombre("Jose");
    humano2.set_nombre("Ignacio");
    cout<< "BEBE: "<< humano1.get_nombre()<< "---"; humano1.gatea();
    cout<< "PAPA: "<< humano2.get_nombre()<< "---"; humano2.camina();
    cout<< "PAPA: "<< humano2.get_nombre()<< "---"; humano2.gatea();
    return 0;
}
