/*
Resuelva el ejercicio 12 pero de una forma eficiente.
Para ello, implemente el siguiente algoritmo:
Para borrar el bloque entre izda y dcha:
Calcular num_a_borrar como dcha - izda + 1
Recorrer las componentes -i- de la secuencia
entre las posiciones dcha+1 hasta el final
Colocar la componente -i- en la posición
i - num_a_borrar
Actualizar total_utilizados
Este algoritmo resuelve el problema con un único bucle mientras que la versión ineficiente
recurría a dos bucles anidados.
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
		
		void EliminaUno(int pos){
			for(int i=pos; i<n; i++){
				vector[i]=vector[i+1];
			}
			n--;
		}
		
		void EliminaBloque(int izda, int dcha){
			int num_borrar=dcha-izda+1;
			for(int i=dcha+1; i<n; i++){
				vector[i-num_borrar]=vector[i];
				n--;
			}
		}
		
		/*ELIMINA BLOQUE EJERCICIO12
		void EliminaBloque(int izda, int dcha){
			for(int i=izda; i<=dcha; i++){
				EliminaUno(izda);
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
	int contador=0, izda, dcha;
	char num;
	
	while(num!=TERMINADOR){
		cout << "Introduzca caracter: " ;
		cin >> num;
		secuencia.Set(contador,num);
		contador++;
	}
	
	secuencia.Set_n(contador);
	
	cout << "\nIntroduzca izquierda y derecha para borrar: " << endl;
	cin >> izda >> dcha;
	
	secuencia.EliminaBloque(izda,dcha);	
		
	secuencia.Mostrar();

}
