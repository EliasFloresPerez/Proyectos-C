#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	
	float x,y,x2;
	cout<<"\Dame el valor de x\n";
	cin>>x;
	x2=x;
	x*=x;
	x*=3;
	x2*=7;
	y=x+x2-15;
	cout<<"\nEl valor de x es : ";
	cout<<y;
	
	getch();
	return  0;
}
