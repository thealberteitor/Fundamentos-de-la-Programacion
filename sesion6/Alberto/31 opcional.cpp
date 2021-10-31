/*
El algoritmo de la multiplicación rusa es una forma distinta de calcular la multiplicación
de dos números enteros n  m. Para ello este algoritmo va calculando el doble del
multiplicador m y la mitad (sin decimales) del multiplicando n hasta que n tome el
valor 1 y suma todos aquellos multiplicadores cuyos multiplicandos sean impares. Por
ejemplo, para multiplicar 37 y 12 se harían las siguientes iteraciones
Iteración Multiplicando Multiplicador
1 37 12
2 18 24
3 9 48
4 4 96
5 2 192
6 1 384
Con lo que el resultado de multiplicar 37 y 12 sería la suma de los multiplicadores
correspondientes a los multiplicandos impares (en negrita), es decir
37*12=12+48+384=444
Cree un programa para leer dos enteros n y m y calcule su producto utilizando este
algoritmo. No puede utilizarse en ningún momento el operador producto *.
*/

#include<iostream>

using namespace std;

int **allocate_matrix(int row, int col){
	int **matrix = new int*[row];
	for(int i = 0; i < row; ++i) {
    		matrix[i] = new int[col]{0};
    	}
    	return matrix;
}

int **multiply_matrix(int **m1, int row1, int col1, int **m2, int row2, int col2)
{
	if (col1 != row2)
        	return nullptr;

   	auto ret = allocateMatrix(row1, col2);

    	for(int i = 0; i < row1; i++) {
        	for(int j = 0; j < col2; j++) {
            		for(int k = 0; k < col1; k++) {
                		ret[i][j] += m1[i][k] * m2[k][j];
            		}
        	}
    	}

    	return ret;
}

int main(){

	const int MAX=100;
	int multiplicador, multiplicando;
	int m[MAX];
	int n[MAX];
	int i=1;
	int total=0;
	
	cout << "Introduzca m y n: " << endl;
	cin >> multiplicando >> multiplicador;
	
	m[i-1]=multiplicando;
	n[i-1]=multiplicador;
	
	do{
		multiplicando/=2;
		m[i]=multiplicando;
		multiplicador*=2;
		n[i]=multiplicador;
		i++;
	}while(multiplicando!=1);
	
	for(int z=0; z<i;z++){
		if(m[z]%2!=0){
			total+=n[z];
		}
	}
	
	cout << "Resultado de la multiplicación: " << total << endl;
}
