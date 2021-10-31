/*
Sobre la clase SecuenciaCaracteres, añada el método
IntercambiaComponentes para intercambiar dos componentes de la secuencia.
Por ejemplo, si la secuencia contiene {'h','o','l','a'}, después de intercambiar
las componentes 1 y 3, se quedaría con {'h','a','l','o'}
¿Qué debería hacer este método si los índices no son correctos?
Modifique la implementación del método Invierte del ejercicio 8, para que lo haga
llamando a IntercambiaComponentes.
Imprima las componentes de la secuencia desde el main, antes y después
de llamar a dicho método. Para ello, use el método ToString() de la clase
SecuenciaCaracteres.
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


//It calculates the factorial number
int factorial_of_n(int n){ 
	//we first define auxiliar var 
	int aux =1;
	
	//loop
	for(int i= 2; i<= n; i++){
		aux *=i;
	}
	//it returns the solution
	return aux;
}





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
	
}
