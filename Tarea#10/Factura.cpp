#include <iostream>

using namespace std;

int main (int srgc,char const *argv[])
{
	double subtotal=0;
	double total=0;
	double Impuesto=0.15;
	

	cout<< "Digite el subtotal de la  factura: ";
	cin >> subtotal;
	
	total= subtotal + (subtotal *0.15) ; 
	
	cout << "El total a cancelar es: " <<total;
	
	
	return 0;
}
