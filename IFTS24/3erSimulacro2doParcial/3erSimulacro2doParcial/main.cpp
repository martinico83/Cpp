#include <iostream>

using namespace std;

int devolverAsientoDisponible (void);
int totalButacasLibres(void);

int butacas[3];

int main() {
    char seguir;
    int opcion;
    int confirma=0;
    int asientoLibre=0;
    int totalLibres=0;

    for(int i=0;i<3;i++){
        butacas[i]=0;
    }

    do {
        cout<<"\n1_Venta de ticket"<<endl;
        cout<<"\n2_Estado de la sala"<<endl;
        cout<<"\n3_Salir"<<endl;

        cout<<"\nIngrese una opcion: ";cin>>opcion;cout<<endl;

        switch (opcion) {
        case 1:
            cout<<"\n1_Realizar compra\n2_Atras\n\nConfirme: ";cin>>confirma;cout<<endl;
            if(confirma==1){
                asientoLibre=devolverAsientoDisponible();
                if(asientoLibre==-1){
                    cout<<"\nYA NO QUEDAN ASIENTOS!!"<<endl;
                }else{
                    cout<<"\nSu asiento es el numero: "<<asientoLibre<<endl;
                }
            }
            break;
        case 2:
            totalLibres=totalButacasLibres();
            cout<<"\nTotal de asientos libres: "<<totalLibres<<endl;
            break;
        default:
            break;
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


int devolverAsientoDisponible (void){
    int libre=-1;
    for(int i=0;i<3;i++){
        if(butacas[i]==0){
            libre=i+1;
            butacas[i]=1;
            i=3;
        }
    }
    return libre;
}


int totalButacasLibres(){
    int total=0;
    int contador=0;

    for(int i=0;i<3;i++){
        total++;
        if(butacas[i]==1){
            contador++;
        }
    }

    return total-contador;
}










