#include <iostream> 
using namespace std;

int main(){
	double notal, nota2, nota3, promedio;
	cout << "Ingrese la primer nota:" << endl;
	cin>> notal; 
	cout << "Ingrese la segunda nota: " << endl;
	cin>> nota2;
	cout << "Ingrese la tercer nota: " << endl;
	cin>> nota3;
	promedio = (notal + nota2+ nota3)/3;
	if (promedio >= 7 and promedio <= 10){ 
		cout << "Aprobado";
	} else if (promedio >= 4 && promedio < 7){
	 	cout<<"Regular";
	 }else if (promedio > 0 && promedio < 4){
	 cout << "Reprobado";
	 } else { 
	cout << "Nota no valida"; 
	}
}
