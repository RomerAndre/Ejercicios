#include <iostream>
using namespace std;

int main(){
	double calificacion, total;
	int contador = 1;
while(contador <= 3) {// itera 3 veces
	cout<<"Escriba una calificacion: "; // pide la entrada
	cin >> calificacion; // recibe como entrada la siguiente calificaci�n 
	total = total + calificacion; // suma la calificaci�n al total
	contador = contador + 1; // incrementa el contador por 1
	} 
	cout<<"El total de la calificacion es: " << total;	
}
