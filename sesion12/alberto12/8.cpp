/*
Añada los métodos
EsPalindromo, Invierte a la clase SecuenciaCaracteres que implementen
las tareas descritas en el ejercicio 1 de esta relación de problemas.
Incluya un programa principal de prueba similar al del ejercicio 1.
*/

#include<iostream>

using namespace std;

class SecuenciaCaracteres{
	private:
		static const int MAX=100;
		int n;
		char vector[MAX];
	public:
		
		void Set(int pos,int valor){
			pos=valor;
		}
		
		int Getn(){
			return n;
		}
		
		int Lleno(){
			return n==MAX;
		}
		
		void Aniade(char caracter) {
			if(n<MAX)
				vector[n] = caracter;
				n++;
		}
		
		bool Es_palindromo(){
			bool palindromo=true;
			for(int i=0; i<n; i++){
				if(vector[i]!=vector[n-i-1])
					palindromo=false;	
			}
			return palindromo;
		}
		
		SecuenciaCaracteres Invierte(){
			int contador=0;
			SecuenciaCaracteres salida;
			for(int i=n; i>=0; i--){
				salida.vector[contador]=vector[i];
				contador++;
			}
			return salida;
		}
		
		char GetComponente(int i) { 
			return vector[i]; 
		}
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
	
}
