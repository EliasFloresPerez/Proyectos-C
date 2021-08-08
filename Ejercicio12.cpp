#include <iostream>
#include <conio.h>
using namespace std;
 int main(){
 	int a,b,c;
 	char primera,segunda;
 	cin>>primera>>segunda;
 	a=primera;
 	b=segunda;
 	c=b-a;
 	for(int i=0;i<c;i++){
		for(int k=0;k<c-i;k++){
			cout<<" ";
			
		}
		for(int k=0;k<i*2+1;k++){
			printf("%c",a+i);
		}
		cout<<endl;
	}
	for(int i=c;i>=0;i--){
		for(int k=0;k<c-i;k++){
			cout<<" ";
			
		}
		for(int k=0;k<i*2+1;k++){
			printf("%c",a+i);
		}
		cout<<endl;
	}
 	return 0;
 }
