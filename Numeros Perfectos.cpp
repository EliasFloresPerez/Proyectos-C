/*#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int num,z=0,s=0;
	int vec[100];
	cout<<"Dame el numero que vas a poner\n"; cin>>num;
	//Descubrir divisores
	for(int x=1;x<=num;x++){
		if(num%x==0){
			vec[z]=x;
			z++;
		}
	}
	cout<<"Los divisiores son:";
	//imprimir los divisores
	for(int y=0;y<z;y++){
		cout<<vec[y]<<" ";
	}
	// ver si es un numero perfecto
	cout<<endl;
	if(z>1){
		z=z-1;
	}
	for(int y=0;y<z;y++){
		s=vec[y]+s;
	}
	if(s==num){
		cout<<"Es un numero perfecto\n";
	}
	else{
		cout<<"No es un numero perfecto\n";
	}
	system("pause");
	return 0;
}*/
//Codigo para imprimir cuadrados de letras 
#include <iostream> 
using namespace std;
int main(){
int n,a; 
char b,c;
cin>>n;
cin>>a;
cin>>b;
if(n>=3 and a>=3)
{
for(c='A'c<=b;c++)
  {
   for(int ren=1; ren<=a  ; ren++) 
          {
              for(int col=1; col<=n; col++) 
              {
                if(ren == 1 || ren == a || col== 1 || col==n) 
                  {
                    cout<<c;  
                }
                  else
                  {
                      cout<<" ";
                }
            }
            cout<<"\n";
      }
    
}
}
else
  cout<<"Error al ingresar los datos";
  return 0;
}

