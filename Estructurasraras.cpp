#include <iostream>
using namespace std;
 
struct perros{
	int edad;
	int meses;
}p2,p3;


void noc(perros *&);
	
	
int main(){
	perros *p=&p2;
	cin>>p->edad;
	cout<<p->edad<<endl;
	cout<<p<<endl;
	noc(p);
	cout<<p;
	return 0;
}


void noc(perros *&puntero){
	puntero=&p3;
}
