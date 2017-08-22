/*
Implementar la clase punto2D para representar un punto en R2
definido por dos coordenadas (x, y)
a) Definir los atributos de la clase y el constructor o constructores que estime
oportunos. Incluir una constante NUMERO_COMPONENTES e inicializarla a 2.
b) Definir los métodos y operadores que considere adecuados
Hacer un programa para probar la clase anterior. Entre otros, probad el correcto
funcionamiento de: (1) el operador de asignación en el caso de objetos y (2) el
constructor copia
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
		
		double Get_x(){
			return x;
		}
		
		double Get_y(){
			return y;
		}
		
		Punto2D(Punto2D &nuevo){
			x=nuevo.Get_x();
			y=nuevo.Get_y();
		}
		
		void Set_x(double X){
			x=X;
		}
		
		void Set_y(double Y){
			y=Y;
		}
		
		Punto2D operator=(Punto2D nuevo){
			nuevo.Set_x(x);
			nuevo.Set_y(y);
			return nuevo;
		}
		
		bool operator==(Punto2D nuevo){
			return (x==nuevo.Get_x() && y==nuevo.Get_y()); 
		}
};

int main(){
	
	Punto2D punto;
	double x, y;
	
	cout << "Introduzca x e y: ";
	cin >> x >> y;
	
	punto.Set_x(x);
	punto.Set_y(y);
	
	Punto2D otro_punto(punto);
	
	if(otro_punto==punto)
		cout << "El operator = y el constructor de copias funcionan correctamente: " << endl;
	else
		cout << "Vas a suspender fp " << endl;
		
}	
