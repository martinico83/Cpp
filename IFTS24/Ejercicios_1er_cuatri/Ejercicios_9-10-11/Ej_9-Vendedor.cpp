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
	float codigovendedor;
	float comision;
	float montoventa;
	cout << "Ingrese el monto de la compra: " << endl;
	cin >> montoventa;
	cout << "Ingrese codigo del vendedor: " << endl;
	cin >> codigovendedor;
	if (codigovendedor<100) {
		comision = montoventa*0.3;
	} else {
		if (codigovendedor>=100 && codigovendedor<=200) {
			comision = montoventa*0.2;
		} else {
			comision = montoventa*0.1;
		}
	}
	cout << "El monto de la compra fue: " << montoventa << endl;
	cout << "El codigo del vendedor es: " << codigovendedor << endl;
	cout << "La comision es de: " << comision << endl;
	return 0;
}

