#include <iostream>
using namespace std;

int main(){
	
	int numero1, numero2, par = 0, impar =0;
	cout << "Ingrese el primero numero ";
	cin >> numero1;
	cout << "Ingrese el segundo numero ";
	cin >> numero2;
	for (int i = numero1; i <= numero2; i++){
		if(i%2 == 0){
			cout << "Par: " << i << endl;
			par = par + 1;
		} else {
			cout << "Impar: " << i << endl;
			impar = impar + 1;
		}
	}
	cout << "Los pares son: " << par <<endl;
	cout << "Los impares son: " << impar << endl; 
}
