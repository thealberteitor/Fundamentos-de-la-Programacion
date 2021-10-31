#include<iostream>

using namespace std;

int mcd(int a, int b){
	while (a != b){
        	if (a > b){
            		return mcd(a - b, b);
        	}
        	else{
            		return mcd(a, b - a);
        	}
    	}
    	return a;
}


int max_com_div(int a, int b) {
	int aux;
	while (b != 0) {
		aux = b;
		b = a % b;
        	a = aux;
    	}
    	return a;
}


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
	

	
