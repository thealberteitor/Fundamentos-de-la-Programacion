/*
Se dispone de un conjunto de
reales positivos y se quiere construir otro vector mayores_que que contenga los k
primeros valores que son mayores o iguales que otro valor de referencia. Los valores
que se obtengan como resultado deben estar ordenados de menor a mayor.
Por ejemplo, si el vector original es
{5.2 2.5 7.3 4.2 3.1 4.9}
y el valor de referencia es 4.3, el vector mayores_que debe quedar así:
{4.9 5.2 7.3}
Construya un programa que vaya leyendo datos desde teclado e introdúzcalos en un
vector. La entrada de datos termina con el -1. A continuación lea el real de referencia
y el entero k Calcule el vector mayores_que e imprímalo en pantalla.
Aplique el siguiente algoritmo:
Copiar el vector original en "mayores_que"
Ordenar el vector "mayores_que" de menor a mayor
(utilizar el algoritmo de ordenación por inserción)
Seleccionar los k primeros que sean mayores que la referencia
*/

#include<iostream>

using namespace std;

/*
void OrdenaVector(int v[], int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(v[j]<v[i]){
				int aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
	}
}
*/


void OrdenaInsercion(int v[], int n){
	int a_desplazar;
	int izda, i;
	
	for(izda = 1; izda < n; izda++){ 
 		a_desplazar = v[izda]; 
   	for(i = izda; i > 0 && a_desplazar < v[i-1]; i--) 
   		v[i] = v[i-1]; 
 		v[i] = a_desplazar;
 	}
}
void LeerVector(int v1[], int &n){
	int num;
	n=0;
	const int TERMINADOR=-1;
	while(num!=TERMINADOR){
		cout << "Introduzca número: ";
		v1[n]=num;
		cin >> num;
		n++;
	}
}

int main(){
	
	const int TAM=100;
	int v1[TAM];
	int mayores_que[TAM];
	
	int k,n;

	LeerVector(v1,n);
	
	for(int i=0; i<n; i++)
		mayores_que[i]=v1[i];
		
	OrdenaInsercion(mayores_que, n);
	
	cout << "Introduzca un número para mostrar los k mayores: " << endl;
	cin >> k;
	
	for(int i=0; i<n-1; i++){
		if(k<mayores_que[i])
			cout << mayores_que[i] << " ";
	}
						
}
