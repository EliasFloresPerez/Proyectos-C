#include <iostream>
using namespace std;
int main()
{
 int n;
 int m;
 int v=0;
 //fila 
 cout<<"Dame valor entre 1 y 4 para la fila del ataque ( no seas mala onda :v)"<<endl;
 cin>>n;
 
 
while(v<1) 
 {
 //proceso
 if(n==false||n>4||n<0)
 {
 	cout<<"Bueno por andar de mamonsito tratando de buguear esto eligire por ti"<<endl;
 	n=2;
 	
 }
 else
 {
 	
 	v++;
 }
 
 
}
cout<<endl;
v=0;
 //columna
 
 cout<<"Dame valor entre 1 y 3 para la columna del ataque ( no seas mala onda :v)"<<endl;
 cin>>m;
 
 
while(v<1) 
 {
 //proceso
 if(m==false||m>3||m<0)
 {
 	cout<<"Bueno por andar de mamonsito tratando de buguear esto eligire por ti"<<endl;
 	m=1;
 	
 }
 else
 {
 	
 	v++;
 }
}
cout<<endl;
cout<<"Tu ataque sera a la fila :"<<"["<<n<<"] y columna :"<<"["<<m<<"]";




    
    return 0;
}
