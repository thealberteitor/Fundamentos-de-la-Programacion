/*
Hacer una función que intercambie dos valores
*/


#include<iostream>

using namespace std;

void Intercambia(int &valor1, int &valor2){
	
	int aux;
	aux=valor1;
	valor1=valor2;
	valor2=aux;
}

int isPrimo(int valor){
	
	if(valor%2 == 0) return true;
	int divisor = 3;	
	while(divisor < valor){
		if(valor%divisor == 0) return true;
		divisor+=2;
	}
	return false;
}


int main(){
	
	int n1, n2;
	
	cout << "Introduca dos números: " << endl;
	cin >> n1 >> n2;
	
	Intercambia(n1, n2);
	
	cout << "Valor nuevo 1: " << n1 << " \nValor nuevo 2: " << n2 << endl;
}
