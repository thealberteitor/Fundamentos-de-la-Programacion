/*
Hacer la sucesión de Fibonacci con una función recursiva
*/

#include<iostream>

using namespace std;



//return fibonacci series
int Fibonacci(int n){
	if(n==0 || n==1){
      		return n;
	}
   	else{
      		return Fibonacci(n - 2) + Fibonacci(n - 1);
	}
}


//check if number is prime
bool isPrime(int n){
	for(int i=2; i<n/2; i++)
		if(n%i == 0){
			return false;
		}
	return true;
}


int main(){
	
	int n;
	
	cout << "Introduzca número n de la sucesión: " << endl;
	cin >> n;
	
	for(int i=1; i<=n; i++){
		cout << fibo(i) << " " ;
	}
}
	
