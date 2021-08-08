#include <iostream>
using namespace std;
int main(){
	int x=10;
	int *p=&x;
	int *t;
	
	cout<<"\nReferecias";
	cout<<" \nP: "<<&p;
	cout<<"\nT: "<<&t;
	cout<<"\nX: "<<&x;
	
	cout<<"\nReferecias sin &";
	cout<<" \nP: "<<p;
	cout<<"\nT: "<<t;
	cout<<"\nX: "<<x;


	
	cout<<"\nPuntero referencia *&";
	cout<<"\nP: "<<*&p;
	cout<<"\nT: "<<*&t;
	cout<<"\nX: "<<*&x;

	
	cout<<"\nValores *";
	cout<<"\nP: "<<*p;
	cout<<"\nT: "<<*t;
	cout<<"\nX: "<<x;


	return 0;
}
