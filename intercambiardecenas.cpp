#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	char numero1[2],numero2[2],auxiliar;
	cout<<"\nDame el primer numero\n";
	cin>>numero1;
	cout<<"\nDame el segundo numero\n";
	cin>>numero2;
	auxiliar=numero1[1];
	
	numero1[1]=numero2[0];
	numero2[0]=auxiliar;
	cout<<"\nNumeros intercambiados :\n1)"<<numero1<<"\n2)"<<numero2;
	
	
	
	
	return 0;
}
