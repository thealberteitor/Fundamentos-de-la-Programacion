/*
¿Cuántas veces aparece el dígito 9 en todos los números
que hay entre el 1 y el 100? Por ejemplo, el 9 aparece una vez en los números 19 y
92 mientras que aparece dos veces en el 99. Pretendemos diseñar un algoritmo que
responda a esta sencilla pregunta, pero de forma suficientemente generalizada. Para
ello, se pide construir un programa que lea una cifra (entre 1 y 9), dos enteros min
y max y calcule el número de apariciones del dígito cifra en los números contenidos
en el intervalo cerrado [min, max].
*/

#include <iostream>

using namespace std;
	
	int CuentaValor(int num, int valor){
		int contador=0;
		while(num>=10){
			if(num%10==valor){
				contador++;
			}
		num=num/10;
		}
		return contador;
	}
	
	int Cuenta(int min, int max, int valor){
		int contador=0;
		for(int i=min; i<=max; i++){
			contador+=CuentaValor(i,valor);
		}
		return contador;
	}
	
	
int main(){
	int min, max , valor;
	cout << "Introduce valor de min, max y valor: ";
	cin >> min >> max >> valor;
	
	int total = Cuenta(min,max,valor);
	
	cout << "Hay un total de " << total << " apariciones " << endl;
}
	
	
	
	
	
	
