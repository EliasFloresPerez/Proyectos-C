#include <iostream>
#include <stdlib.h>


using namespace std;

int main(){
	int KM = 0;
	float pagar = 30;
	cout<<"Cuantos KM recorrio?";
	cin>>KM;
	
	if(KM>1000){
		cout<< ((0,10*(KM-300))/1000);
	}else{
		
		if(KM>300){
		pagar =pagar + ((0,15*(KM-300))/300);
	}
	}
	cout<<"Total a pagar :"<<pagar;
	cout<<endl;
	system("pause");
}
