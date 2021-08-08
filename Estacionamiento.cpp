#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int a,b,c;
	int x1,x2,x3,x4,x5,x6;
	int total=0,mayor=0,menor=9999,valor=0;
	do{
		cout<<"pedir descuentos\n";
		cin>>a>>b>>c;
	}while(a<1||a>100||b<1||b>100||c<1||c>100||a<b||b<c);
	
	do{
		cout<<"pedir intervalos\n";
		cin>>x1>>x2;
		menor=x1; mayor=x2;
		cin>>x3>>x4;
		if(x3<menor){
			menor=x3;
		}
		if(x4>mayor){
			mayor=x4;
		}
		cin>>x5>>x6;
		if(x5<menor){
			menor=x5;
		}
		if(x6>mayor){
			mayor=x6;
		}
	}while(x1<1||x1>100||x2<1||x2>100||x3<1||x3>100||x4<1||x4>100||x5<1||x5>100||x6<1||x6>100||x2<x1||x4<x3||x6<x5);
	
	for(menor;menor<mayor;menor++){
		valor=0;
		if(menor>=x1&&menor<x2){
			valor++;
		}
		if(menor>=x3&&menor<x4){
			valor++;
		}
		if(menor>=x5&&menor<x6){
			valor++;
		}
		switch(valor){
			case 1:
				total+=a;
			break;
			case 2:
				total+=b+b;
			break;
			case 3:
				total+=c+c+c;
			break;
		}
		
	}
	cout<<"\nTotal :"<<total;
	getch();
	return 0;
}
