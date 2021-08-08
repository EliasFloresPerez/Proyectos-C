#include <iostream>
using namespace std;

int factorial(int x){
	if (x==0){
		x=1;
	}else{
		cout<<" Recursividad "<<endl;
		x=x*factorial(x-1);
	}
	return x;
}

int main(){
	int x;
	cout<<"Dame el valor";
	cin>>x;
	cout<<factorial(x);

	
	return 0;
}
