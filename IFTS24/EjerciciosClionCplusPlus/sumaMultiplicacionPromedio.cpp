// Este codigo ha sido generado por el modulo psexport 20180802-l64 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float dato1;
	float dato2;
	float dato3;
	float multiplicacion;
	float promedio;
	float suma;
	cin >> dato1;
	cin >> dato2;
	cin >> dato3;
	multiplicacion = dato1*dato2*dato3;
	suma = dato1+dato2+dato3;
	promedio = suma/3;
	cout << "La suma es " << suma << " la multiplicacion es " << multiplicacion << " el promedio es " << promedio << endl;
	return 0;
}

