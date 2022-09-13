#include<iostream>
using namespace std;
int main(){
	
	int sueldo, cmc, ccq, cmcinco, n;
	char op;
	do{
		cmc=0; ccq=0; cmcinco=0;
		do{
			cout<<"Ingresar cantidad de empleados:";
			cin>>n;
		} while(n<=0);
		for(int c=0; c<n; c++){
			
			do{
				cout<<"Ingresar sueldo:";
				cin>> sueldo;
				if(sueldo>=5000)
				cmcinco=cmcinco+1;
				else
				if(sueldo<5000 && sueldo>=1000)
				ccq=ccq+1;
				else
				cmc=cmc+1;
			} while (sueldo<=0);
		}
		cout<<"Cantidad de empleados que ganan menos de 1000:"<<cmc<<endl;
		cout<<"Cantidad de empleados que ganan entre 1000 y 5000:"<<ccq<<endl;
		cout<<"Cantidad de empleados que ganan mas de 5000:"<<cmcinco<<endl;
		cout<<"deseas continuar [s\n]:";
		cin>>op;
	} while (op=='s');
	return 0;
}
