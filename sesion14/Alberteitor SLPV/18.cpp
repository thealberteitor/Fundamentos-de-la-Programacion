/*
18. Definir la clase VectorCuadrados que incluya entre sus datos miembros un
vector de objetos Cuadrado correspondiente a la clase definida en los ejercicios
50 y 53 de la relación de problemas III .
a) Definir los datos miembro de la clase y los constructores que estime
oportunos.
b) Definir los métodos que considere adecuados. Al menos se deben de incluir
...... .............. ...... ...................... ................ ...... ...................... ........ ...... ................ ........ ................
................................................................................................................................consideraremos
una relación de orden inducida por el área: dos cuadrados serán iguales si sus
áreas son iguales, y un cuadrado será menor que otro (resp. mayor) si su área es
menor (resp. mayor). Se aconseja sobrecargar los operadores ==, < y > en la
clase Cuadrado
Hacer un programa para probar la clase anterior
*/

#include<iostream>

using namespace std;

class Punto2D{
	private:
		double x, y;
		
	public:
		Punto2D() : Punto2D(0, 0){
		}
		
		Punto2D(double X, double Y) : x(X), y(Y){ //las constantes solo se pueden inicializar en la lista de inicialización.
		}
		
		Punto2D(const Punto2D &otro) : x(otro.x), y(otro.y){ //sobrecargar el constructor copia.
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
		
		void Set_X(double dx){
			punto.Set_x(dx);
		}
		
		void Set_Y(double dy){
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
		
		bool operator>(Cuadrado otro){
			return Area()>otro.Area();
		}
		
		bool operator<(Cuadrado otro){
			return Area()<otro.Area();
		}
		
		bool Dentro(Cuadrado otro){
			return lado>otro.Get_lado() && punto.Get_x()>otro.punto.Get_x() && punto.Get_y()<otro.punto.Get_y();
		}
		
		bool operator==(Cuadrado otro){
			return Area()==otro.Area();
		}
		
		Cuadrado& operator=(Cuadrado &otro){
			if(this!=&otro){
				punto.Set_x(otro.punto.Get_x());
				punto.Set_y(otro.punto.Get_y());
				Set_lado(otro.Get_lado());
			}
			return *this;
		}
};

class VectorCuadrados{
	private:
		static const int TAM=100;
		Cuadrado vector[TAM];
		int total_cuadrados;
	public:
		
		int Getcuadrados(){
			return total_cuadrados;
		}
		
		VectorCuadrados(){
			total_cuadrados=0;
			Cuadrado vector=0;
		}
		
		VectorCuadrados(int tamanio){
			total_cuadrados=tamanio;
		}
		
		void OrdenaVectorCuadrados(){
			for(int i=0; i<total_cuadrados; i++){
				for(int j=i+1; j<total_cuadrados; j++){
					if(vector[j]<vector[i]){
						Cuadrado aux=vector[i];
						vector[i]=vector[j];
						vector[j]=aux;
					}
				}
			}
		}
};
	
int main(){
	
	VectorCuadrados mivector(5);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
			
			
			
		
		
		
		
		
