/*
Modifique la solución del ejercicio 2 usando un
algoritmo más eficiente. Observe que no hace falta ordenar todo el vector, sino únicamente
considerar los datos que son mayores que la referencia.
Aplique el siguiente algoritmo:
Recorrer las componentes del vector original
Si es mayor que la referencia, insertar dicho
valor de forma ordenada en el vector "mayores_que"
El vector "mayores_que" siempre tendrá,
como mucho, k componentes
Mientras que la versión vista en el ejercicio 2 tardaba varios segundos, esta nueva
versión tarda menos de un segundo.
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
