#include <iostream>
#include <stdlib.h>
using namespace std;

void form(int x, int y)
{
	int n;
	n=x+y;
	cout<<n<<endl;
}

int main(){
	int a,b;
	cout<<"dame un numero\n"; cin>>a;
	cout<<"otro\n"; cin>>b;
	form(a,b);
	
	system("pause");
	return 0;
}
