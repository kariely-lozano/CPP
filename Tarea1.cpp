#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int a=0;
	int b=0;
	int total=0;
	
	cout<< "Ingrese la primera cifra " <<endl;
	cin >> a;
	cout<< "Ingrese la segunda cifra " <<endl;
	cin >> b;
	

	total = a+b ;
	cout<< "La suma de las dos cifras es: " <<total;
	cout<<endl;
	
   
	total = a-b ;
	cout << "La resta de las dos cifras es: " << total;
	cout<<endl;
	
	
	total = a*b ;
	cout<< "La  multiplicacion de las dos cifras es: "<< total;
	cout<<endl;
	

	total = a/b;
	cout<< "La division de las dos cifras es :" <<total;
	cout<<endl;
	
	return 0;
}
