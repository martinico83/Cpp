/*  ALUMNO: ORONA SACIDO MARTIN NICOLAS
 *  COMISION: C
 */

#include <iostream>

using namespace std;

int consultorios[10];
int totalConsultasTraumatologia (void);
void consultoriosCantidadMayorPromedio (void);


int totalConsultasTraumatologia (void){
    int totalTraumatologia=0;
    for(int i=5;i<10;i++){
       totalTraumatologia=totalTraumatologia+consultorios[i];
    }
    return totalTraumatologia;
}

void consultoriosCantidadMayorPromedio (void){
    int contadorConsultas=0;
    float promedioTotal=0;
    for(int i=0;i<10;i++){
        contadorConsultas=contadorConsultas+consultorios[i];
    }
    promedioTotal=contadorConsultas/10;
    for(int i=0;i<10;i++){
        if(consultorios[i]>promedioTotal){
            cout<<"\nEl consultorio que supera el promedio de consultas de la institucion es el: "<<i+1<<endl;
        }
    }
}

int main() {
    char seguir;
    int opcion;
    int numeroConsultorio=0;
    int numeroPacientes=0;

    for(int i=0;i<10;i++){
        consultorios[i]=0;
    }

    do {
        cout<<"\n1_Ingresar cantidad de pacientes atendidos por mes en consultorio"<<endl;
        cout<<"\n2_Total de consultas realizadas en consultorios de traumatologia"<<endl;
        cout<<"\n3_Mostrar todos los numeros de consultorios cuya cantidad de consultas"
              " sea superior al promedio de consultas mensual."<<endl;
        cout<<"\n4_Salir."<<endl;

        cout<<"\nIngrese una opcion: ";cin>>opcion;cout<<endl;

        switch (opcion) {
        case 1:
            cout<<"\nConsultorio numero: ";cin>>numeroConsultorio;cout<<endl;
            cout<<"\nNumero de pacientes en el mes: ";cin>>numeroPacientes;cout<<endl;
            for(int i=0;i<10;i++){
                consultorios[numeroConsultorio-1]=numeroPacientes;
            }
            break;
        case 2:
            cout<<"\nTotal de consultas de traumatologia: "<<totalConsultasTraumatologia()<<endl;

            break;
        case 3:
            consultoriosCantidadMayorPromedio();
            break;
        case 4:

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


