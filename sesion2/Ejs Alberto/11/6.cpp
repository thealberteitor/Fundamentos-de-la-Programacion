#include<iostream>

using namespace std;

int main(){
	
	//Declaración de constantes
	const double SEC_POR_MIN = 60;
	const double SEC_POR_HORA = 3600;
	
	//Declaración de variables
	int sec1, min1, hora1, total1;
	int sec2, min2, hora2, total2;
	int resultado;
	
	//Entrada de datos para los dos instantes 
	cout << "Introduzca instante inicial (hora min sec): " << endl;
	cin >> hora1 >> min1 >> sec1;
	
	cout << "Introduzca instante final (hora min sec): " << endl;
	cin >> hora2 >> min2 >> sec2;
	
	//Operaciones
	total1 = hora1*SEC_POR_HORA + min1*SEC_POR_MIN + sec1;
	total2 = hora2*SEC_POR_HORA + min2*SEC_POR_MIN + sec2;
	
	resultado = total2-total1;
	
	//Salida de datos
	cout << "Hay " << resultado << " segundos entra los dos instantes";
}
