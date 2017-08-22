/*
Construya un programa que lea un valor T y calcule una sumatoria
*/

#include<iostream>

using namespace std;

int Factorial(int num){
	
	int total=1;
	for(int i=2; i<=num; i++){
		total*=i;
	}
	return total;
}

int main(){
	
	int valor_T, suma=0;
	
	cout << "Introduzca un valor T: ";
	cin >> valor_T;
	
	for(int i=1; i<=valor_T; i++)
		suma+=Factorial(i);
	
	cout << "La sumatoria vale: " << suma << endl;	
}
