/*
Defina la clase TablaRectangularEnteros usando
una matriz de doble corchete como dato miembro privado.
int matriz_privada[MAXIMO_FILAS][MAXIMO_COLUMNAS];
Se pretende que pueda almacenar un conjunto de filas de enteros, todas ellas con el
mismo número de columnas. Defina métodos para:
a) Obtener el número de filas y columnas utilizadas, así como el dato que haya en
una fila y columna.
b) Devolver una fila completa como un objeto de la clase SecuenciaEnteros. El
código de esta clase puede descargarse desde la siguiente dirección:
http://decsai.ugr.es/~carlos/FP/SecuenciaEnteros.cpp
c) Añadir una fila entera. La fila será un objeto de la clase SecuenciaEnteros.
d) Comprobar si es igual a otra matriz.
e) Obtener la traspuesta.
f ) Comprobar si es simétrica (sólo tiene sentido cuando sea cuadrada, es decir,
con el mismo número de filas que de columnas). Hágalo primero calculando la
traspuesta de la matriz y viendo si es igual a su simétrica, usando los métodos
anteriores.
Hágalo también comprobando directamente si cada componente es igual a su
simétrica y parando el recorrido en cuanto encuentre una componente que no lo
verifique.
g) Multiplicar dos tablas.
Construya un programa principal que lea el número de filas y columnas de una tabla,
los datos de ésta, e indique si es simétrica o no. A continuación, calcule la traspuesta
y multiplique la tabla por su traspuesta. Imprima el resultado en pantalla.
*/

#include<iostream>

using namespace std;

class SecuenciaEnteros{
	private:
	   static const int TAMANIO = 50;
	   long vector[TAMANIO];
	   int total_utilizados;
   public:
   	
   	int tamanio(){
   		return total_utilizados;
   	}
   	
   	SecuenciaEnteros(int tam): total_utilizados(tam){}
   	
   	void SetValor(int i, int valor){
   		vector[i]=valor;
   	}
   	
   	int GetValor(int i){
   		return vector[i];
   	}
};



class TablaRectangularEnteros{
	private:
		static const int MAXIMO=100;
		int matriz[MAXIMO][MAXIMO];
		int util_fils, util_cols;
	public:
		
		//Apartado a
		int Getfils(){
			return util_fils;
		}
		
		int Getcols(){
			return util_cols;
		}
		
		///////////////////////
		
		TablaRectangularEnteros(int fils, int cols): util_fils(fils), util_cols(cols){}
		
		
		int GetValor(int fil, int col){
			return matriz[fil][col];
		}
		
		void SetValor(int i, int j, int valor){
			matriz[i][j]=valor;
		}
		
		//Apartado b
		
		SecuenciaEnteros DevuelveFila(int fil){
			SecuenciaEnteros salida;
			for(int i=0; i<util_cols; i++){
				salida.SetValor(i, matriz[fil][i]);
			}
			return salida;
		}
		//Apartado c
		TablaRectangularEnteros AniadeFila(SecuenciaEnteros fila){
			TablaRectangularEnteros salida(util_fils+1, util_cols);
			for(int i=0; i<util_fils; i++){
				for(int j=0; j<util_cols; j++){
					salida.SetValor(i,j, matriz[i][j]);
				}
			}
			int contador=0;
			for(int i=util_fils-2; i<util_fils; i++){
				for(int j=0; j<util_cols; j++){
					salida.SetValor(i,j, fila.GetValor(contador));
					contador++;
				}
			}
			return salida;
		}
		
		
		
		//Apartado e
		bool operator==(TablaRectangularEnteros nuevo){
			bool iguales=true;
			if(util_fils==nuevo.Getfils() && util_cols==nuevo.Getcols()){
				for(int i=0; i<util_fils && iguales; i++){
					for(int j=0; j<util_cols && iguales; j++){
						if(matriz[i][j]!=nuevo.GetValor(i,j))
							iguales=false;
					}
				}		
			}else
				iguales=false;
				
			return iguales;
		}
		
		//Apartado e
		TablaRectangularEnteros Traspuesta(){
			TablaRectangularEnteros salida;
			
			for(int i=0; i<util_fils; i++){
				for(int j=0; j<util_cols; j++){
					salida.SetValor(j,i,matriz[i][j]);
				}
			}
		}
		
		//Apartado f
		bool Es_simetrica(){
			bool simetrica = true;
			for(int i=0; i<util_fils; i++){
				for(int j=0; j<util_cols; j++){
					if(matriz[i][j]!=matriz[j][i]){
						return false;
					}
				}
			}
			return simetrica;
		}
			
		//Apartado g
		TablaRectangularEnteros operator*(TablaRectangularEnteros nuevo){
			TablaRectangularEnteros salida;
			for(int i=0; i<util_fils; i++){
				for(int j=0; j<util_cols; j++){
					for(int k=0; k<util_fils; k++){
						salida.SetValor(i,j, salida.GetValor(i,j)+matriz[i][k]*nuevo.GetValor(k,j));
					}
				}
			}
			return salida;
		}
		
		//////////////
		void Mostrar(){
			for(int i=0; i<util_fils; i++){
				for(int j=0; j<util_cols; j++){
					cout << matriz[i][j] << " ";
				}
				cout << endl;
			}
		}
		
		TablaRectangularEnteros operator=(TablaRectangularEnteros nuevo){
			if(*this!=&nuevo){
				util_fils=nuevo.Getfils();
				util_cols=nuevo.Getcols();
				for(int i=0; i<util_fils; i++){
					for(int j=0; j<util_cols; j++){
						matriz[i][j]=nuevo.GetValor(i,j);
					}
				}
			}
			return *this;
		}
		
	};
	
int main(){
	
	int fils, cols,valor;
	cout << "Introduzca filas y columnas: " << endl;
	cin >> fils >> cols;
	
	TablaRectangularEnteros tabla(fils, cols);
	TablaRectangularEnteros traspuesta(fils, cols);
	TablaRectangularEnteros producto(fils, cols);
	
	for(int i=0; i<fils; i++){
		for(int j=0; j<cols; j++){
			cout << "Introduzca valor "<<i<<","<<j<<": ";
			cin >> valor;
			tabla.SetValor(i,j,valor);
		}
	}
	
	if(tabla.Es_simetrica())
		cout << "Es simétrica " << endl;
	else
		cout << "No es simétrica " << endl;
		
	
	traspuesta=tabla.Traspuesta();
	tabla.Mostrar();
	
	cout << endl << endl;
	
	cout << "Tabla original * traspuesta: " << endl;
	producto=tabla*traspuesta;
	
	producto.Mostrar();
}

