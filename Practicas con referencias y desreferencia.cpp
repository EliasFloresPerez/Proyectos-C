#include <iostream>
#include <stdlib.h>
using namespace std;

void puntero(char *c){
	char m='e';
	*c=m;
}
int main(){
	char x='a';
	char *y=&x;
	
	puntero(&x);
	//cout<<x<<endl;
	cout<<*y<<endl;
	cout<<"Arreglo"<<endl;
	y= new char ;
	
	cout<<*y<<endl;
	
	
	return 0;
}
