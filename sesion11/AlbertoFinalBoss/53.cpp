/*
Replantear la clase Cuadrado (ejercicio 50) usando la clase Punto2D (ejercicio
52) a la hora de definir variables miembro, parámetros o tipos devueltos.
*/
#include<iostream>

using namespace std;

class Punto2D{
	private:
		double x, y;
		
	public:
		Punto2D(){
			x=0;
			y=0;
		}
		
		Punto2D(double X, double Y){
			x=X;
			y=Y;
		}
		
		double Get_x(){
			return x;
		}
		
		double Get_y(){
			return y;
		}
		
		void Set_x(double X){
			x=X;
		}
		
		void Set_y(double Y){
			y=Y;
		}
};


class Cuadrado{
	private:
		Punto2D punto;
		double lado;
	public:
		Cuadrado(){
			lado=1;
		}
		
		Cuadrado(double valor_lado){
			lado=valor_lado;
		}
		
		double Get_lado(){
			return lado;
		}
		
		double Set_X(double dx){
			punto.Set_x(dx);
		}
		
		double Set_Y(double dy){
			punto.Set_y(dy);
		}
	
		void Set_lado(double orig){
			lado=orig;
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
			return lado>otro.Get_lado() && punto.Get_x()>otro.punto.Get_x() && punto.Get_y()<otro.punto.Get_y();
		}
		
		bool operator==(Cuadrado otro){
			return punto.Get_x()==otro.punto.Get_x() && punto.Get_y()==otro.punto.Get_y() && lado==otro.Get_lado();
		}			
};


int main(){
	
	Cuadrado micuadrado, micuadrado2;
	Punto2D punto;
	
	double x, y, lado;
	bool iguales;
	
	cout << "Introduzca valor de x, y, lado: " << endl;
	cin >> x >> y >> lado;
	
	micuadrado.Set_X(x);
	micuadrado.Set_Y(y);
	micuadrado.Set_lado(lado);
	
	micuadrado2.Set_X(x);
	micuadrado2.Set_Y(y);
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
