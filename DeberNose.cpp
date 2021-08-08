#include <iostream>
using namespace std;
int main() {
	int  numero[100];
	int max, min,i,y=0,j=0,a,b;
	cout<<"Dame el valor del primer intervalo"<<endl; cin>>a;
	cout<<"Dame el valor del segundo intervalo"<<endl; cin>>b;
	cout<<"Cuantos numero vas a poner?"<<endl;
	cin>>i;
	for(int x=0;x<i;x++){
	j=0;
	while(j==0){
		cout<<"Dame el valor numero "<<x+1<<endl;
	    cin>>numero[x];
		if(numero[x]>a&&numero[x]<b){
			j=1;
		}
	}
	
	}
	j=0;
	min=numero[y];
	max=numero[y];
	for(;y<i;y++){
		
		if(min>numero[j]){
			min=numero[j];
		}
		if(max<numero[j]){
			max=numero[j];
			
		}
		j++;
	}
	cout<<endl;
	cout<<"El numero maximo es :"<<max<<endl;
	cout<<"El numero minimo es :"<<min<<endl;


return 0;
}
