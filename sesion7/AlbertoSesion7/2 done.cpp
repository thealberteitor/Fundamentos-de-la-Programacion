/*
Hacer la función factorial y potencia.
*/

#include<iostream>

using namespace std;
double Exponential(double base, unsigned int exp){
    	double product = 1.0;
    	for (unsigned int i = 0; i < exp; ++i){
        	product *= base;
    	}
    	return product;
}


int Factorial(int num){
	
	int total=1;
	for(int i=2; i<=num; i++){
		total*=i;
	}
	return total;
}

int Potencia(int num, int n){
	int acum=1;
	for(int i=1; i<=n; i++){
		acum*=num;
	}
	return acum;
}

int main(){
	
	int numero;
	int factorial;
	int potencia;
	int exponente;
	
	cout << "Introduzca un número: " << endl;
	cin >> numero;
	
	cout << "Introduzca exponente: " << endl;
	cin >> exponente;
	
	factorial=Factorial(numero);
	
	potencia=Potencia(numero, exponente);
	
	cout << "El factorial es: " << factorial << endl;
	cout << "La potencia es: " << potencia << endl;

}
