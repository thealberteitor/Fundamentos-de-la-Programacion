/*
Recupere la solución del ejercicio 8 de esta relación de problemas sobre la función
gaussiana. En vez de trabajar con funciones, plantee la solución con una clase. Debe
diseñar la clase teniendo en cuenta que la función matemática gaussiana viene determinada
unívocamente por el valor de la esperanza y la desviación, es decir, son estos
dos parámetros lo que distinguen a una función gaussiana de otra.
*/

#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1415927;

int Potencia(int num, int n){
	int acum=1;
	for(int i=1; i<=n; i++){
		acum*=num;
	}
	return acum;
}

class Gaussiana{
	
	private:
		double esperanza;
		double desviacion;
	
	public:
		Gaussiana(double esperanza, double desviacion){
			this->esperanza = esperanza;
			this->desviacion = desviacion; 
		}
	
		double Evalua(double abscisa){
			return exp(- (pow((abscisa - esperanza)/desviacion , 2)) / 2) /(desviacion * sqrt(2*PI));
		}
	
		double AreaHasta(double x){
	
			const double b0 = 0.2316419;
			const double b1 = 0.319381530;
			const double b2 = -0.356563782;
			const double b3 = 1.781477937;
			const double b4 = -1.821255978;
			const double b5 = 1.330274429;
			double area;
			double t;
	
			t = 1 / (1 + b0*x);
			area = 1 - Evalua(x) * (b1*t + b2*t*t + b3*t*t*t + b4*t*t*t*t + b5*t*t*t*t*t);
	
			return area;
		}
	
		double Get_Esperanza(){
			return esperanza;
		}
		double Get_Desviacion(){
			return desviacion;
		}
};


int main(){
   
	double esperanza, desviacion, abscisa;

   cout << "Introduce el valor de la media: ";
   cin >> esperanza;
   cout << "Introduce el valor de la desviación típica: ";
   cin >> desviacion;

   Gaussiana funcion(esperanza, desviacion); 

   cout << "Introduce un valor de abscisa: ";
   cin >> abscisa;
   
   cout  << "Valor en " << abscisa << " : " << funcion.Evalua(abscisa);
   cout  << "Área hasta " << abscisa << " : "  << funcion.AreaHasta(abscisa);

}
