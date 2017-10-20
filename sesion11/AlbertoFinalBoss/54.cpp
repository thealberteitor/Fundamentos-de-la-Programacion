#include<iostream>
#include<cmath>

using namespace std;

//static const double PI=3.14159;	No hace falta

class Punto2D{
	private:
		double x, y;
	public:
		
		Punto(){
			x=0;
			y=0;
		}
		double getx(){
			return x;
		}
		double gety(){
			return y;
		}	
		void setx(double valor_x){
			x=valor_x;
		}
		void sety(double valor_y){
			y=valor_y;
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
		
		double getlado(){
			return lado;
		}
		
		void setlado(double orig){
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
			return lado>otro.getlado() && punto.getx()>otro.punto.getx() && punto.gety()<otro.punto.gety();
		}
		
		bool operator==(Cuadrado otro){
			return punto.getx()==otro.punto.getx() && punto.gety()==otro.punto.gety() && lado==otro.getlado();
		}
};

class Circunferencia{
	private:
		Punto2D mipunto;
		double radio;
		
	public:
		
		Circunferencia(){
			radio=1;
		}
		
		double getRadio(){
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
		
		bool PuntoContenido(Punto2D otro_punto){
			return sqrt(pow(otro_punto.getx(),2)+pow(otro_punto.gety(),2))==radio;
		}
		
		void Traslada(double traslada_x, double traslada_y){
			mipunto.setx(mipunto.getx()+traslada_x);
			mipunto.sety(mipunto.getx()+traslada_y);
		}
		
		//Apartado A)
		double DistanciaCircunf_a_Punto(Punto2D otro){
			return sqrt(pow(mipunto.getx()-otro.getx(),2)+pow(mipunto.gety()-otro.gety(),2));
		}
		
		//Apartado B)
		/*
		double DistanciaCircunf_a_Cuadrado(Cuadrado otro){
			return sqrt(pow(mipunto.getx()-otro.punto.getx(),2)+pow(mipunto.gety()-otro.punto.gety()+otro.getlado(),2));
			//Le sumamos otro.getlado() ya que se trata de la esquina superior izquierda en vez de la inferior.
		}
		//Lo comento porque me da error en la parte privada
		*/
		
		//Apartado C)
		double DistanciaCircunf_a_Circunf(Circunferencia otra){
			return sqrt(pow(mipunto.getx()-otra.mipunto.getx(),2)+pow(mipunto.gety()-otra.mipunto.gety(),2));
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
	Punto2D punto;
	
	double punto_x, punto_y;
	double radio;
	bool contenido;
	double desplaza_x, desplaza_y;
	
	cout << "Introduzca el punto x , y: ";
	cin >> punto_x >> punto_y;
		
	cout << "Introduzca radio: " << endl;
	cin >> radio;
	
	miCircunferencia.SetRadio(radio);
	punto.setx(punto_x);
	punto.sety(punto_y);
	
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
