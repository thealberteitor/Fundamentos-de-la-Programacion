/*
Se quiere generalizar el ejercicio 7 que intercambiaba el valor de dos variables al caso
de tres variables. Construya un programa que declare las variables x, y y z, lea su
valor desde teclado e intercambien entre sí sus valores de forma que el valor de x
pasa a y, el de y pasa a z y el valor de z pasa a x (se pueden declarar variables
auxiliares aunque se pide que se use el menor número posible).
*/

#include<iostream>

using namespace std;

//function to calculate maximum between 2 numbers
int calculate_max(int number1, int number2) {
	// local variable declaration
	int max;

	if(num1 > num2){
		max = num1;
	}
	else{
		max = num2;
	}

	return max; 
}

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
	
	
