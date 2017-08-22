/*
Construya un programa que calcule cuándo se produjo la mayor secuencia de días
consecutivos con temperaturas crecientes. El programa leerá una secuencia de reales
representando temperaturas, hasta llegar al -1 y debe calcular la subsecuencia de
números ordenada, de menor a mayor, de mayor longitud.
El programa nos debe decir la posición donde comienza la subsecuencia y su longitud.
*/

#include <iostream>
using namespace std;

int main() {
	double temp1, anterior=1000;
	int contador=1, pos=1, pos_final, longitud=1, long_final=0;
	const int TERMINADOR = -1;
	int dia=1;
	do{
		cout << "Introduzca la temperatura del dia " << dia << ": ";
		cin >> temp1;
		
		dia++;
		
		if(temp1 > anterior)   
			longitud++;
		else{
			if(longitud > long_final){   
				long_final = longitud;	
				pos_final = pos;	
			}	
				longitud = 1;
				pos = contador;	
		}
		anterior = temp1;		
		contador++;
	}while (temp1 != TERMINADOR);
	
	if (longitud == contador) 
			long_final = longitud;
	
	cout << "El dia con mayor temperatura fue de: " << pos_final << " con longitud de: " << long_final << endl;		
}		
