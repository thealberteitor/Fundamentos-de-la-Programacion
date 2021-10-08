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

int fib(int n, bool print = true)
{
  int toReturn = 0;

  if( n > 0 )
  {
    if( n < 2 )
      toReturn = 1;
    else
     toReturn = fib(n-1,false) + fib(n-2,false);

    if( print )
    {
      fib(n-1);
      std::cout << toReturn << ' ';
    }
  }

  return toReturn;
}

int main(){
	
	const int MIN = 1;
	const int MAX = 20;	
	
	int numero = lee_int_rango(MIN,MAX);
	long long int total = suma_factoriales(numero);
	
	cout << "El resultado de la sumatoria es: " << total << endl;
	cout << endl;
	
	fib(5); std::cout << '\n';
  	fib(8); std::cout << '\n';
  	return 0;
		
	system("pause");

}
