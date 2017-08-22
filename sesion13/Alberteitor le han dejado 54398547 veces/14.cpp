/*
El algoritmo del ejercicio 11 es muy ineficiente
ya que requiere trasladar muchas veces muchas posiciones (usa dos bucles anidados).
Para comprobarlo, recupere el texto
http://decsai.ugr.es/~carlos/FP/Quijote_con_ruido.txt
En él aparecen numerosas ocurrencias del carácter '~' (código ASCII 126) como
ruido en el texto y se quieren eliminar. Si aplica el algoritmo ineficiente, la ejecución
puede tardar más de 12 minutos.
Para resolver eficientemente este problema se propone utilizar dos variables,
posicion_lectura y posicion_escritura que nos vayan indicando, en cada
momento, la componente que se está leyendo y el sitio dónde tiene que escribirse.
Por ejemplo, supongamos que en un determinado momento la variable
posicion_lectura vale 6 y posicion_escritura 3. Si la componente en la
posición 6 es el carácter a borrar, simplemente avanzaremos posicion_lectura.
En caso contrario, la colocaremos en la posición 3 y avanzaremos una posición ambas
variables.
Implemente este algoritmo y observe la diferencia de tiempo al ejecutarlo sobre el
Quijote, ya que ahora el tiempo de ejecución es de unos 8 milisegundos.
Como ampliación: si quiere saber con exactitud el tiempo de ejecución, puede utilizar
un objeto de la clase Cronometro tal y como se vio en el ejercicio 24 de la relación
de problemas III.
*/

#include<iostream>

using namespace std;

class SecuenciaCaracteres{
	private:
		static const int TAM=100;
		char vector[TAM];
		int n;
	public:
		
		int Get_n(){
			return n;
		}
		
		void Set_n(int valor){
			n=valor;
		}
		
		void Set(int pos, int valor){
			vector[pos]=valor;
		}
		
		void Elimina(int pos){
			for(int i=pos; i<n; i++){
				vector[i]=vector[i+1];
			}
			n--;
		}
		// EJERCICIO 11
		void EliminaOcurrencias(char borrar){
			int j;
			for(int i=0; i<n; i++){
				if(vector[i]==borrar){
					Elimina(i);
					i--;	
				}
			}
		}
		
		/*
		int PrimeraOcurrenciaEntre(int izda, int dcha, char buscado){
			int i = izda; 
			bool encontrado = false;
	
			while(i <= dcha  &&  !encontrado)
				if(vector[i] == buscado)
					encontrado = true;
				else
					i++;
	
			if(encontrado)
				return i;
			else
				return -1;
		}
		
		
		
		void EliminaOcurrencias(char borrar){
			int pos_escritura, pos_lectura;
			int pos_encontrado;
	
			if(n>0){
				pos_escritura = 1;
	
				for(pos_lectura=1; pos_lectura<n; pos_lectura++){
					pos_encontrado = PrimeraOcurrenciaEntre(0, pos_escritura-1, vector[pos_lectura]);
	
					if(pos_encontrado == -1){      
						vector[pos_escritura] = vector[pos_lectura];
						pos_escritura++;
					}
				}
	
				n = pos_escritura;
			}
			
		}
		*/
		
		void Mostrar(){
			for(int i=0; i<n-1; i++){
				cout << vector[i] << " ";
			}
		}
};


int main(){
	
	SecuenciaCaracteres secuencia;
	const char TERMINADOR='#';
	int contador=0;
	char num, borrar;
	
	while(num!=TERMINADOR){
		cout << "Introduzca caracter: " ;
		cin >> num;
		secuencia.Set(contador,num);
		contador++;
	}

	secuencia.Set_n(contador);
	
	cout << "¿Qué carácter desea borrar?: ";
	cin >> borrar;
	
	secuencia.EliminaOcurrencias(borrar);
	
	secuencia.Mostrar();
	
	
}
