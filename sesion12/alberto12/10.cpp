/*
Recupere la solución del ejercicio 4. Defina el método Moda dentro de
la clase SecuenciaCaracteres. Este método debe devolver un dato de tipo
FrecuenciaCaracter (struct) Aplíquelo sobre el texto del Quijote sin espacios
en blanco.
*/

#include<iostream>

using namespace std;

class SecuenciaCaracteres{
	private: 
		static const int MAX=3000000;
		char vector[MAX];
		int n;
	public:
		
		void Set(int pos, int valor){
			vector[pos]=valor;
		}
		
		int Getn(){
			return n;
		}
		
		int Lleno(){
			return n==MAX;
		}
		
		int Get(int i){
			return vector[i];
		}
		
		bool Es_palindromo(){
			bool palindromo=true;
			for(int i=0; i<MAX; i++){
				if(vector[i]!=vector[MAX-i-1])
					palindromo=false;	
			}
			return palindromo;
		}
		
		char GetComponente(int i) { 
			return vector[i]; 
		}
		
		void Aniade(char caracter) {
			if(n<MAX)
				vector[n] = caracter;
				n++;
		}
		
		SecuenciaCaracteres Invierte(){
			int contador=0;
			SecuenciaCaracteres salida;
			for(int i=MAX; i>=0; i--){
				salida.vector[contador]=vector[i];
				contador++;
			}
			return salida;
		}
		
		SecuenciaCaracteres IntercambiaComponentes(int comp1, int comp2){
			SecuenciaCaracteres salida;
			
			for(int i=0; i<=MAX; i++)
				salida.vector[i]=vector[i];
				
			salida.vector[comp1]=vector[comp2];
			salida.vector[comp2]=vector[comp1];
			
			return salida;
		}	
		
		string ToString(){
	   	string cadena;
	   	cadena.reserve(Getn());
	
	   	for(int i = 0; i < n; ++i)
	         cadena.push_back(vector[i]);
	
	      return cadena;
	   }
		
};



class NumString {       //class
	public:             //public or private
	int myNum;        // integer num
   	string myString;  // string var
};


int main(){
	const char TERMINADOR = '#';
	SecuenciaCaracteres vector;
	
	cout << "Introduzca una secuencia: " << endl;
	char lectura = cin.get();
	
	while(lectura!=TERMINADOR && !vector.Lleno()){
		vector.Aniade(lectura);
		lectura = cin.get();
	}
	
	bool es = vector.Es_palindromo();
	
	if(es)
		cout << "Es palíndromo " << endl;
	else
		cout << "No es palíndromo " << endl;
	
	vector.Invierte();
	int tope = vector.Getn();
	for(int i = 0; i<tope; ++i) 
		cout << vector.GetComponente(i);
		
	cout << vector.ToString();
	
	cout << endl;
	
	//we first create our object
	NumString objectation;

	// Access attributes and set values
	NumString.myNum = 16; 
	NumString.myString = "Example is forward to give a candle";

	// Print attribute values
	cout << NumString.myNum << "\n";
	cout << NumString.myString;
	return 0;
}
