#include <iostream>
using namespace std;
int main(){
	int b=2,a=1;
	do{
		if(a==b||a<=0||b<=0){
			cout<<"Un Rectangulo porfavor con medidas positivas\n";
			system("pause");
			system("cls");
		}
		cout<<"Dame la base de tu rectangulo\n"; cin>>b;
		cout<<"Dame la altura de tu rectangulo\n"; cin>>a;
	}while(b==a||a<=0||b<=0);
	cout<<"El area de tu rectangulo es :"<<b*a;
	return 0;
}
