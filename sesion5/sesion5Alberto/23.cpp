/*

Amplie el ejercicio 12 (Población) de la relación de problemas I.
Esta nueva versión del programa, además de los datos ya pedidos en dicho ejercicio,
se le pedirá al usuario que introduzca un número de años (será el último dato leído)
Debe leer cada dato con un filtro conveniente. Por ejemplo, las tasas de natalidad,
mortalidad y emigración deben ser enteros entre 0 y 1000, mientras que la población
inicial debe ser un entero positivo.
El programa debe calcular e imprimir el número total de habitantes transcurridos dichos
años.
Además, el programa también calculará el número de años que tienen que pasar
hasta que haya, como mínimo, el doble de la población inicial. Imprima dicho número
de años, junto con la población que habrá pasado ese tiempo.

*/

#include<iostream>

using namespace std;

int main(){
	
	double natalidad , mortalidad, migracion;
	int anios;
	const int MAX = 1000;
	double poblacion;
	
	do{
		cout << "Introduce población inicial: " << endl;
		cin >> poblacion;
		
		cout << "Introduce tasa de natalidad: " << endl;
		cin >> natalidad;
		
		cout << "Introduce tasa de mortalidad: " <<endl;
		cin >> mortalidad;
		
		cout << "Introduce tasa de migración: " << endl;
		cin >> migracion;
		
		cout << "Introduzca número de años: "  << endl;
		cin >> anios;
	}while(natalidad<0 || natalidad>MAX || mortalidad<0 || mortalidad>MAX || poblacion<0);
	
	int total;
	int contador=0;
	int poblacion_doble=2*poblacion;
	int anios_necesarios_doblar;
	bool doble_superado=false;

	do{
		total = poblacion + (natalidad/1000)*poblacion - (mortalidad/1000)*poblacion + (migracion/1000)*poblacion;
		poblacion = total;
		
		if(poblacion_doble<=poblacion){
			anios_necesarios_doblar=contador;
			doble_superado=true;
		}
		contador++;
		
	}while(!doble_superado && contador<anios);
	
	
	cout << "Número de habitantes pasados " << anios << " años: " << poblacion << endl;
	cout << "Años que han de pasar hasta doblar la población: " << anios_necesarios_doblar << endl;
	
}

