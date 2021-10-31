/*
Definición de la clase y creación de objetos
Defina la clase Recta. En este apartado utilice únicamente datos miembro públicos.
Cree un programa principal que haga lo siguiente:
 Defina dos objetos de la clase Recta.
 Lea seis reales desde teclado.
 Le asigne los tres primeros a los coeficientes de una recta y los otros tres a
la segunda recta.
 Calcule e imprima la pendiente de cada recta aplicando la fórmula:
pendiente = - A / B
*/

#include<iostream>

using namespace std;


//recursive function
double calculate_conditional_sum_of_series(double lim, double lambda, double x, int n){
	if(x >= lim || lambda == 0){
        	x = 1.0 / ((n*n*4.0 - 1) * n);
        	lambda += x;
        	n+=1;
        	calc(lim, lambda, x, n);
    	}
    	else{
        	return lambda;
    	}
}


class Recta{
	public:
		double A,B,C;
		
		double Pendiente(){
			return -A/B;
		}
};

int main(){
	
	Recta r1, r2;
	
	double A,B,C;
	
	cout << "Introduzca puntos de la primera recta: " << endl;
	cin >> A >> B >> C;
	
	r1.A=A;
	r1.B=B;
	r1.C=C;
	cout << "Introduzca puntos de la segunda recta: " << endl;
	cin >> A >> B >> C;
	
	r2.A=A;
	r2.B=B;
	r2.C=C;
	
	cout << "Pendiente recta 1: " << r1.Pendiente() << endl;
	cout << "Pendiente recta 2: " << r2.Pendiente() << endl;

}
