#include <iostream>
#include <math.h>
using namespace std;
//Parte del codigo que me de la potencia de 2 mas cercana que no sea mayor
// al numero dado
int main (){
	int x,y=0,t=0;
	int bi[100];
	cout<<"Dame Un numero "<<endl; cin>>x;
	while(y<=x){
		y=pow(2,t);
		t++;
	}
	t-=2;
	//hacer el binario
	for(int m=t;m>=0;m--){
		y=x%2;
		bi[m]=y;
		x=x/2;
	}
	//imprimir el binario
	for(int n=0;n<=t;n++){
		cout<<bi[n];
	}
	return 0;
}
