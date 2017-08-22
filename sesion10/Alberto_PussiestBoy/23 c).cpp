/*
Datos miembro privados
Cambie ahora los datos miembro públicos y póngalos privados. Tendrá que añadir
métodos para asignar y ver los valores de los datos miembro. Añada métodos
para asignar un valor a cada uno de los tres datos miembro. Modifique el main
para tener en cuenta estos cambios.
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
		
		void SetValorA(int valor){
			A=valor;
		}
		
		void SetValorB(int valor){
			B=valor;
		}
		
		void SetValorC(int valor){
			C=valor;
		}	
};

int main(){
	
	Recta r1, r2;
	
	double A,B,C;
	double pendiente1, pendiente2;
	
	cout << "Introduzca puntos de la primera recta: " << endl;
	cin >> A >> B >> C;
	
	r1.SetValorA(A);
	r1.SetValorB(B);
	r1.SetValorC(C);
	
	cout << "Introduzca puntos de la segunda recta: " << endl;
	cin >> A >> B >> C;
	
	r2.SetValorA(A);
	r2.SetValorB(B);
	r2.SetValorC(C);

	pendiente1=r1.Pendiente();
	pendiente2=r2.Pendiente();
	
	cout << "Pendiente recta 1: " << pendiente1 << endl;
	cout << "Pendiente recta 2: " << pendiente2 << endl;

}
	
	

	
	
	
	
