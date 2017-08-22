/*
Ampliar el ejercicio 52 de la relación de problemas III y definir una clase PuntoND
para poder representar un punto de cualquier dimensión N. En el constructor se le
indicará la dimensión del punto; el resto de datos miembro y métodos deberán
adaptarse al caso n-dimensional
*/
#include<iostream>
#include<cmath>

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
		void Set_x(double valor_x){
			x=valor_x;
		}
		void Set_y(double valor_y){
			y=valor_y;
		}
};

class PuntoND{
	private: 
		static const int MAX=100;
		double vectorX[MAX];
		double vectorY[MAX];
		double n;
	public:
		
		double Get_n(){
			return n;
		}
		
		void Set_n(int valor){
			n=valor;
		}
		
		double SetX(int pos, int valor){
			vectorX[pos]=valor;
		}
		
		double SetY(int pos, int valor){
			vectorY[pos]=valor;
		}
		
		PuntoND(){
			n=0;
		}
		
		PuntoND(int valorx, int valory){
			for(int i=0; i<n;i++){
				vectorX[i]=valorx;
				vectorY[i]=valory;
			}
		}
		
		double Modulo(){
			int total=0;
			for(int i=0; i<n; i++){
				total+=pow(vectorX[i],2) + pow(vectorY[i],2);
			}
			return sqrt(total);
		}
			
		void desplazarX(int valor){
			for(int i=0; i<n; i++){
				vectorX[i]+=valor;
			}
		}
		
		void desplazarY(int valor){
			for(int i=0; i<n; i++){
				vectorY[i]+=valor;
			}
		}
		
	
};

int main(){
	
	PuntoND multipunto;
	
	int tam;
	int x,y;
	
	cout << "Introduzca el tamaño del punto: " << endl;
	cin >> tam;
	
	
	multipunto.Set_n(tam);
	
	for(int i=0; i<multipunto.Get_n(); i++){
		cout << "Introduzca valor (x,y): " << endl;
		cin >> x >> y;
		multipunto.SetX(i,x);
		multipunto.SetY(i,y);
	}
	
	cout << "Módulo: " << multipunto.Modulo();
	
}
