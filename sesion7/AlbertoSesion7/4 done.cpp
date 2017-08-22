/*
En el ejercicio 24 de la Relación de Problemas II, se pedía leer un número en un rango.
Defina una función ???¦?t|???? para este propósito. Para ello, dicha función debe
ir leyendo números enteros (de tipo ??t) desde la entrada por defecto, hasta que se
lea un valor correcto que pertenezca al rango ????? ???? (no hay ningún límite en
el número de intentos). La función devolverá dicho valor.
Escriba un pequeño programa de prueba que lea dos números cualesquiera ??? y
???. Supondremos que el valor introducido de ??? es correcto, es decir, que será
mayor o igual que ???. A continua
*/

#include<iostream>

using namespace std;

int LeeIntRango(int min, int max){

	int numero=0, contador_aciertos=0;
	const int ACIERTOS=3;
	int suma=0;
	
	do{
		cout << "Introduzca números entre el mínimo y el máximo: " << endl;
		cin >> numero;
	
		if(numero>=min || numero<=max){
			suma+=numero;
			contador_aciertos++;
		}
	}while(contador_aciertos<ACIERTOS);
	
	return suma;
}

int main(){
	
	int min, max;
	int total;
	
	cout << "Introduce mínimo y máximo: " << endl;
	cin >> min >> max;
	
	total=LeeIntRango(min, max);
	cout << "Resultado de la suma: " << total << endl;
}
