#include<iostream>

using namespace std;

int main(){
	
	//Declaración de variables
	double salario_base;
	
	//Precondición: el salario debe ser positivo
	cout << "Introduzca salario base: " << endl;
	//Entrada de datos
	cin >> salario_base;
	
	//Salida de datos
	cout << "El salario con el 2% de subida es: " << salario_base*1.02 << endl;
	cout << "El salario con el 3% de subida aplicado a la anterior subida es de: " << (salario_base*1.02)*1.03 << endl;
}


