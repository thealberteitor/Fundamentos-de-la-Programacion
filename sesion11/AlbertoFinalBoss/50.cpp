/*
. [Ejercicio examen febrero 2013] Se desea implementar una clase para representar
figuras geométricas de tipo cuadrado. Un cuadrado viene definido por la coordenada
de la esquina inferior izquierda (x; y) y la longitud del lado.
a) Definir los atributos de la clase y el constructor o constructores que estime
oportunos.
b) Definir los métodos que considere adecuados. Al menos se deben de incluir los
siguientes: (1) cálculo del área, (2) cálculo del perímetro, (3) comprobar si un
cuadrado tiene mayor área que otro y (4) comprobar si un cuadrado está
completamente dentro de otro; al margen de los anteriores, se podrán añadir cuantos
métodos estime oportunos
c) Sobrecargar el operador de igualdad ==. Entendemos que dos cuadrados son
iguales si tienen la misma coordenada de la esquina inferior izquierda y el mismo
lado.
Hacer un programa para probar la clase anterior
*/

#include<iostream>

using namespace std;

class Cuadrado{
	private:
		double x,y;
		double lado;
	public:
		
		Cuadrado(){
			lado=1;
			x=0;
			y=0;
		}
		
		Cuadrado(double valorx, double valory, double valor_lado){
			x=valorx;
			y=valory;
			lado=valor_lado;
		}
		
		double Get_lado(){
			return lado;
		}

		void Set_lado(double orig){
			lado=orig;
		}
		
		double Get_x(){
			return x;
		}
		
		double Get_y(){
			return y;
		}
		
		void Set_x(double x){
			this->x=x;
		}
		
		void Set_y(double y){
			this->y=y;
		}
		
		double Area(){
			return lado*lado;
		}
		
		double Perimetro(){
			return lado*4;
		}
		
		bool Area_mayor(Cuadrado otro){
			return Area()>otro.Area();
		}
		
		bool Dentro(Cuadrado otro){
			return lado>otro.Get_lado() && x>otro.Get_x() && y<otro.Get_y();
		}
		
		bool operator==(Cuadrado otro){
			return x==otro.Get_x() && y==otro.Get_y() && lado==otro.Get_lado();
		}			
};

int main(){
	
	Cuadrado micuadrado, micuadrado2;
	double x, y, lado;
	bool iguales;
	
	cout << "Introduzca valor de x, y, lado: " << endl;
	cin >> x >> y >> lado;
	
	micuadrado.Set_x(x);
	micuadrado.Set_y(y);
	micuadrado.Set_lado(lado);
	
	micuadrado2.Set_x(x);
	micuadrado2.Set_y(y);
	micuadrado2.Set_lado(lado);
	
	if(micuadrado==micuadrado2)
		cout << "Son iguales " << endl;
	else
		cout << "Son distintos " << endl;
		
	/*
	Para calcular el valor de los métodos simplemente hay que declarar las variables 
	y llamar a los métodos correspondientes
	*/
}
