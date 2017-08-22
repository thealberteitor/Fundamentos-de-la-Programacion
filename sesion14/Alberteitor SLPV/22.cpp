/*
(Examen Febrero 2015) En este ejercicio no hay que construir ninguna función o
clase. Todo se programará en el main. Defina dos matrices de reales original
y suavizada de tamaño 50 x 30. Lea desde teclado los valores de la matriz
original, obligando a que sea simétrica. Para ello, lea el número de filas n y a
continuación introduzca los n  n datos de la matriz.
Construya la matriz suavizada acorde a las siguientes indicaciones:
a) La tabla resultante será simétrica.
b) Los valores de la diagonal principal de la tabla resultante serán iguales a los de
la tabla original.
c) Los valores del triángulo superior de la tabla resultante se calculan de la siguiente
manera: si (i; j) es una posición en el triángulo superior de la tabla resultante,
su valor es el valor medio de los valores que ocupan las posiciones de
las columnas j; j + 1; : : : ; n .. 1 en la fila i de la tabla original.
*/

#include<iostream>

using namespace std;


class Matriz{
	private:
		static const int COLS=30;
		static const int FILS=50;
		int matriz[FILS][COLS];
		int util_fils, util_cols;
	public:
		
		int Getfils(){
			return util_fils;
		}
		
		int Getcols(){
			return util_cols;
		}
		
		Matriz(){
			util_fils=0;
			util_cols=0;
		}
		
		void Setn(int n){
			util_fils=n;
			util_cols=n;
		}
		
		int GetValor(int i, int j){
			return matriz[i][j];
		}
		
		void SetDim(int fils, int cols){
			util_fils=fils;
			util_cols=cols;
		}
		
		Matriz(int fils, int cols){
			util_fils=fils;
			util_cols=cols;
		}
		
		void Set(int i, int j, int valor){
			matriz[i][j]=valor;
		}
		
		void Mostrar(){
			for(int i=0; i<util_fils; i++){
				for(int j=0; j<util_cols; j++){
					cout << matriz[i][j] << " ";
				}
				cout << endl;
			}
		}
		
		bool Simetrica(){
			bool simetrica=true;
			for(int i=0; i<util_fils; i++){
				for(int j=0; j<util_cols; j++){
					if(matriz[i][j]!=matriz[j][i]){
					simetrica=false;
					}
				}
			}
			return simetrica;
		}
		
		/*
		Matriz& operator=(Matriz &orig){
			if(this!=&orig){
				SetDim(orig.Getfils(), orig.Getcols());
				for(int i=0; i<util_fils; i++){
					for(int j=0; j<util_cols; j++){
						matriz[i][j]=orig.Get(i,j);
					}
				}
			}
			return *this;
		}
		*/
		
		Matriz& operator=(Matriz &orig){
			double valor=0, veces=0;
			if(this!=&orig){
				SetDim(orig.Getfils(), orig.Getcols());
				for(int i=0; i<util_fils; i++){
					for(int j=0; j<util_cols; j++){
						if(i==j){
							matriz[i][j]=orig.GetValor(i,j);
						}else if(j>i){
								valor+=orig.GetValor(i,j);
								veces++;
						}
					}
				}
				double final=valor/veces;
				for(int i=0; i<util_fils; i++){
					for(int j=0; j<util_cols; j++){
						if(j!=i){
							matriz[i][j]=final;
						}
					}
				}
				
			}
			return *this;
		}
		
};

int main(){
	
	Matriz original, suavizada;
	int n, valor;
	bool simetrica;
	
	cout << "Introduzca dimensión de la matriz (simétrica): " << endl;
	cin >> n;
	
	original.Setn(n);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << "Introduzca valor " << i << " " << j << ": ";
			cin >> valor;
			original.Set(i,j, valor);
			
		}
	}
	simetrica=original.Simetrica();
	if(simetrica){
		suavizada=original;
		suavizada.Mostrar();
	}
	else{
		cout << "Error, la matriz no es simétrica" << endl;
	}
	
	
}
