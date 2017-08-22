/*
Construya un programa que lea desde teclado tres variables correspondientes a un
número de horas, minutos y segundos, respectivamente. A continuación, el programa
debe calcular las horas, minutos y segundos dentro de su rango correspondiente. Por
ejemplo, dadas 312 horas, 119 minutos y 1291 segundos, debería dar como resultado
13 días, 2 horas, 20 minutos y 31 segundos. El programa no calculará meses, años,
etc. sino que se quedará en los días.
Como consejo, utilice el operador / que cuando trabaja sobre datos enteros, obtiene
la división entera. Para calcular el resto de la división entera, use el operador %.
*/

#include<iostream>

using namespace std;

int main(){
	
	int sec, min, hora;
	int dia;
	
	cout << "Introduzca hora, min y sec " ;
	cin >> hora >> min >> sec;
	
	/*
	Cada if comprueba si la variable es mayor que 59, en 
	cuyo caso la divide y se incrementa la unidad siguiente
	*/
	if(sec>59){
		min = min + sec/60;
		sec %= 60;
	}if(min>59){
		hora = hora + min/60;
		min %= 60;
	}if(hora>59){
		dia = hora/24;
		hora %= 24;
	}
	
	cout << dia << " dias " << hora << " horas " << min << " minutos " << sec << " segundos " <<endl;
}
