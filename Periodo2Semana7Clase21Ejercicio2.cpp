#include <iostream>
#include <ctime>
using namespace std;

int main (){
	int num [100],n;
	srand (time (0));
	
	for (n=1; n<=100; n++){
		num[n]=rand()%100;
	}
	for (n=0; n<100; n++){
		cout<< num[n]<<"\n";
	}
	return 0;
}
