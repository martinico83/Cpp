#include <iostream>

using namespace std;

class Bebe{
public:
    Bebe(const string &nom) {
        nombre = nom;
    }
    void gatea(){
        cout <<nombre<< " GATEA"<< endl;
    }

    void cambia_nombre(const string nom){
        nombre = nom;
    }

private:
    string nombre;
};

class Ninio {
public:
    Ninio(const string &nom){
        nombre = nom;
    }
    void estudia()  {
        cout << nombre<< " ESTUDIA"<< endl;
    }

    void cambia_nombre(const string nom){
        nombre = nom;
    }

private:
    string nombre;
};

class Padre :  public Bebe, public Ninio{
public:
    Padre(const string &nom) : Bebe(nom), Ninio(nom){
        nombre = nom;
    }

    void cambia_nombre(const string nom){
        nombre = nom;
    }

    void trabaja(){
        cout << nombre<<" TRABAJA"<< endl;
    }
private:
    string nombre;
};

int main()
{
  Padre humano("Julio");
  //Ninio h2("Ale");
  //Bebe h3("luis");

  humano.trabaja();
  humano.estudia();
  humano.gatea();
/*  humano.cambia_nombre("Luis");
  h2.cambia_nombre("Luis");
  h3.cambia_nombre("Luis");
  humano.trabaja();
  humano.estudia();
  humano.gatea();*/


    return 0;
}
