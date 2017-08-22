/*
Escriba un programa que lea cuatro valores de tipo char
e imprima las parejas que pueden formarse con un elemento del conjunto. El programa
debe imprimir las parejas que pueden formarse con un elemento.
*/

#include <iostream>
using namespace std;

int main(){
   char min_izda, max_izda, min_dcha, max_dcha;
	char izq, der;
   
   cout << "Introduzca los cuatro caracteres: " << endl;
   cin >> min_izda >> max_izda >> min_dcha >> max_dcha;
   
   for (izq = min_izda; izq <= max_izda; izq++){
      for (der = min_dcha; der <= max_dcha; der++)
         cout << izq << der << " ";
      
      cout << endl;
   }

}


