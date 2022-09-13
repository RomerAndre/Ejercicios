#include <iostream>
#include <string>
using namespace std;

int main(){
	int numeros [100],i;
	
	for (i=0; i<=100; i++){
		if(i%3==0){
			numeros[i]=i;
		}
	}
	for (int i=0; i<100; i++){
		if (i%3==0){
			cout<<numeros[i]<<"\n";
		}
	}
	return 0;
	
}
