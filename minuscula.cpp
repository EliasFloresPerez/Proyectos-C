#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <iostream>

using namespace std;

int main(){
	int palabra;
//	printf("%s,%s,%s,%s,%s,%s,%s,%s,%s","De acuerdo con:\n",isalpha('k')?"k es una":"no es una","letra minsucula");//isalpha('J')?"J es una":"no es una","letra minsucula",isalpha('4')?"4 es una":"no es una","letra minsucula");
	cout<<"Mayuscula\n";
	palabra = tolower('J')?1:2;
	cout<<palabra<<endl;
	palabra = islower('J')?1:2;
	cout<<palabra<<endl;
	palabra = isalpha('J')?1:2;
	cout<<palabra<<endl;
	palabra = isupper('J')?1:2;
	cout<<palabra<<endl;
	
	cout<<"Minuscula\n";
	
	palabra = tolower('j')?1:2;
	cout<<palabra<<endl;
	palabra = islower('j')?1:2;
	cout<<palabra<<endl;
	palabra = isalpha('j')?1:2;
	cout<<palabra<<endl;
	palabra = isupper('j')?1:2;
	cout<<palabra<<endl;
	
	
	return 0;
}
