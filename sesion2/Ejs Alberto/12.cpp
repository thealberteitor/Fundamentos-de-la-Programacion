#include<iostream>

using namespace std;

//sum two numbers and return the result
int sum(int a, int b){
  int n;
  n=a+b;
  return n;
}

//substract two numbers and return the result
int sub(int a, int b){
  int n;
  n=a-b;
  return n;
}


int main(){
	
	double poblacion;
	double natalidad , mortalidad, migracion;
	int anio1;
	int anio2;
	int anio3;
	
	cout << "Introduce población inicial: " << endl;
	cin >> poblacion;
	
	cout << "Introduce tasa de natalidad: " << endl;
	cin >> natalidad;
	
	cout << "Introduce tasa de mortalidad: " <<endl;
	cin >> mortalidad;
	
	cout << "Introduce tasa de migración: " << endl;
	cin >> migracion;
	
	//Hacemos los cálculos correspondientes a cada año
	/*
	El ejemplo de prueba no está bien ya que la tasa de mortalidad se debe restar y no sumar
	*/
	anio1 = poblacion + (natalidad/1000)*poblacion - (mortalidad/1000)*poblacion + (migracion/1000)*poblacion;
	cout << anio1 << endl;
	anio2 = anio1 + (natalidad/1000)*anio1 - (mortalidad/1000)*anio1 + (migracion/1000)*poblacion;
	anio3 = anio2 + (natalidad/1000)*anio2 - (mortalidad/1000)*anio2 + (migracion/1000)*poblacion;
	
	cout << "A los 3 años la población será de: " << anio3 << " habitantes." << endl;
	/*
	
	//Para no repetir código hacemos bucle do-while;
	
	int total;
	int contador=0;
	
	do{
		total = poblacion + (natalidad/1000)*poblacion - (mortalidad/1000)*poblacion + (migracion/1000)*poblacion;
		poblacion = total;
		contador++;
	}while(contador<3);
	
	cout << poblacion << endl;
	
	*/
}
