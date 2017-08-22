#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	const double PI=3.1417592;
	
	//Declaración de las variables
	double esperanza;
	double desv_tipica;
	double gaussiana;
	double valor_x;
	
	//Entrada de datos
	cout << "Introduzca valor de la esperanza: " << endl;
	cin >> esperanza;
	
	cout << "Introduzca valor de la desviación típica: " << endl;
	cin >> desv_tipica;
	
	cout << "Introduzca el valor de la abscisa: " << endl;
	cin >> valor_x;
	
	gaussiana = 1/(desv_tipica*sqrt(2*PI))*exp(-0.5*pow(((valor_x-esperanza)/desv_tipica),2));  
	
	//Salida de datos
	cout << "El valor que toma " << valor_x << " es: " << gaussiana << endl;
	
}
