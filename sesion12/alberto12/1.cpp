/*
Tenga en cuenta la observación al inicio de esta relación
de problemas sobre la lectura de los caracteres. Para poder leer caracteres, incluyendo
los espacios en blanco, hay que usar caracter = cin.get(), en vez de
cin >> caracter.
Implemente algoritmos para realizar las siguientes tareas:
a) Comprobar si el vector es un palíndromo, es decir, que se lee igual de izquierda a
derecha que de derecha a izquierda. Por ejemplo, {'a','b','b','a'} sería
un palíndromo, pero {'a','c','b','a'} no lo sería. Si la secuencia tiene un
número impar de componentes, la que ocupa la posición central es descartada,
por lo que {'a','b','j','b','a'} sería un palíndromo.
b) Invertir el vector. Si éste contenía, por ejemplo, los caracteres
{'m','u','n','d','o'}, después de llamar al método se quedará con
{'o','d','n','u','m'}.
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
		
		bool Es_palindromo(){
			bool palindromo=true;
			for(int i=0; i<n/2; i++){
				if(vector[i]!=vector[n-i-1])
					palindromo=false;	
			}
			return palindromo;
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
		
		int Lleno(){
			return n==MAX;
		}
		
		void Aniade(char caracter) {
			if(n<MAX)
				vector[n] = caracter;
				n++;
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
}
