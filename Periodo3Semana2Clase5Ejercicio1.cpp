#include <iostream>
using namespace std;
int main()
{

  cout << "Escriba una nota:: ";
  char nota;
  cin >> nota;
  
switch (nota) {
case 'A' : case 'a':
cout<<"Excelente, aprobado con honores";
break;

case 'B': case 'b':
cout<<"Aprobado de forma sobresaliente";
break;
case 'C': case 'c':
cout<<"Aprobado con buen desempenio"<< endl <<"o";
break;
case 'D' : case 'd' :
cout<<"Aprobado de manera regular";

break;
case 'E' : case 'e':
cout<<"Aprobado, pero se sugiere mejorar";
break;
case 'F' : case 'f' :

cout<<"Reprobado, con rendimiento pobre";
break;
default:
cout<<"** ERROR, Nota ingresada es incorrecta **";

}//fin switch nota
}
