//Libreria
#include <iostream>
using namespace std;

int main(){
	int Par;
	int resto;
	
	cout<<"Dame un numero a evaluar : ";
	cin>>Par;
	cout<<endl;
	resto=Par%2;//resto=2/2=1 resto 0
	
	if(resto==0){
		cout<<"EL numero : "<<Par<<" es par";
	}else{
		cout<<"El numero : "<<Par<<" es impar";
	}
	
	return 0;
}
