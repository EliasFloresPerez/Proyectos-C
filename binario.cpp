#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int x,y=0,t=-1;
	int bi[100];
	cout<<"Dame un numero"<<endl; cin>>x;
    while(y<=x){
    	t++;
    	y=pow(2,t);	
	}
	
    cout<<t;
    
    
	
	
	return 0;
}
