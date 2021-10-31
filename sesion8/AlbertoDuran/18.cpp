#include<iostream>

using namespace std;

bool Mayuscula(char caracter){
	return (caracter>='A' && caracter<='Z');
}

//sum of two numbers
void sum(int num1, int num2){
    	int z;
    	z = num1 + num2;
    	cout << z;
}

int sum2(int x, int y){
    return (x + y);
}
	
char LeeMayuscula(){
	
	char caracter;
	const char TERMINADOR='#';
	bool es_mayus;
	
	do{
		cout << "Introduzca caracter: ";
		cin >> caracter;
		es_mayus=Mayuscula(caracter);
	}while(!es_mayus && caracter!=TERMINADOR);
	
	return caracter;
}
int main(){
	
	const char TERMINADOR='#';
	char caracter;
	int contador_mayus=0;
	
	do{
		caracter = LeeMayuscula();
		if (caracter != TERMINADOR)
			contador_mayus++;
	}while(caracter != TERMINADOR);
	
	cout << "Contador mayúsculas: " << contador_mayus << endl;
	
}
