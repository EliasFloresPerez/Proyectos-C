#include <iostream>
using namespace std;
int main()
{
 int n;
 int m;
 int v=0;


int main() {
int arregloB[4][4];
int a,b,pc,v;
srand(time(0));
for(int x=0;x<3;x++)
{
    cout<<1+(rand()%3)<<endl;
}

//Hacer la matriz
for(int x=0;x<4;x++)
{
    for(int y=0;y<4;y++)
    {
        arregloB[x][y]=1;
        
    }
}
//imprimir la matriz 
for(int x=0;x<4;x++)
{
    for(int y=0;y<4;y++)
    {
        cout<<"["<<arregloB[x][y]<<"] ";
        
    }
    cout<<endl;
}
cout<<"Cinco barcos"<<endl;
//Poner  5 barcos
while(pc<5)
{
    a=(rand()%4);
    b=(rand()%4);
    v=0;
    
    if(arregloB[a][b]==1)
    {
        arregloB[a][b]=0;
        pc++;
        v++;
    
    }
}
//imprimir matriz con valores aleatorios 
for(int x=0;x<4;x++)
{
    for(int y=0;y<4;y++)
    {
        cout<<"["<<arregloB[x][y]<<"] ";
        
    }
    cout<<endl;
}


    return 0;
}




    
 
