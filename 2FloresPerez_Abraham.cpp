#include <iostream>
#include <stdlib.h>
#include <windows.h.>

using namespace std;

int main(){
	int matriz[5][10];
	int numero=1;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<10;j++){
			matriz[i][j]=numero;
			numero++;
		}
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<10;j++){
			if(matriz[i][j]<10){
				cout<<"[0"<<matriz[i][j]<<"]";
				Sleep(200);
			}else{
			cout<<"["<<matriz[i][j]<<"]";
			Sleep(200);}
		}
		cout<<endl;
	}
	
	return 0;
}
