/*
Recupere la solución del ejercicio 4. Defina ahora una función
???¦?t????r¦??????? para leer un entero mayor o igual que un número dado
(éste será un parámetro a la función). Para ello, dicha función debe ir leyendo
números enteros (de tipo ??t) desde la entrada por defecto, hasta que se lea un valor
correcto que sea mayor o igual que el número especificado. La función devolverá
dicho valor.
Utilice esta función para leer el valor de ??? del ejercicio 4, obligando a que sea mayor
que ???.
*/

#include<iostream>

using namespace std;

int LeeIntMayorIgualQue(int n){
	
	int res;
	
	do{
		cout << "Introduzca un número mayor que " << n << endl;
		cin >> res;
	}while(res<n);
	
	return res;
}

int main(){
	
	const int NUM_DADO=125;
	int res=LeeIntMayorIgualQue(NUM_DADO);
	
	cout << "El resultado es: " << res << endl;
}
