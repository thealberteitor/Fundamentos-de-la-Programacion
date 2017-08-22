#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	const double PI=3.1415927;
	
	//Declaración de variables
	double radio, area, longitud;
	
	//Lectura de datos
	cout << "Introduzca radio: " << endl;
	cin >> radio;
	
	//Operaciones
	longitud = 2*PI*radio;
	area = PI*pow(radio,2);
	
	//Salida de datos
	cout << "La longitud es de: " << longitud << " y el area de " << area << endl;
	
}
	
	
