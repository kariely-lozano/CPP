#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double subtotal = 0;
	double total =0;
	double  impuesto = 0;
	int descuento = 0;
	double calculodescuento = 0;
	double calculoimpuesto = 0;
	char estaExenta;
	
	cout << "Ingrese el subtotal de su factura: ";
	cin >> subtotal;
	
	cout << "Ingrese el descuento obtenido (0,10,15,20): ";
	cin >> descuento;
	
	cout << "factura exenta? S/N";
	cin >> estaExenta;
	
	if (estaExenta == 's' || estaExenta == 's' ){
		calculoimpuesto =  0 ;
	}
	if (estaExenta == 'n' || estaExenta == 'n' ){
		calculoimpuesto =  (subtotal- calculodescuento)* 0.15;
	}
	
	calculodescuento = (subtotal* descuento) /100;
	total = subtotal - calculodescuento + calculoimpuesto;
	
	cout <<"total a pagar es: "<<total;
	
	return 0;
} 
