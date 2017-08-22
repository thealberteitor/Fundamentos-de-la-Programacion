#include<iostream>

using namespace std;

int main(){
	
	//Declaración de variables
	int numero, unidades, decenas;
	
	//Entrada de datos
	cout << "Introduce un número entero: " << endl;
	cin >> numero;
	
	//Operaciones
	unidades = numero %10;
	numero = numero / 10;
	decenas = numero %10;
	numero = numero /10;
	
	//Salida de datos
	cout << "El número introducido es: " << numero << "  " << decenas << "  " << unidades << endl;
}
	

	
