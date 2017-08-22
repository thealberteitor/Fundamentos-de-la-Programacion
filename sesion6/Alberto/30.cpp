/*
En el ejercicio 13 de la Relación de Problemas I se pedía escribir un programa que
leyese un valor entero de tres dígitos e imprimiese los dígitos separados por un espacio
en blanco. Haga lo mismo pero para un número entero arbitrario. Por ejemplo, si el
número es 3519, la salida sería:
3 5 1 9
*/
#include<iostream>

using namespace std;

int main(){
	
	int numero;
	const int MAX=100;
	int vector[MAX];
	int i=0;
	
	cout << "Introduzca un número: " << endl;
	cin >> numero;
	
	while(numero>0){
		vector[i]=numero%10;
		numero=numero/10;
		i++;
	}

	for(int j=i-1 ;j>=0;j--){
		cout << vector[j] << " " ;
	}
}
