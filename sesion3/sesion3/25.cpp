/*
Construya un programa que lea un carácter (supondremos que el usuario introduce
una mayúscula), lo pase a minúscula y lo imprima en pantalla. Hágalo sin usar las
funciones toupper ni tolower de la biblioteca cctype. Para ello, debe considerarse
la relación que hay en C++ entre los tipos enteros y caracteres.
*/

#include<iostream>

using namespace std;

int main(){
	
	/*
	Calculamos la diferencia del valor de 'a' y 'A' en la tabla ascii
	y se lo sumamos a la letra inicial para pasarla a minúscula
	*/
	const int DIFERENCIA='a'-'A';
	char letra;
	char letra_min;
	
	cout << "Introduzca una letra: " << endl;
	cin >> letra;
	
	letra_min = letra+DIFERENCIA;
	cout << letra_min << endl;
}
