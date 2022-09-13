#include <iostream>
using namespace std;

float entradas (float, float);

int main(){
	
	int tipoEntrada, cantidad;
	cout << "Ingrese el numero del tipo de entrada: \n 1. Vip \n 2. Tribuna" << endl;
	cin >> tipoEntrada;
	cout << "Ingrese la cantidad de entradas: " << endl;
	cin >> cantidad;
	
	switch (tipoEntrada)
	{
		case 1:
			cout << "El total es: " << entradas(tipoEntrada, cantidad);
			break;
		case 2:
			cout << "El total es: " << entradas(tipoEntrada, cantidad);
			break;
		default:
			cout << "Numero de entrada invalido" << endl;
	}
	return 0;
}

float entradas(float tipo, float cant){
	float totalParcial = 0, descuento, total;
	
	if (tipo == 1){
		if (cant >= 5){
			totalParcial = (cant * 125);
			total = totalParcial - (totalParcial * 0.2);
			
		} else
		 {
			total = (cant * 125);
		}
} else if (tipo == 2){
	
	total = (cant * 40);
}

return total;
}
