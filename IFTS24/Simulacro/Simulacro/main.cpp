#include <iostream>

using namespace std;

int main()
{
    char seguir = 's';
    int art = 0;
    int cantidad = 0;
    int cantidadArt1 = 0;
    int pagoArt = 0;
    int cajas = 0;
    int banderaMaxMin = 0;
    int totalVentas = 0;
    int totalUnidades = 0;
    int maxVenta = 0;
    int minVenta = 0;
    do {
        cout << "Ingrese numero de articulo a vender"<< endl;
        cout << "1-Articulo 1 "<< endl;
        cout << "2-Articulo 2 "<< endl;
        cout << "3-Articulo 3 "<< endl;
        cout << "4-Articulo 4 "<< endl;
        cout << "Opcion: "; cin >> art;
    switch (art) {
        case 1:
            cout << "Ingrese las unidades del producto: "; cin >> cantidad;
            cantidadArt1 = cantidadArt1 + cantidad;
            totalUnidades = totalUnidades + cantidad;
            pagoArt = cantidad * 10;
            totalVentas = totalVentas + pagoArt;
            cout << "El importe a pagar del articulo "<< art<< " es: "<< pagoArt<< endl;
            break;
        case 2:
            cout << "Ingrese las unidades del producto: "; cin >> cantidad;
            totalUnidades = totalUnidades + cantidad;
            cajas = cajas + ( cantidad / 10 );
            pagoArt = (cajas * 65) + ((cantidad - (cajas * 10))*7);
            totalVentas = totalVentas + pagoArt;
            cout << "El importe a pagar del articulo "<< art<< " es: "<< pagoArt<< endl;
            break;
        case 3:
            cout << "Ingrese las unidades del producto: "; cin >> cantidad;
            totalUnidades = totalUnidades + cantidad;
            if( cantidad > 10 ){
                pagoArt = (cantidad *3) - ( (cantidad * 3) * 10 ) / 100;
                totalVentas = totalVentas + pagoArt;
            } else{
                pagoArt = cantidad * 3;
                totalVentas = totalVentas + pagoArt;
            }
            cout << "El importe a pagar del articulo "<< art<< " es: "<< pagoArt<< endl;
            break;
        case 4:
            cout << "Ingrese las unidades del producto: "; cin >> cantidad;
            totalUnidades = totalUnidades + cantidad;
            pagoArt = cantidad;
            totalVentas = totalVentas + pagoArt;
            cout << "El importe a pagar del articulo "<< art<< " es: "<< pagoArt<< endl;
            break;
        default:
            cout << "Debe ser un articulo existente!! "<< endl;
            break;
        }
    if(banderaMaxMin == 0){
        maxVenta = pagoArt;
        minVenta = pagoArt;
        banderaMaxMin = 1;
    }
    if(pagoArt >= maxVenta){
        maxVenta = pagoArt;
    } else{
        if(pagoArt <= minVenta){
            minVenta =pagoArt;
        }
    }

        cout << "Desea seguir comprando? (S/N): "; cin >> seguir;
    } while (seguir == 's');
    if( seguir == 'n' ){
        cout << "El importe maximo de todas las ventas es: "<< maxVenta<< endl;
        cout << "El importe minimo de todas las ventas es: "<< minVenta<< endl;
        cout << "El total de ventas del dia es: "<< totalVentas<< endl;
        cout << "El total de unidades vendidas es: "<< totalUnidades<< endl;
        cout << "El total de cajas del ART 2 es: "<< cajas<< endl;
        cout << "El total de unidades del ART 1 es: "<< cantidadArt1<< endl;
    }
    return 0;
}
