//Escribir un programa que llene un arreglo con los números enteros comprendidos entre 4 y 14

#include <iostream>
using namespace std;

int main(){
	int arreglo[11],i,x=4;
	for(int i=0; i<11;i++){
		arreglo[i]=x++;
		cout<<arreglo[i]<<"\n";
	}
	
	
}
