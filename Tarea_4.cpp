#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int pares=0,impar=0,suma=0;
	
	for (int i =1; i<=10; i++)
	{
		if (i%2==0){
			pares =pares +i;
		}
		else
		impar=impar+i;
		cout <<i<<"";
	}
	cout<<endl;
	cout<<endl;
	cout<<"Total de Numeros pares: "<<pares<<endl;
	cout<<"Total de Numeros impares: "<<impar<<endl;
	
	suma=pares + impar;
	cout<<"El total de la suma de Impares y Pares es:  "<<suma<<endl;
	
	return 0;
}
