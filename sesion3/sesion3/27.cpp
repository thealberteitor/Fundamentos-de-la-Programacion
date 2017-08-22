/*
Escriba una expresión lógica que sea verdadera si una variable de tipo carácter llamada
letra es una letra minúscula y falso en otro caso.
Escriba una expresión lógica que sea verdadera si una variable de tipo entero llamada
edad es menor de 18 o mayor de 65.
Escriba una expresión lógica que sea verdadera si una variable de tipo entero llamada
adivine está entre 1 y 100.
Escriba una expresión lógica que sea verdadera si un año es bisiesto. Los años bisiestos
son aquellos que o bien son divisibles por 4 pero no por 100, o bien son divisibles
por 400.
Escriba un programa que lea las variables letra, edad, adivine y anio, calcule el
valor de las expresiones lógicas anteriores e imprima el resultado. Debe almacenarse
el resultado de las expresiones lógicas en variables de tipo bool.
Tenga en cuenta que cuando se imprime por pantalla (con cout) una expresión lógica
que es true, se imprime 1. Si es false, se imprime un 0.
*/


#include<iostream>

using namespace std;

int main(){
	
	//Declaración de variables
	char letra;
	int edad, adivine, anio;
	bool expr_letra=false,expr_edad=false;
	bool expr_entero=false, expr_anio=false;
	
	cout << "Introduzca letra, edad, nº entero y año" <<endl;
	cin >> letra >> edad >> adivine >> anio;
	
	//Cálculos de las expresiones booleanas
	if(letra >= 'a' && letra <= 'z')
		expr_letra=true;
	
	if(edad<18 || edad >65)
		expr_edad=true;
	
	if(adivine>=1 && adivine <=100)
		expr_entero=true;
	
	if((anio%4==0 && anio%100!=0) || anio%400==0)
		expr_anio=true;
		
	cout << expr_letra << expr_edad << expr_entero << expr_anio <<endl;
}
		 
