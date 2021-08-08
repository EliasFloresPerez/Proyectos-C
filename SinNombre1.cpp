#include <iostream>
using namespace std;

 
int main () {
	int arreglo[10][10];
		
	for(int x=0;x<=1;x++){
		for(int y=0;y<=2;y++){
			cout<<"Dame el valor "; cin>>arreglo[x][y];
		}
		cout<<endl;
	}
	
	
	
	for(int x=0;x<=1;x++){
		for(int y=0;y<=2;y++){
			cout<<arreglo[x][y]<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
