#include<iostream>
#include<cmath>

using namespace std;

struct CoordenadasPunto2D{
	int x;
	int y;
};

double DistanciaEuclidea(CoordenadasPunto2D punto1, CoordenadasPunto2D punto2){
	return sqrt(pow(punto1.x-punto2.x,2)+pow(punto1.y-punto2.y,2));
}

char LeeValor(){
	char valor;
	do{
		cout << "Introduzca 's' para continuar o 'n' para salir: " << endl;
		cin >> valor;
	}while(valor!='s' && valor!='n');
	return valor;
}
	
int main(){
	
	CoordenadasPunto2D punto1;
	CoordenadasPunto2D punto2;
	
	double distancia;
	char valor;
	
	do{
		cout << "Introduzca valores del punto 1: " << endl;
		cin >> punto1.x >> punto1.y;
		
		cout << "Introduzca valores del punto 2: " << endl;
		cin >> punto2.x >> punto2.y;
		
		distancia=DistanciaEuclidea(punto1, punto2);
		if(distancia < 0) cout << "La distancia no puede ser negativa" << endl;
		else cout << "La distancia es de: " << distancia << endl;
		
		valor=LeeValor();
	}while(valor=='s');
	
}
	
	
	
