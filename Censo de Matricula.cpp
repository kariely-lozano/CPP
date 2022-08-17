#include <iostream>

using namespace std;

string estudiante [] = {"12341", "12342", "12343","12344","12345","12346","12347","12348","12349","123410"};
string clave [] = {"12341", "12342", "12343", "12344", "12345", "12346", "12347", "12348", "12349","123410"};
bool matricular = true;
int contador;
bool contador1= false;

int main()
 {
 	bool validar = false;
	string cuenta;
 	string contrasena;
 	string seguir;
 	int clase=0,seleccion=0;
	int clasesM[5];
	int opcion;
	int agregarClases;
 	
 	while(matricular == true){
	 	
	 	cout << endl;
	 	cout << "                            !!BIENVENIDOS!!                 " << endl;
	 	cout << "*********";
	 	cout << "CENSO DE MATRICULA UNAH-VS";
	 	cout << "*********" << endl;
	 	cout << "************";
	 	cout << "*************";
	 	cout << endl;
	 	cout << endl;
	 	cout << endl;
	 	
	 	

 	cout << "Ingrese su cuenta: ";
 	cin >> cuenta;
 	cout << "Ingrese su contrasena: ";
 	cin >> contrasena;
 	
 	for (int i = 0; i < 10; i++)
	{
	 
	 if (cuenta == estudiante[i] && contrasena == clave[i]){
	    validar = true;
	 cout << "Acceso correcto";
	 i=11;
	 }
	if (i==9){
		cout << "Contrasena incorrecta";
	}
	}
	if(validar==true){
	
		cout << endl;
		cout << endl;
		cout << "*********";
	 	cout << "CENSO DE MATRICULA UNAH-VS";
	 	cout << "*********" << endl;
	 	cout << "************";
	 	cout << "**************";
	 	cout << endl;
	 	cout << endl;
	 	
	 	cout <<"1  - Admon de Empresas" << endl;
		cout <<"2  - Arte" << endl;
		cout <<"3  - Contaduria Publica" << endl;
		cout <<"4  - Cultura Fisica y Deportes" << endl;
		cout <<"5  - Ecologia y Recursos Naturales" << endl;
		cout <<"6  - Economia" << endl;
		cout <<"7 -  Lenguas Extranjeras" << endl;
		cout <<"8 -  Informatica Administrativa" << endl;
		cout <<"9 -  Metodos Cuantitativos" << endl;
		cout <<"0  - Cerrar Seccion" << endl;
		cout << endl;
		cout <<"     Seleccione su carrera: ";
		cin >> opcion;
		cout << endl;
		
		switch(opcion)
		{
			case 1:
				{
			clase=0,seleccion=0;
			while(clase<3){
				cout <<"1  - Admon de Empresas" << endl;
				cout <<"-----------------------------" <<endl;
				cout <<"1 Administracion" << endl;
		        cout <<"2 Desarrollo General" << endl;
	        	cout <<"3 Contabilidad Administrativa" << endl;
	        	cout <<"0 Cerrar Seccion" << endl;
	            cout <<" Seleccione su clase:";
		        cin  >> seleccion;
		        cout << endl;
		    
		     if(seleccion==0)
			{
			   clase=5;	
			}
		    else if(clasesM[seleccion] !=seleccion && seleccion!=0){
			clase++;
			clasesM[seleccion] = seleccion;
			contador1 =true;
			cout << "Clase matriculada" << endl;
			cout << endl;
			}
			else {
			cout << endl;
			cout << "Esta clase ya habia sido seleccionada"<< endl;
			cout << endl;
			}
			
		    }
			cout << "Desea seguir matriculando: ";
		    cin >> seguir;
		    	if(seguir != "S" && seguir != "s" && seguir != "Si" && seguir != "si")
			{
			matricular = false;
			}
			if(contador1== true){
				contador++;
				contador1 = false;
			}
            break;
				}
			case 2:
				{
			clase=0,seleccion=0;
			while(clase<3)
			{
				cout <<"2  - Arte" << endl;
		        cout <<"-----------------------------" <<endl;
		        cout <<"1  Guitarra Popular" << endl;
		        cout <<"2  Musica del Mundo" << endl;
		        cout <<"3  Musica Latinoamericana" << endl;
		        cout <<"0  Cerrar Seccion" << endl;
		        cout <<" Seleccione su clase:";
		        cin  >> seleccion;
		        cout << endl;
				
			if(seleccion==0)
			{
			   clase=5;	
			}
		    else if(clasesM[seleccion] !=seleccion && seleccion!=0){
			clase++;
			clasesM[seleccion] = seleccion;
			contador1 =true;
			cout << "Clase matriculada" << endl;
			cout << endl;
			}
			else {
			cout << endl;
			cout << "Esta clase ya habia sido seleccionada"<< endl;
			cout << endl;
			}
			}
			cout << "Desea seguir matriculando: ";
		    cin >> seguir;
		    if(seguir != "S" && seguir != "s" && seguir != "Si" && seguir != "si")
			{
			matricular = false;
			}
			if(contador1== true){
				contador++;
				contador1 = false;
			}
            break;
				}	
			case 3:
				{
			 clase=0,seleccion=0;
			while(clase<3)
			{
				cout <<"3 - Contaduria Publica" << endl;
		        cout <<"-------------------------------" << endl;
		        cout <<"1  Metodos Cuantitativos en Finanza" << endl;
		        cout <<"2  Contabilidad I" << endl;
		        cout <<"3  Finanza de Empresa" << endl;
		        cout <<"0  Cerrar Seccion" << endl;
		        cout <<" Seleccione su clase:";
		        cin >> seleccion;
		        cout << endl;
		        
		    if(seleccion==0)
			{
			   clase=5;	
			}
		    else if(clasesM[seleccion] !=seleccion && seleccion!=0){
			clase++;
			clasesM[seleccion] = seleccion;
			contador1 =true;
			cout << "Clase matriculada" << endl;
			cout << endl;
			}
			else {
			cout << endl;
			cout << "Esta clase ya habia sido seleccionada"<< endl;
			cout << endl;
			}
			}
			cout << "Desea seguir matriculando: ";
		    cin >> seguir;
		    if(seguir != "S" && seguir != "s" && seguir != "Si" && seguir != "si")
			{
			matricular = false;
			}
			if(contador1== true){
				contador++;
				contador1 = false;
			}
		        break;
	            }
			case 4:
				{
		     clase=0,seleccion=0;
			while(clase<3)
			{
				cout <<"4 - Cultura Fisica y Deportes" << endl;
		        cout <<"---------------------------------" << endl;
		        cout <<"1  Gimnasia General" << endl;
		        cout <<"2  Atletismo" << endl;
		        cout <<"3  Ajedrez" << endl;
		        cout <<"0  Cerrar Seccion" << endl;
		    cout <<" Seleccione su clase:" << endl;
		    cin  >> seleccion;
		    cout << endl;
		    
		    if(seleccion==0)
			{
			   clase=5;	
			}
		    else if(clasesM[seleccion] !=seleccion && seleccion!=0){
			clase++;
			clasesM[seleccion] = seleccion;
			contador1 =true;
			cout << "Clase matriculada" << endl;
			cout << endl;
			}
			else {
			cout << endl;
			cout << "Esta clase ya habia sido seleccionada"<< endl;
			cout << endl;
			}
			}
			cout << "Desea seguir matriculando: ";
		    cin >> seguir;
		    if(seguir != "S" && seguir != "s" && seguir != "Si" && seguir != "si")
			{
			matricular = false;
			}
			if(contador1== true){
				contador++;
				contador1 = false;
		    }
		        
				break;	
				}
			case 5:
				{
		    clase=0,seleccion=0;
			while(clase<1)
			{
				cout <<"5 - Ecologia y Recursos Naturales" << endl;
		        cout <<"-----------------------------------" << endl;
		        cout <<"1  Educacion Ambiental (optativa)" << endl;
		        cout <<"0  Cerrar Seccion" << endl;
				cout <<" Seleccione su clase:";
		        cin  >> seleccion;
		        cout << endl;
		    
		    if(seleccion==0)
			{
			   clase=5;	
			}
		    else if(clasesM[seleccion] !=seleccion && seleccion!=0){
			clase++;
			clasesM[seleccion] = seleccion;
			contador1 =true;
			cout << "Clase matriculada" << endl;
			cout << endl;
			}
			else {
			cout << endl;
			cout << "Esta clase ya habia sido seleccionada"<< endl;
			cout << endl;
			}
			}
			cout << "Desea seguir matriculando: ";
		    cin >> seguir;
		    if(seguir != "S" && seguir != "s" && seguir != "Si" && seguir != "si")
			{
			matricular = false;
			}
			if(contador1== true){
				contador++;
				contador1 = false;
			}
            break;
				}
			case 6:
				{
			clase=0,seleccion=0;
			while(clase<3)
			{
				cout <<"6 - Economia" << endl;
		        cout <<"---------------------------------" << endl;
		        cout <<"1  Principio de la Economia" << endl;
		        cout <<"2  Microeconomia" << endl;
		        cout <<"3  Macroeconomia" << endl;
		        cout <<"0  Cerrar Seccion" << endl;
		        cout <<" Seleccione su clase:";
		        cin  >> seleccion;
		        cout << endl;
		    
		    if(seleccion==0)
			{
			   clase=5;	
			}
		    else if(clasesM[seleccion] !=seleccion && seleccion!=0){
			clase++;
			clasesM[seleccion] = seleccion;
			contador1 =true;
			cout << "Clase matriculada" << endl;
			cout << endl;
			}
			else {
			cout << endl;
			cout << "Esta clase ya habia sido seleccionada"<< endl;
			cout << endl;
			}
			}
			cout << "Desea seguir matriculando: ";
		    cin >> seguir;
		    if(seguir != "S" && seguir != "s" && seguir != "Si" && seguir != "si")
			{
			matricular = false;
			}
			if(contador1== true){
				contador++;
				contador1 = false;
			}
            break;
				}	
		       
			case 7:
				{
		     clase=0,seleccion=0;
			while(clase<3)
			{
				cout <<"7 - Lenguas Extranjeras" << endl;
		        cout <<"---------------------------------" << endl;
		        cout <<"1  Frances I" << endl;
		        cout <<"2  Ingles I" << endl;
		        cout <<"3  Ingles II" << endl;
		        cout <<"0  Cerrar Seccion" << endl;
		    cout <<" Seleccione su clase:";
		    cin  >> seleccion;
		    cout << endl;
		    
		    if(seleccion==0)
			{
			   clase=5;	
			}
		    else if(clasesM[seleccion] !=seleccion && seleccion!=0){
			clase++;
			clasesM[seleccion] = seleccion;
			contador1 =true;
			cout << "Clase matriculada" << endl;
			cout << endl;
			}
			else {
			cout << endl;
			cout << "Esta clase ya habia sido seleccionada"<< endl;
			cout << endl;
			}
			}
			cout << "Desea seguir matriculando: ";
		    cin >> seguir;
		    if(seguir != "S" && seguir != "s" && seguir != "Si" && seguir != "si")
			{
			matricular = false;
			}
			if(contador1== true){
				contador++;
				contador1 = false;
			}
            break;
				}
				
			case 8:
				{
			clase=0,seleccion=0;
			while(clase<4){
				cout <<"8 - Informatica Administrativa" << endl;
		        cout <<"---------------------------------" << endl;
		        cout <<"1  Taller de Hardware I" << endl;
		        cout <<"2  Lenguaje de Programacion I" << endl;
		        cout <<"3  Sistemas Operativos I" << endl;
		        cout <<"4  Base de Datos I" << endl;
		        cout <<"0  Cerrar Seccion" << endl;
		        cout <<" Seleccione su clase:";
		        cin  >> seleccion;
		        cout << endl;
		    
		    if(seleccion==0)
			{
			   clase=5;	
			}
		    else if(clasesM[seleccion] !=seleccion && seleccion!=0){
			clase++;
			clasesM[seleccion] = seleccion;
			contador1 =true;
			cout << "Clase matriculada" << endl;
			cout << endl;
			}
			else {
			cout << endl;
			cout << "Esta clase ya habia sido seleccionada"<< endl;
			cout << endl;
			}
			
		    }
			cout << "Desea seguir matriculando: ";
		    cin >> seguir;
		    if(seguir != "S" && seguir != "s" && seguir != "Si" && seguir != "si")
			{
			matricular = false;
			}
			if(contador1== true){
				contador++;
				contador1 = false;
			}
            break;
			}
		
			case 9:
				{
			 clase=0,seleccion=0;
			while(clase<4)
			{
			cout <<"9 - Metodos Cuantitativos" << endl;
		    cout <<"---------------------------------" << endl;
		    cout <<"1  Metodos Cuantitativos I" << endl;
		    cout <<"2  Metodos Cuantitativos II" << endl;
		    cout <<"3  Metodos Cuantitativos III" << endl;
		    cout <<"4  Analisis Numericos en la Informatica" << endl;
		    cout <<"0  Cerrar Seccion" << endl;
		    cout <<" Seleccione su clase:";
		    cin  >> seleccion;
		    cout << endl;
		    
		    if(seleccion==0)
			{
			   clase=5;	
			}
		    else if(clasesM[seleccion] !=seleccion && seleccion!=0){
			clase++;
			clasesM[seleccion] = seleccion;
			contador1 =true;
			cout << "Clase matriculada" << endl;
			cout << endl;
			}
			else {
			cout << endl;
			cout << "Esta clase ya habia sido seleccionada"<< endl;
			cout << endl;
			}
		    }
			cout << "Desea seguir matriculando: ";
		    cin >> seguir;
		    if(seguir != "S" && seguir != "s" && seguir != "Si" && seguir != "si")
			{
			matricular = false;
			}
			if(contador1== true){
				contador++;
			   contador1 = false;
			}
            break;
				}
			
				
			default:
			{
			cout << "Seccion cerrada" << endl;
			break;
				}	
		}
		for(int i=0; i<5; i++){
			clasesM[i]=0;
		}
}
}

cout << "La cantidad de matriculados son:" <<contador;

return 0;
}
