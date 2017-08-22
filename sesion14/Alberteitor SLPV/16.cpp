/*
[Series ascendentes]. (Examen Septiembre Doble Grado 2013) Defina lo que sea necesario
para calcular el número de series ascendentes de una secuencia de caracteres.
Por ejemplo, la secuencia ttuvghtwwbde tiene 3 series ascendentes que son
ttuv, ghtww, bde.
Para leer el mensaje cifrado debe leer caracteres con cin.get() (repase lo visto al
inicio de esta relación de problemas) hasta que el usuario introduzca el carácter #. A
continuación, el programa mostrará la cadena descodificada.
Ejemplo de entrada: ttuvghtwwbde# .... Salida correcta: 3
Ejemplo de entrada: gfed# .... Salida correcta: 4
Ejemplo de entrada: # .... Salida correcta: 0
Finalidad: Recorrido
*/
#include<iostream>

using namespace std;

class SecuenciaCaracteres{
	private:
		static const int TAM=1000;
		char vector[TAM];
		int n;
	public:
		
		SecuenciaCaracteres(){
			n=0;
		}
		
		int Getn(){
			return n;
		}
		
		void Set(int pos, char valor){
			vector[pos]=valor;
		}
		
		void Aniade(char valor){
			vector[n]=valor;
			n++;
		}
		
		void Mostrar(){
			for(int i=0; i<n; i++)
				cout << vector[i];
		}
		
		int NumSeriesAscendentes(){
			int total=0;
			for(int i=1; i<n; i++){
				if(vector[i]<vector[i-1]){
					total++;
				}
			}
			return total+1;
		}
			
};

int main(){
	
	SecuenciaCaracteres secuencia;
	int numero;
	
	const char TERMINADOR = '#';
	char aux;

	cout << "Ingrese una secuencia (" << TERMINADOR << " para terminar): ";
	aux = cin.get();
	
	while (aux != TERMINADOR){
		secuencia.Aniade(aux);
		aux = cin.get();
	}
	
	numero=secuencia.NumSeriesAscendentes();
	cout << "Hay un total de " << numero << " series ascendentes " << endl;
	
	
}
