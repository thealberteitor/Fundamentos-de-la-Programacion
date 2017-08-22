/*
Se quiere generalizar el ejercicio 7 que intercambiaba el valor de dos variables al caso
de tres variables. Construya un programa que declare las variables x, y y z, lea su
valor desde teclado e intercambien entre sí sus valores de forma que el valor de x
pasa a y, el de y pasa a z y el valor de z pasa a x (se pueden declarar variables
auxiliares aunque se pide que se use el menor número posible).
*/
#include<iostream>

using namespace std;

int main(){
	
	int x, y, z;
	int aux;
	
	cout << "Introduzca tres variables: " << endl;
	cin >> x >> y >> z;
	
	//Usamos una variable auxiliar para no machacar los datos
	
	aux = y;
	y=x;
	x=z;
	z=aux;
	
	cout << x << " " << y << " " << z << endl;
}
	
	
