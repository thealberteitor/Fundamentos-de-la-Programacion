/*
Indique si se produce un problema de precisión o de desbordamiento en los siguientes
ejemplos y diga cuál sería el resultado final de las operaciones.
Nota. Si se desea ver el contenido de una variable real con cout, es necesario que antes
de hacerlo, se establezca el número de decimales que se quieren mostrar en pantalla.
Para ello, basta ejecutar la sentencia cout.precision(numero_digitos);
al inicio del programa. Hay que destacar que al trabajar con reales en coma flotante
(double, float, etc) siempre debemos asumir que el valor almacenado es sólo una
representación aproximada.
*/

#include<iostream>

using namespace std;

int main(){
	
	int chico, chico1, chico2;
	chico1=1234567;
	chico2=1234567;
	chico=chico1*chico2;
	/*
	El número almacinado en chico es demasiado grande 
	para un int por lo que se produce error de desbordamiento
	*/
	
	
	
	
	long grande;
	int chico1, chico2;
	chico1 = 1234567;
	chico2 = 1234567;
	grande = chico1 * chico2;
	/*
	Se produce un error de desbordamiento ya que el 
	número final no cabe en un long
	*/
	
	
	
	
	
   double real, real1, real2;
	real1 = 123.1;
	real2 = 124.2;
	resultado = real1 * real2;
	/*
	Da un resultado correcto. No se produce error
	*/





   double real, real1, real2;
	real1 = 123456789.1;
	real2 = 123456789.2;
	resultado = real1 * real2;
	/*
	Da un error de precisión ya que no se corresponde
	con el valor esperado
	*/




	double real, otro_real;
	real = 2e34;
	otro_real = real + 1;
	otro_real = otro_real - real;
	/*
	El resultado da 0 pero se produce un error de desbordamiento
	ya el 2e34 + 1 sobrepara los 16 dígitos que puede 
	almacenar double y no muestra el resultado correcto
	*/





   double real, otro_real;
	real = 1e+300;
	otro_real = 1e+200;
	otro_real = otro_real * real;
	/*
	Se produce u error de desbordamiento y da infinito
	aunque debería dar 1e+500
	*/




   float chico;
	double grande;
	grande = 2e+150;
	chico = grande;
	/*
	El tipo de variable double admite más dígitos que
	float por lo que cuando el valor de grande pasa a
	chico se produce un error de desbordamiento y da infinito.
	*/
}
