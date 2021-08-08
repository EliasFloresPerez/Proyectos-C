#include <iostream>
#include <conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std ;

void calcular();
int main (){
	srand(time(NULL));
	calcular();
	
}
void calcular(){
	int arr[100];
	int igual=0,n=0,m=0;
	cout<<"De cuanto quieres que sea tu arreglo?:"; cin>>n;
	cout<<"\nEl intervalo que comienze de 0 hasta?:"; cin>>m;
	cout<<endl;
	for(int i=0;i<n;){
		arr[i]=rand()%m;
		for(int x=0;x<n;x++){
			if(arr[i]==arr[x]&&i!=x){
				igual=1;
			}
		}
		if(igual==0){
			i++;
		}
		igual=0;	
	}
	//Probar
	
	//Imprimir
	for(int i=0;i<n;i++){
		cout<<"[ "<<arr[i]<<" ]";	
	}
}
