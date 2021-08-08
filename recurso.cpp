#include <iostream>

using namespace std;

int funcion(int x){
	if(x==0){
		cout<<x+1<<"+";
		return 1;
	}
	cout<<x<<"+";
	return x + funcion(x-1);
}

int main(){
	cout<<endl;
	cout<<funcion(5);
	
	
	return 0;
}
