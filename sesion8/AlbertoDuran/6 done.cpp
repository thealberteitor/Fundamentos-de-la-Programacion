#include<iostream>

using namespace std;

int lee_int_rango(int min, int max) {
   int dato;
   do{
      cout << "Introduzca un número: ";
      cin >> dato;
   }while (min>dato || max<dato);
   
   return dato;
}

long long int factorial(int num){
	
	long long int total=1;
	for(int i = 2; i <= num; i++){
		total *= i;
	}
	return total;
}

long long int suma_factoriales(int n){
	
	int suma = 0;
	
	for(int i = 1;  i <= n; i++)
		suma += factorial(i);
	
	return suma;
}

int main(){
	
	const int MIN = 1;
	const int MAX = 20;	
	
	int numero = lee_int_rango(MIN,MAX);
	long long int total = suma_factoriales(numero);
	
	cout << "El resultado de la sumatoria es: " << total << endl;
	cout << endl;
		
	system("pause");

}
