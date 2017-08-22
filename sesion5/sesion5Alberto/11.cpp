/*
Recupere la solución del ejercicio 5 sobre el cómputo de la nómina de los trabajadores
de un centro de atención telefónica. Implemente ahora el siguiente criterio para la
subida salarial. Se aplicará una subida del 4% a los empleados que han resuelto más
de 30 casos y una subida del 2% si el grado de satisfacción media de los usuarios
es mayor o igual que 4.0. Ambas subidas son compatibles, es decir, si un trabajador
cumple las dos condiciones, se le aplicarán ambas subidas.
Resuelva este ejercicio considerando que la nueva subida del 2% se realiza sobre el
salario inicial y no sobre el resultado de haber aplicado, en su caso, la otra subida del
4%.
Ejemplo de entrada: 8.5 150 32 5 .... Salida correcta: 1351.5
Ejemplo de entrada: 8.5 150 29 5 .... Salida correcta: 1300.5
Ejemplo de entrada: 7.5 130 24 3 .... Salida correcta: 975
Más de 30 casos resueltos: +4%
Grado de satisfacción >= 4: +2%
*/


#include<iostream>

using namespace std;

int main(){
	
	const int CASOS_RES = 30;
	const double SUBIDA_CASOS = 0.04;
	const double SUBIDA_SATISF = 0.02;
	const double SUBIDA_CASOS_MENOR = 0.03;
	const int LIMITE_INF = 20;
	const int LIMITE_SUP = 30;
	const double GRADO_SATISF = 4.0;
	double salario, salario_subida, satisfaccion;
	int horas, casos_resueltos;

	
	cout << "Introduzca salario, horas trabajadas, casos resueltos y satisfacción del cliente: " << endl;
	cin >> salario >> horas >> casos_resueltos >> satisfaccion;
	
	double salario_total;
	
	if(salario<0 || horas<0 || casos_resueltos<0 || satisfaccion<0 ||satisfaccion>5)
		cout << "Error, datos introducidos incorrectos " << endl; 
	else{
		
		salario_total=horas*salario;
		if(casos_resueltos > CASOS_RES)
			salario_subida=SUBIDA_CASOS*salario_total;
		if(satisfaccion >= GRADO_SATISF)
			salario_subida+=SUBIDA_SATISF*salario_total;
		if(casos_resueltos>=LIMITE_INF && casos_resueltos<=LIMITE_SUP)
			salario_subida+=SUBIDA_CASOS_MENOR*salario_total;
	}
		
	cout << "Salario final: " << salario_total+salario_subida << endl;
}
















