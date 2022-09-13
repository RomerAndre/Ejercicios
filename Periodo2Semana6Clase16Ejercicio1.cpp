#include <iostream>
using namespace std;

int numero( int x){
	if (x<0){
		return -1;
	}else if (x>0){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int x;
	cout<<"Por favor ingrese un numero: "<<"\n";
	cin>>x;
	cout<<numero(x);
	
	return 0;
}
