#include <iostream>

using namespace std;
extern void agregarProducto(string descripcion, int cantidad, double precio);
void productos (int opcion)
{
	system ("cls");
	
	int opcionProducto=0;
	switch (opcion)
	{
		case 1:
			{
			cout<<"Bebidas Calientes"<<endl;
			cout<<"*****************"<<endl;
			cout<< "1- Capuccino" <<endl;
			cout<< "3- Cafe Late" <<endl;
			cout<< "3- Expresso" <<endl;
			
			cout<<"Ingrese una opcion: ";
			cin>>opcionProducto;
			
				switch(opcionProducto)
				{
					case 1:
						agregarProducto("1 Capuccino - L 70.00",1, 70);
					break;
					case 2:
						agregarProducto("1 Cafe Late - L 50.00",1, 50);
					break;
					
				case 3:
						agregarProducto("1 Expresso - L 60.00",1, 60);
					break;
					
				default:
					{
					cout<< "Opcion incorrecta";
					return;
				    break;	
				}
				}
				cout<<endl;
				cout<<"Producto Agregado"<<endl;
				system("pause")
						
		break;
	        }
			case 2:
			{
			
			cout<<"BEBIDAS FRIAS"<<endl;
			cout<<"*****************"<<endl;
			cout<< "1- Limonada" <<endl;
			cout<< "3- Energizante" <<endl;
			cout<< "3- Coca Cola" <<endl;
			cin>>opcionProducto;
				switch(opcionProducto)
				{
					case 1:
						agregarProducto("1 Limonada - L 30.00",1, 30);
					break;
					case 2:
						agregarProducto("1 Energizante - L 25.00",1, 25);
					break;
					
				case 3:
						agregarProducto("1 Coca Cola - L 30.00",1, 30);
					break;
					
				default:
					{
					cout<< "Opcion incorrecta";
					return;
				    break;	
				}
				}
				cout<<endl;
				cout<<"Producto Agregado"<<endl;
				system("pause")
		break;
	        }
			case 3:
			{
			
			cout<<"REPOSTERIA"<<endl;
			cout<<"**********"<<endl;
			cout<< "1- pastel tradicional" <<endl;
			cout<< "3- Dona Chocolate" <<endl;
			cout<< "3- Crepas" <<endl;
			cin>>opcionProducto;
				switch(opcionProducto)
				{
					case 1:
						agregarProducto("1 pastel tradicional - L 50.00",1, 50);
					break;
					case 2:
						agregarProducto("1 Dona Chocolate - L 15.00",1, 15);
					break;
					
				case 3:
						agregarProducto("1 Crepas - L 05.00",1, 5);
					break;
					
				default:
					{
					cout<< "Opcion incorrecta";
					return;
				    break;	
				}
				}
				cout<<endl;
				cout<<"Producto Agregado"<<endl;
				system("pause")
		break;
	        }
			
	}
}
