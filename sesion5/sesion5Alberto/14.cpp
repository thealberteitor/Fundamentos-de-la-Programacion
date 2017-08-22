/* Cree un programa que lea el número de un año e indique si es bisiesto o no. Un año
es bisiesto si es múltiplo de cuatro, pero no de cien. Excepción a la regla anterior son
los múltiplos de cuatrocientos que siempre son bisiestos. Por ejemplo, son bisiestos:
1600,1996, 2000, 2004. No son bisiestos: 1700, 1800, 1900, 1998, 2002.
*/
//SIN MEZCLAR E/S CON CÁLCULOS
#include<iostream>

using namespace std;

int main(){
	
	bool bisiesto=false;
	int anio;
	
	cout << "Introduzca año: " << endl;
	cin >> anio;
	
	if((anio%4==0 && anio%100!=0)||(anio%400==0))
		bisiesto=true;
	
	if(bisiesto)
		cout << "Es bisiesto " << endl;
	else
		cout << "No es bisiesto " << endl;
}

