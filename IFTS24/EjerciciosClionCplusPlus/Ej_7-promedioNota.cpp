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
	float notaexamenfinal;
	float notap1;
	float notap2;
	float notap3;
	float notatrabajofinal;
	float parteexamenfinal;
	float parteparciales;
	float partetrabajofinal;
	float totalnota;
	cout << "Ingrese nota parcial 1: " << endl;
	cin >> notap1;
	cout << "Ingrese nota parcial 2: " << endl;
	cin >> notap2;
	cout << "Ingrese nota parcial 3: " << endl;
	cin >> notap3;
	cout << "Ingrese nota examen final: " << endl;
	cin >> notaexamenfinal;
	cout << "Ingrese nota trabajo final: " << endl;
	cin >> notatrabajofinal;
	parteparciales = (((notap1+notap2+notap3)/3)*55)/100;
	parteexamenfinal = (notaexamenfinal*30)/100;
	partetrabajofinal = (notatrabajofinal*15)/100;
	totalnota = parteparciales+parteexamenfinal+partetrabajofinal;
	cout << "La nota final es: " << totalnota << endl;
	return 0;
}

