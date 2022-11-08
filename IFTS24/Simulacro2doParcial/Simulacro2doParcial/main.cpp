#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#define ALUMNOS 30

using namespace std;

int legajos[ALUMNOS];
int notas[ALUMNOS];
int aprobados = 0;
int desaprobados = 0;
int promocionados = 0;
  int contadorNotas=0;

void mostrarEstadoCurso(void);
int devolverAlumnosNota (int);

int main() {
  char seguir='s';
  int opcion = 0;
  int numeroBusqueda=0;
       srand(time(NULL));
      for (int i = 0; i < ALUMNOS; i++) {
        notas[i] = 1 + rand() % 10;
        legajos[i] = i + 1;
      }

  do {
    cout << "\n1) El listado de todas las matriculas de los alumnos y la nota de "
            "cada uno.\n";
    cout << "2) El estado general del curso.\n";
    cout << "3) Permitir al usuario consultar cuantos alumnos obtuvieron una "
            "nota ingresada por teclado.\n";
    cout<<"4)Salir.\n";
    cout << "\ningrsese una opcion: ";
    cin >> opcion;
    cout << endl;
    switch (opcion) {
    case 1:
       for (int i = 0; i < ALUMNOS; i++) {
        cout << "Legajo: " << legajos[i] << "--"
             << "Nota: " << notas[i] << endl;
      }
      break;
    case 2:

      desaprobados = 0;
      aprobados = 0;
      promocionados = 0;

      mostrarEstadoCurso();
      break;
    case 3:
      contadorNotas=0;
      cout<<"\nIngrese la nota: ";cin>>numeroBusqueda;cout<<endl;
      contadorNotas=devolverAlumnosNota(numeroBusqueda);
      if(contadorNotas!=0){
              cout<<"\nLa cantidad de alumnos con "<<numeroBusqueda<<" de nota es: "<<contadorNotas<<endl;
        }else{
        cout<<"\nNo hay notas con ese numero!!"<<endl;
        }
      break;
      case 4:
            cout << "\nDesea seguir? (S/N): ";
    cin >> seguir;
    while ((seguir != 's') && (seguir != 'n')) {
      cout << "\nDEBE INGRESAR (S/N)!!" << endl;
      cout << "\nDesea seguir (S/N): ";
      cin >> seguir;
    }
      break;
    }
  } while (seguir == 's');
}

void mostrarEstadoCurso(void) {
  for (int i = 0; i < ALUMNOS; i++) {
    if (notas[i] < 4) {
      desaprobados++;
    } else {
      if (notas[i] >= 4 && notas[i] <= 6) {
        aprobados++;
      } else {
        promocionados++;
      }
    }
  }
  cout << "\nAprobados: " << aprobados << endl;
  cout << "Desaprobados: " << desaprobados << endl;
  cout << "Promocionados: " << promocionados << endl;
}

int devolverAlumnosNota (int numeroBusqueda){
  for(int i=0;i<ALUMNOS;i++){
    if(notas[i]==numeroBusqueda){
      contadorNotas++;
    }
  }
  return contadorNotas;
}
