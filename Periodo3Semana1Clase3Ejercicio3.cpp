#include <iostream>
using namespace std;

int main()
{
cout << "Dame el mes: (1, 2, . .., 12): ";
int mes;
cin >> mes;

if (mes > 0 && mes < 13)
    switch(mes)
    {
	
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
	
cout << "El mes tiene 31 dias. \n";
      break;  
case 4:
case 6:
case 9:
case 11:
cout << "El mes tiene 30 dias. \n";
  break;
case 2:
cout << "El mes tiene 28 o 29 dias. \n";
   break;
default:
cout << "¡Imposible!\n";
}
else
cout << "El valor introducido no es valido. \n";
}
