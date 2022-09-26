// Este codigo ha sido generado por el modulo psexport 20180802-l64 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).
#define SIN_TIPO string

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	SIN_TIPO dato1;
	SIN_TIPO dato2;
	cin >> dato1;
	cin >> dato2;
	if (dato1==dato2) {
		cout << "Los datos son iguales" << endl;
	}
	if (dato1<dato2) {
		cout << "El primer dato es el menor" << endl;
	}
	if (dato1>dato2) {
		cout << "El segundo dato es el menor" << endl;
	}
	return 0;
}

