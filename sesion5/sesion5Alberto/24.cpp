/*

Se pide leer dos enteros min y max que representarán un rango de valores
[min,max]. El primer valor a leer, min, debe ser un número positivo y el segundo
valor max, debe ser mayor que min. El programa irá leyendo estos dos valores
hasta que el usuario los introduzca correctamente.
Una vez leídos ambos valores, el programa pedirá otro entero nuevo obligando a que
esté dentro del intervalo [min, max]. Si el usuario introduce más de 3 valores fuera
del rango, el bucle terminará y se mostrará en pantalla un mensaje indicando que
superó el número de intentos máximo. En caso contrario (el usuario introduce un valor
en el rango pedido), se mostrará en pantalla el resultado de calcular nuevo - min y
max - nuevo.
Debe resolver este
*/

#include<iostream>

using namespace std;


//Separamos entrada y salida con los cálculos
int Calcula(int valor1, int valor2){
	return valor1-valor2;
}
void Muestra(int min, int max, int nuevo){
	cout << "Nuevo-mínimo = " << Calcula(nuevo,min) << endl;
	cout << "Max-nuevo = " << Calcula(max,nuevo) << endl;
}


int main(){
	
	int min, max, nuevo;
	int contador=0;
	//Consideramos números positivos a partir del 1
	do{
		cout << "Introduzca valor mínimo y máximo: " << endl;
		cin >> min >> max;
		
		
		cout << "Introduce un número entre el mínimo y el máximo: " << endl;
		cin >> nuevo;
		
		contador++;
		
		if(contador==3){
			cout << "Número máximo de intentos permitidos " << endl;
			return 0;
		}
		
	}while(min<1 || max<=min || contador>3 || nuevo<=min || nuevo>=max);
	
	Muestra(min,max,nuevo);
	
	return 0;
}
