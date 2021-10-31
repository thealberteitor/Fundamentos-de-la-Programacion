#include <iostream>
using namespace std;

// This the factorial function: returns the factorial of the given n
int factorian_of_number(int n){ 
	int ans =1;	
	for(int i= 2; i<= n; i++){
		ans *=i;
	}
	return ans;
}


int main(){
	
	const int FILAS = 100, COLUMNAS = 100;
	char A[FILAS][COLUMNAS] =
	
	{{1,'A','B','C','D'},
	{2,'A','B','C','D'},
	{3,'A','B','C','D'},
	{4,'A','B','C','D'},
	{5,'A','B','C','D'},
	{6,'A','B','C','D'},
	{7,'A','B','C','D'}};
	
	int util_filas = 7, util_columnas = 5, util_tamanio = util_filas*util_columnas;
	int i, j, k;
	int ensenia_fila; // Necesario para que los numeros se vean como int y no como char al imprimir. (Ya que la matriz es char)
	int fila_deseada, asiento_deseado_numero; 
	char asiento_deseado;
	
	
	cout << "\n\nDISPOSICION DE LOS ASIENTOS:";
	cout << "\n\n";
	
	for (i = 0; i < util_filas; i++){
		
		cout << " ";
		
		for (j = 0; j < util_columnas; j++){
			
			if (j == 0 || j == 2 || j == 4){
				
				if (j == 0){
					ensenia_fila = A[i][j];
					cout << ensenia_fila << " | ";
				}else{
					cout << A[i][j] << " | ";
				}
				
			}else{
				
				if (j == 0){
					ensenia_fila = A[i][j];
					cout << ensenia_fila << "  ";
				}else{
					cout << A[i][j] << "  ";
				}
				
			}
		}
		cout << "\n";
	}
	
	do{
			cout << "\nIntroduzca la fila deseada: "; // SI METO UNA LETRA SE CAUSA UN BUCLE Y NO SE PORQUE
			cin >> fila_deseada;
			if ((fila_deseada < 1 && fila_deseada != -1) || fila_deseada > 7){
				cout << "Fila incorrecta\n";
			}
	}while ((fila_deseada < 1 && fila_deseada != -1) || fila_deseada > 7);
	
	k = 1;
	while (k <= util_tamanio && fila_deseada != -1){
		
		do{
			cout << "\nIntroduzca el asiento deseado: ";
			cin >> asiento_deseado;
			if (asiento_deseado < 'A' || asiento_deseado > 'D'){ // PROBÉ DECLARAR INT EL ASIENTO DESEADO, Y POR ALGUNA RAZON ME CAUSABA UN BUCLE INFINITO, POR ESO DECLARO "asiento_deseado_numero" PARA YO HACER LA TRANSFORMACION.
				cout << "Asiento incorrecto\n";
			}
		}while (asiento_deseado < 'A' || asiento_deseado > 'D');
		
		asiento_deseado_numero = asiento_deseado - 64;
		A[fila_deseada-1][asiento_deseado_numero] = 'X';
		k++;
		
		
		cout << "\n\nDISPOSICION DE LOS ASIENTOS:";
		cout << "\n\n";
		
		for (i = 0; i < util_filas; i++){
			
			cout << " ";
			
			for (j = 0; j < util_columnas; j++){
				
				if (j == 0 || j == 2 || j == 4){
					
					if (j == 0){
						ensenia_fila = A[i][j];
						cout << ensenia_fila << " | ";
					}else{
						cout << A[i][j] << " | ";
					}
					
				}else{
					
					if (j == 0){
						ensenia_fila = A[i][j];
						cout << ensenia_fila << "  ";
					}else{
						cout << A[i][j] << "  ";
					}
					
				}
			}
			cout << "\n";
		}
		
		do{
			cout << "\nIntroduzca fila: ";
			cin >> fila_deseada;
			if ((fila_deseada < 1 && fila_deseada != -1) || fila_deseada > 7){
				cout << "Fila incorrecta\n";
			}
		}while ((fila_deseada < 1 && fila_deseada != -1) || fila_deseada > 7);
	}
	
	cout << "\n\nASIGNACION FINAL DE LOS ASIENTOS:";
		cout << "\n\n";
		
		for (i = 0; i < util_filas; i++){
			
			cout << " ";
			
			for (j = 0; j < util_columnas; j++){
				
				if (j == 0 || j == 2 || j == 4){
					
					if (j == 0){
						ensenia_fila = A[i][j];
						cout << ensenia_fila << " | ";
					}else{
						cout << A[i][j] << " | ";
					}
					
				}else{
					
					if (j == 0){
						ensenia_fila = A[i][j];
						cout << ensenia_fila << "  ";
					}else{
						cout << A[i][j] << "  ";
					}
					
				}
			}
			cout << "\n";
		}
	
	cout << "\n" ;
	
}
