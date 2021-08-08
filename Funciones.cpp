#include <iostream>
#include <stdlib.h>


using namespace std;

int arreglo[100];
int c=0,v=0,z=0;
void pedir(int x){
    system("color 04");
	for(int y=0;y<x;y++){
		cout<<"Dame el #"<<y+1<<endl; cin>>arreglo[y];
		
	}
	for(int y=0;y<x;y++){
		cout<<arreglo[y]<<" ";
		
	}
	cout<<endl;
}
void buble(int e){
	system("color 02");
	int a=0,b=1;
	while(v<e){
		while(b<e){
			if(arreglo[a]>arreglo[b]){
				c=arreglo[a];
				arreglo[a]=arreglo[b];
				arreglo[b]=c;
			}
			a++;
			b++;
		}
		a=0;
		b=1;
		v++;
	}
	
}

int main (){
	system("color 09");
	int des=0;
	do{
		cout<<"\ncuantos numeros vas a poner\n"; cin>>z;
		pedir(z);
		buble(z);
		for(int x=0;x<z;x++){
			cout<<arreglo[x]<<" ";
		}
		
		
	}while(des==1);
	
	
	
	
	
	return 0;
}
