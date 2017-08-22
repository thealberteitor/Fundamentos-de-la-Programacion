/*
[Ejercicio examen febrero 2015] Un intervalo es un espacio métrico comprendido
entre dos valores o cotas, a y b, siendo a la cota inferior y b la cota superior. Cada
extremo de un intervalo pueden ser abierto o cerrado, y se nota respectivamente por
(,) y [,]. Se quiere implementar la clase Intervalo.
a) Definir los datos miembro de la clase y los constructores que estime oportunos.
Debe considerar el intervalo vacío como un intervalo válido y éste debe estar
asociado al constructor sin parámetros. En este problema, no se consideran
intervalos con extremos infinitos
b) Definir los métodos que considere adecuados. Al menos se deben de incluir los
siguientes: (1) comprobar si un intervalo es vacío y (2) comprobar si un valor dado
está dentro del intervalo; al margen de los anteriores, se podrán añadir cuantos
métodos estime oportunos.
Hacer un programa para probar la clase anterior
*/

#include<iostream>

using namespace std;

class Intervalo{
	private:
		double a,b;
	public:
		
		Intervalo(){
			a=0;
			b=0;
		}
		
		Intervalo(double A, double B){
			a=A;
			b=B;
		}
		
		double Get_a(){
			return a;
		}
		
		double Get_b(){
			return b;
		}
		
		void Set_a(double A){
			a=A;
		}
		
		void Set_b(double B){
			b=B;
		}
		
		bool Vacio(){
			return (a==0 && b==0);
		}
		
		bool Valor_dentro(double valor){
			return (valor>a && valor<b);
		}
};

int main(){
	
	Intervalo miintervalo;
	double a, b;
	double valor;
	
	cout << "Introduzca valor a, b: ";
	cin >> a >> b;
	
	cout << "Introduzca valor: " << endl;
	cin >> valor;
	
	miintervalo.Set_a(a);
	miintervalo.Set_b(b);
	
	if(miintervalo.Vacio())
		cout << "Está vacío " << endl;
	else
		cout << "No está vacío " << endl;
		
	if(miintervalo.Valor_dentro(valor))
		cout << "El valor está contenido en el intervalo " << endl;
	else
		cout << "El valor no está contenido en el intervalo " << endl;
		
}
		
		
