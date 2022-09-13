#include<stdio.h>
#define x 1852

double distancia(double a, int z){
	
	double b;
	b= a * z;
	return b;
}

int main(){
	int a;
	double b;
	printf( "\n Ingrese la distancia en millas: \n \n");
	scanf( "%i", &a);
	printf( "\n La distancia ingresada, en metros es: %.2f \n \n", distancia(a,x));
	return 0;
}
