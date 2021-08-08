#include <iostream>
using namespace std;
int main(){
	int arreglo[100000];
	int n,m,i,f;
	cin>>n;
	cin>>m;
	for(int x=0;x<100000;x++){
		arreglo[x]=0;
	}
	for(int x=0;x<m;x++){
		
	cin>>i>>f;

	for(;i<f;i++){
		arreglo[i]=arreglo[i]+1;
		
	}
		
		
	}
	for(int x=0;x<n;x++ ){
		cout<<arreglo[x]<<" ";
	}
	return 0;
}
