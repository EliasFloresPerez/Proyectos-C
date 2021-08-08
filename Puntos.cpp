#include <iostream>
using namespace std ;
int main (){
	int x=0,y=0;
	
	for(;x<=15;x++){
		
		for(;y<=15;y++){
			if(x%3==0&&y==0){
				for(int z=0;z<x;z++){
					cout<<"* ";
					y+=1;
					
				}
			}

			if(y%3==0&&y!=0&&y>=x){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
			
		}
		cout<<endl;
		y=0;
	}

	
	
	return 0;
}
