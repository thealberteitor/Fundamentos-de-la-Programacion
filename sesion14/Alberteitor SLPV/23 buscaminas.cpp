/*
23. (Examen Septiembre 2015) Buscaminas es un juego muy conocido cuyo objetivo es
encontrar todas las minas existentes en un tablero rectangular, sin abrir ninguna. Si el
jugador abre una mina, pierde la partida.
Se pide definir la clase TableroBuscaMinas conteniendo lo siguiente:
a) Para representar el tablero se trabajará con una matriz de datos 5030 en la que
todas las filas tienen el mismo número de columnas y los datos son de tipo bool.
Contendrá un valor true en caso de haber una mina en la casilla especificada
y false en caso contrario. Esta matriz será un dato miembro de la clase y al
principio, todos los valores estarán a false.
b) Un método para incluir una mina en una determinada casilla.
c) Un método que reciba las coordenadas (i; j) de una casilla y devuelva un valor
entero que indique el número de minas que rodean a la misma (será un número
entre 0 y 8). En caso de que la casilla contenga una mina, se devolverá el valor
..1.
Hay que tener especial cuidado con las casillas que hay en los bordes de la matriz
ya que la casilla en la posición [0][0], por ejemplo, sólo tiene tres vecinos
rodeándola.
Incluya un pequeño programa de prueba para asignar algunas minas y obtener las
minas que hay alrededor de algunas casillas.
*/

#include<iostream>
#include<cmath>
#include <time.h>
#include<stdlib.h>

using namespace std;



class TableroBuscaMinas{
	private:
		static const int FILS=50;
		static const int COLS=30;
		bool tablero[FILS][COLS];
		int util_fils, util_cols;
		
	public:
		
		int Fils() const{
			return util_fils;
		}
		
		int Cols() const{
			return util_cols;
		}
		
		TableroBuscaMinas(int fil, int col){
			util_fils=fil;
			util_cols=col;
		}
		
		void Inicializar(){
			for(int i=0; i<util_fils; i++){
				for(int j=0; j<util_cols; j++){
					tablero[i][j]==false;
				}
			}
		}
		
		void InsertarMina(int fil, int col){
			tablero[fil][col]=true;
		}
		
		bool HayMina(int fil, int col){
			return (tablero[fil][col]==true);
		}
		
		bool PosValida(int i, int j){
			return (i>=0 && i<util_fils && j>=0 && j<util_cols);
		}
		
		int ContadorMinaAlrededor(int fil, int col){
			int contador=0;
			for(int i=fil-1; i<fil+2; i++){
				for(int j=col-1; j<col+2; j++){
					if(HayMina(i,j))
						contador++;
				}
			}
			return contador;
		}
		
		void Lee(){
			const char TERMINADOR='N';
			bool otra;
			char valor;
			int fil, col;
			bool fil_correctas=true, col_correctas=true;
			do{
				cout << "¿En que posición desea insertar la mina?: ";
				cin >> fil >> col;
				
				if(fil>util_fils || fil<0){
					fil_correctas=false;
				}
				if(col>util_cols || col<0){
					col_correctas=false;
				}
				
				if(fil_correctas && col_correctas){
					if(HayMina(fil,col)){
						cout << "Ya hay una mina en la posición " << fil << " " << col;
					}else
						InsertarMina(fil,col);
				}else{	
					cout << "Valores Introducidos fuera del tablero. Error :( ";
				}
				cout << "\n¿Desea introducir otra mina?: (S/N) ";
				cin >> valor;
			}while(valor!=TERMINADOR);
		}
		
		/*
		void Dimension(){
			int util_fil, util_col;
			cout << "Introduzca número de filas y columnas del tablero: ";
			cin >> util_fil >> util_col;
			SetDimension(util_fil, util_col);
		}
		*/
		
		void Mostrar(){
			for(int i=0; i<util_fils; i++){
				for(int j=0; j<util_cols; j++){
					if(HayMina(i,j))
						cout << "*" << "|";
					else
						cout << "-" << "|";
				}
				cout << endl;
			}
		}
		
		void SetBombas(int nbombas){
			srand(time(NULL));
			int x=rand();
			int y=rand();
	   	int i=1;
	    	while(i<=nbombas){
	      	x = rand()%util_fils;
	         y = rand()%util_cols;
	         tablero[x][y] = true;
	         i++;
   		}
		}
		
		void SetNum(){
			int num;
      	for(int i=0; i<util_fils; i++){
	         for(int j=0; j<util_cols; j++){
	      		if(!HayMina(i,j)){
	               tablero[i][j] = ContadorMinaAlrededor(i,j);
	            }
	         }
    		}
 		}
		
		
};


int main(){
	
	static const int NUM_BOMBAS=5;
	int valor;

	int util_fil, util_col;
	cout << "Introduzca número de filas y columnas del tablero: ";
	cin >> util_fil >> util_col;
	TableroBuscaMinas juego(util_fil, util_col);


	cout << "Desea introducir las minas a mano(1) o aleatoriamente?(2): ";
	cin >> valor;
	switch(valor){
		case 1:{
			juego.Inicializar();
			juego.Lee();
			juego.Mostrar();
			break;
		}
		case 2:{
			juego.Inicializar();
			juego.SetBombas(NUM_BOMBAS);
			juego.Mostrar();
			break;
		}
		default:{
			cout << "Opción incorrecta " << endl;
		}
	}
	
	
	int filpos, colpos, contador;
	cout << "¿En qué posición desea saber las minas de alrededor(filpos,colpos)? " << endl;
	cin >> filpos >> colpos;
	contador=juego.ContadorMinaAlrededor(filpos,colpos);
	cout << "Hay un total de: " << contador << " minas alrededor de la casilla introducida ";
		
}
	
	
		
		
	
	
		
		
		
		
	
		
