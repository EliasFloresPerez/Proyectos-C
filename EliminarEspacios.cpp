#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	char espacio[]={"12 3 4 56"};
	char num[30];
	int numero=0;
	for(int i=0;i<10;i++){
		if(espacio[i]==' '){
		}else{
			num[numero]=espacio[i];
			numero++;
		}
	}

	numero=atoi(num);
	cout<<numero<<endl;
	cout<<numero<<"+"<<numero<<"="<<numero+numero<<endl;
	system("pause");
	return 0;
}
