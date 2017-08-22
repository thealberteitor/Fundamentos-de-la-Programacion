/*
Se quiere calcular la moda de un vector de caracteres, es decir, el carácter
que más veces se repite. Por ejemplo, si el vector fuese
{'l','o','s',' ','d','o','s',' ','c','o','f','r','e','s'}
los caracteres que más se repiten son 'o' y 's' con un total de 3 apariciones. La
moda sería cualquiera de ellos, por ejemplo, el primero encontrado 'o'.
Para almacenar de forma conjunta el carácter y la frecuencia usaremos el siguiente
struct:
struct FrecuenciaCaracter{
char caracter;
int frecuencia;
}
El campo caracter contendrá el carácter en cuestión ('o') y en el campo
frecuencia el conteo de la moda (3).
Construya un programa que lea caracteres con cin.get() (repase lo visto al inicio
de esta relación de problemas) hasta que el usuario introduzca el carácter #. Almacene
todos los valores en un vector de caracteres. A continuación, calcule la moda y
muéstrela en pantalla junto con su frecuencia.
Para calcular la moda, se recomienda que use un vector auxiliar en el que almacene
los caracteres que ya se han procesado en algún momento anterior.
*/

#include <iostream>
using namespace std;

struct FrecuenciaCaracter {
	char caracter;
	int frecuencia;
};

class SecuenciaCaracteres{
	private:
		
		static const int MAX = 3000000;
		char secuencia[MAX];
		int n;
		
	public:
		
		int Getn() { 
			return n; 
		}
		
		void Aniade(char caracter){
			if(n<MAX)
				secuencia[n] = caracter;
			n++;
		}
	
		char GetComponente(int i) { 
			return secuencia[i]; 
		}
		
		bool Lleno(){ 
			return (n == MAX); 
		}
		
		FrecuenciaCaracter CalcularModa() {
			
			int ascii[256] = {0};		
			
			for(int i = 0; i < Getn(); i++) {
				int j = GetComponente(i);
				ascii[j]++;
			}
			
			FrecuenciaCaracter fmax;
			fmax.frecuencia = 0;
			 
			for(int i = 0; i < 256; i++) {
				if(ascii[i] >= fmax.frecuencia) { 
					fmax.caracter = i;
					fmax.frecuencia = ascii[i];
				}
			}
			return fmax;
		}		
			
};

int main(){
	
	const char TERMINADOR = '#';
	SecuenciaCaracteres vector;
	FrecuenciaCaracter frecuenciamax;
	cout << "Introduzca una secuencia: " << endl;
	char lectura = cin.get();
	
	while(lectura!=TERMINADOR && !vector.Lleno()){
		vector.Aniade(lectura);
		lectura = cin.get();
	}
	frecuenciamax = vector.CalcularModa();
	
	cout << "El carácter más repetido es " << frecuenciamax.caracter << " que se repite " << frecuenciamax.frecuencia << " veces" << endl;
	
}
	
