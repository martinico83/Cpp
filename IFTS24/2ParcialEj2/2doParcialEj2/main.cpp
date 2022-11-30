#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>


using namespace std;

int generala[5];


int main() {
    char seguir;
    int dado=0;

    do {
        srand(time(NULL));
        for (int i = 0; i < 5; i++) {
            generala[i] = 1 + rand() % 6;

        }

        cout<<"\nLos dados son los siguientes: ";
        for(int i=0;i<5;i++){
            cout<<generala[i];
        }
        cout<<endl<<endl;
        dado=generala[0];
        int contadorIgualdad=0;
        for(int i=0;i<5;i++){
            if(generala[i]==dado){
                contadorIgualdad++;
            }
        }
        if(contadorIgualdad==5){
            cout<<"\nGENERALA!!"<<endl;
        }
        if(contadorIgualdad==4){
            cout<<"\nPOKER!!"<<endl;
        }
        if(contadorIgualdad!=4 && contadorIgualdad!=5){
            cout<<"\nPERDIO!!"<<endl;
        }

        cout << "\nDesea seguir (S/N): ";
        cin >> seguir;
        while ((seguir != 's') && (seguir != 'n')) {
            cout << "\nDEBE INGRESAR (S/N)!!" << endl;
            cout << "\nDesea seguir (S/N): ";
            cin >> seguir;
        }

    } while (seguir == 's');
}




