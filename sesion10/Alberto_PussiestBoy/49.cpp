/*
Defina la clase Circunferencia (con los datos miembro que consiere
oportunos, usando los tipos y accesos que entienda más adecuados). Añada
métodos para (1) obtener la longitud de la circunferencia, (2) obteber el área del
círculo interior, (3) saber si contiene un punto cualquiera dado y (4) trasladar la
circunferencia un desplazamiento dado (en x e y).
Cree un programa principal que lea el centro y radio de una circunferencia, las
coordendas de un punto y muestre en pantalla la longitud de la circunferencia, el
área del círculo y nos diga si el punto está o no dentro de la circunferencia.
Posteriormente, el programa nos pedirá un desplazamiento, el cual aplicaremos a
la circunferencia; tras el desplazamieto,
*/


static const double PI=3.14159;

#include<iostream>
#include<cmath>

using namespace std;

class Punto{
	private:
		double x, y;
	public:
		
		Punto(){
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

class Circunferencia{
	private:
		Punto mipunto;
		double radio;
		
	public:
		
		Circunferencia(){
			radio=1;
		}
		
		double GetRadio(){
			return radio;
		}
		
		void SetRadio(double radio){
			this->radio=radio;
		}
		
		double Area(){
			return PI*radio*radio;
		}
		
		double Longitud(){
			return 2*PI*radio;
		}
		
		bool PuntoContenido(Punto otro_punto){
			return sqrt(pow(otro_punto.Get_x(),2)+pow(otro_punto.Get_y(),2))==radio;
		}
		
		void Traslada(double traslada_x, double traslada_y){
			mipunto.Set_x(mipunto.Get_x()+traslada_x);
			mipunto.Set_y(mipunto.Get_x()+traslada_y);
		}
		
		
};

void MensajeContenido(bool contenido){
	if(contenido)
		cout << "Está contenido. " << endl;
	else
		cout << "No está contenido. " << endl;
}
		
int main(){
		
	Circunferencia miCircunferencia;
	Punto punto;
	
	double punto_x, punto_y;
	double radio;
	bool contenido;
	double desplaza_x, desplaza_y;
	
	cout << "Introduzca el punto x , y: ";
	cin >> punto_x >> punto_y;
		
	cout << "Introduzca radio: " << endl;
	cin >> radio;
	
	miCircunferencia.SetRadio(radio);
	punto.Set_x(punto_x);
	punto.Set_y(punto_y);
	
	cout << "Longitud: " << miCircunferencia.Longitud() << endl;
	cout << "Área: " << miCircunferencia.Area() << endl;
	
	contenido = miCircunferencia.PuntoContenido(punto);
	MensajeContenido(contenido);
	
	
	
	cout << "Introduzca valor a desplazar 'x' e 'y': " << endl;
	cin >> desplaza_x >> desplaza_y;
	
	miCircunferencia.Traslada(desplaza_x, desplaza_y);
	
	contenido = miCircunferencia.PuntoContenido(punto);
	MensajeContenido(contenido);
		
}
		
