/*
Política de acceso a los datos miembros
En vez de usar un método para asignar un valor a cada dato miembro, defina un
único método SetCoeficientes para asignar los tres a la misma vez.
Observe que los métodos permiten definir la política de acceso a los datos miembro.
Si tengo previsto cambiar por separado los coeficientes de la recta, usaré
métodos de asignación individuales. En caso contrario, usaré un único método
que modifique a la misma vez todos los datos miembro. Incluso pueden dejarse
en la clase ambos tipos de métodos para que así el cliente de la clase pueda usar
los que estime oportunos en cada momento. Por ahora, mantenga únicamente el
método de asignación en bloque SetCoeficientes.
*/

#include<iostream>

using namespace std;

class Recta{
	private:
		double A,B,C;
	
	public:
		
		double Pendiente(){
			return -A/B;
		}
		
		void SetCoeficientes(int valorA, int valorB, int valorC){
			A=valorA;
			B=valorB;
			C=valorC;
		}
		
};

int main(){
	
	Recta r1, r2;
	
	double A,B,C;
	double pendiente1, pendiente2;
	
	cout << "Introduzca puntos de la primera recta: " << endl;
	cin >> A >> B >> C;

	r1.SetCoeficientes(A,B,C);
	
	cout << "Introduzca puntos de la segunda recta: " << endl;
	cin >> A >> B >> C;
	
	r2.SetCoeficientes(A,B,C);

	pendiente1=r1.Pendiente();
	pendiente2=r2.Pendiente();
	
	cout << "Pendiente recta 1: " << pendiente1 << endl;
	cout << "Pendiente recta 2: " << pendiente2 << endl;

}
