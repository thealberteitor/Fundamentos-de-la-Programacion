/*
19. En este ejercicio, no hay que construir ninguna clase ni función. Es un ejercicio sobre
recorridos de una matriz declarada directamente en el main.
Leed desde teclado dos variables util_filas y util_columnas y leed los datos
de una matriz de enteros de tamaño util_filas x util_columnas. Sobre dicha
matriz, se pide lo siguiente:
a) Calcular la traspuesta de la matriz, almacenando el resultado en otra matriz.
b) (Examen Septiembre 2011) La posición de aquel elemento que sea el mayor de
entre los mínimos de cada fila. Por ejemplo, dada la matrizM (3  4),
9 7 4 5
2 18 2 12
7 9 1 5
el máximo entre 4, 2 y 1 (los mínimos de cada fila) es 4 y se encuentra en la
posición (0; 2).
c) Ver si existe un valor MaxiMin, es decir, que sea a la vez, máximo de su fila y
mínimo de su columna.
d) Leer los datos de otra matriz y multiplicar ambas matrices (las dimensiones de la
segunda matriz
*/#include<iostream>

using namespace std;


class Matriz{
	private:
		static const int TAM=30;
		int matriz[TAM][TAM];
		int util_fils, util_cols;
	public:
		
		Matriz(){
			util_fils=0;
			util_cols=0;
		}
		
		Matriz(int fils, int cols){
			util_fils=fils;
			util_cols=cols;
		}
		
		int Get(int i, int j){
			return matriz[i][j];
		}
		
		void Set(int i, int j, int valor){
			matriz[i][j]=valor;
		}
		
		void Traspuesta(Matriz &aux){
			for(int i=0; i<util_fils; i++){
				for(int j=0; j<util_cols; j++){
					aux.Set(j,i,matriz[i][j]);
				}
			}
		}
		
		void Mostrar(){
			for(int i=0; i<util_fils; i++){
				for(int j=0; j<util_cols; j++){
					cout << matriz[i][j] << " ";
				}
				cout << endl;
			}
		}
		
	
		int MaximodelosMinimos(){
			int maximo, minimo;
			
			int vector[util_fils];
			
			for(int i=0; i<util_fils; i++){
				minimo=matriz[i][0];
				for(int j=0; j<util_cols; j++){
					if(matriz[i][j]<minimo){
						minimo=matriz[i][j];
					}
				}
				vector[i]=minimo;
			}
			
			maximo=vector[0];
			for(int i=0; i<util_fils; i++){
				if(vector[i]>maximo){
					maximo=vector[i];
				}
			}
			return maximo;
				
		}
		
		//Precondicion: deben poder ser multiplicables
		Matriz Multiplicacion(Matriz otra){
			
			Matriz resultado(util_fils, util_cols);
			
			for(int i=0; i<util_fils; ++i)
        		for(int j=0; j<util_cols; ++j)
            	for(int z=0; z<util_cols; ++z)
                	resultado.Set(i,j, otra.Get(i,j) + matriz[i][z] * otra.Get(z,j));
         
         return resultado;
                	
      }
		
};

int main(){
	
	int fil, col, valor;
	cout << "Introduce filas y columnas: " << endl;
	cin >> fil >> col;
	
	Matriz mimatriz(fil,col);	
	Matriz aux(col,fil);
	
	for(int i=0; i<fil; i++){
		for(int j=0; j<col; j++){
			cout << "Introduce valor " << i << ","<< j << ": ";
			cin >> valor;
			mimatriz.Set(i,j,valor);
		}
	}
	
	
	cout << "Apartado B): El máximo de los mínimos de cada fila: " << mimatriz.MaximodelosMinimos() << endl;
	
	
	
	mimatriz.Traspuesta(aux);
	aux.Mostrar();
}
















