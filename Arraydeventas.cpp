#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main(){
	int aux,c=0,x=0;
	int eleccion=0;
	int cantidad[5]={0,0,0,0,0};
	int codigo[3]={1111,2222,3333};
	int precio[3]={25,40,70};
	
	while(eleccion==0){
		
		while(c==0||c<0||c>3)
		{
		if(c==0||c<0||c>3)
		{
			cout<<"Porfavor seleciona un numero valido\n";
		}
		
		cout<<"1)Camisa "<<precio[0]<<"$";
		cout<<"\n2)Pantalon "<<precio[1]<<"$";
		cout<<"\n3)Zapatos "<<precio[2]<<"$"<<endl;
		cout<<"Cual producto deseas?\n";
		cin>>c;
		cout<<"Y cuantos quieres?"<<endl;
		cin>>x;
		}
		switch(c){
			case 1:
				cantidad[0]+=x;
				cout<<"Ok, entonces "<<x<<" Camisa(s)";
				break;
			case 2:
				cantidad[1]+=x;
				cout<<"Ok, entonces "<<x<<" Pantalones(s)";
				break;
			case 3:
				cantidad[2]+=x;
				cout<<"Ok, entonces "<<x<<" Zapatos";
				break;
		}
		cout<<"\nDeseas seguir comprando?(Si=0 o No=1)"<<endl;
		cin>>eleccion;
		c=0;
		
		system("cls");
		
	}
	

	cout<<"[ Tipo ] [Codigo] [Cantidad] [Precio] \n";
	if(cantidad[0]>0){
		cout<<"[Camisa]  ["<<codigo[0]<<"]     ["<<cantidad[0]<<"]      ["<<precio[0]<<"]\n";
	}
	if(cantidad[1]>0){
		cout<<"[ Pants]  ["<<codigo[1]<<"]     ["<<cantidad[1]<<"]      ["<<precio[1]<<"]\n";
	}
	if(cantidad[2]>0){
		cout<<"[Zapatos] ["<<codigo[2]<<"]     ["<<cantidad[2]<<"]      ["<<precio[2]<<"]\n";
	}
	aux=cantidad[0]*precio[0]+cantidad[1]*precio[1]+cantidad[2]*precio[2];
	cout<<"\nTu factura es de : "<<aux<<endl;
	cout<<"Gracias por tu compra vuelve pronto!! :D\n";
	
	
	
	
	getch();
	return 0;
}
