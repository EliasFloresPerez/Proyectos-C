#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
int arregloA[4][4]; //Arrglo de jugador
int arregloB[4][4]; //Arreglo de computadora de la nasa :v
int a,b,pc,v;       //Variables del selecionador de aleatoriedad
int n,m,z=0,vuelta=0;        //variables de elegir posicion
int aux=1;             //auxiliares
srand(time(0));
/*for(int x=0;x<3;x++) //aleatorio(no mostrar)
{
    cout<<1+(rand()%3)<<endl;
}*/
//Hacer la matriz
for(int x=0;x<4;x++)
{
    for(int y=0;y<4;y++)
    {
        arregloB[x][y]=1;
        
    }
}
for(int x=0;x<4;x++)
{
	for(int y=0;y<4;y++)
	{
		arregloA[x][y]=1;
	}
}
  //NO mostrar la matriz 4x4  B
for(int x=0;x<4;x++)
{
    for(int y=0;y<4;y++)
    {
        cout<<"["<<arregloB[x][y]<<"] ";
        
    }
    cout<<endl;
}
cout<<endl;
 //NO mostrar la matriz 4x4 A
for(int x=0;x<4;x++)
{
    for(int y=0;y<4;y++)
    {
        cout<<"["<<arregloA[x][y]<<"] ";
        
    }
    cout<<endl;
}
cout<<"Jugador PC ya puso sus barcos"<<endl;
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
//imprimir matriz con valores aleatorios (no mostrar)
/*for(int x=0;x<4;x++)
{
    for(int y=0;y<4;y++)
    {
        cout<<"["<<arregloB[x][y]<<"] ";
        
    }
    cout<<endl;
}*/
cout<<"Seleciona la posicion de tus barcos primero filas y luego columnas en ese lugar se pondra un barquito si intentas buguear el sistema poniendo otros valores tu decision sera randomizada"<<endl;

while (vuelta<5)
{
	cout<<"Debes poner 5 barquitos "<<"dame el #"<<aux<<endl;
	aux++;
	while(z<1)
    {
//Filas
    cout<<"Me das un numero entre 1 y 4 (1,2,3,4) esta sera la posicion de la FILA"<<endl;
    cin>>n;
    
    	//Proceso de validacion de n
    	if(n==false||n>4||n<0)
    	{
    		cout<<"Bueno por andar de mamonsito tratando de buguear esto sera random"<<endl;
 	        n=1+(rand()%4);
		}
//columnas
    cout<<"Me das un numero entre 1 y 4 (1,2,3 y 4) esta sera la posicion de la COLUMNA y tu barquito se colocara si esta libre el lugar"<<endl;
    cin>>m;
        //proceso de validacion de m
        if(m==false||m>4||m<0)
    	{
    		cout<<"Bueno por andar de mamonsito tratando de buguear esto sera random"<<endl;
 	        m=1+(rand()%4);
		}
		/*=n-1;
		m=m-1;
		arregloA[n][m]=0;
		z=1;
		n=0;
		m=0;*/
		n--;
		m--;
	//arreglar error cuando se repite no funciona esto ._.	
	if(arregloA[n][m]=0)
		{
			cout<<"Ya hay un barco en esa posicion intentelo nuevamente"<<endl;
			
			
		}
		if(arregloA[n][m]=1)
		{
		    arregloA[n][m]=0;
			z=1;
			n++;
			m++;
			cout<<"Pusiste un barquito en la posicion"<<"["<<n<<"]"<<"["<<m<<"]"<<endl;
		}
	}
	n=0;
	m=0;
	z=0;
	vuelta++;

    
	
	
}
//Impresion de los juegos
cout<<"Tablero del PC"<<endl;
	 for(int x=0;x<4;x++)
    {
    	for(int y=0;y<4;y++)
    	{
    		switch(arregloB[x][y])
    		{
		
    		case 0:
    			cout<<"[--]";
    			break;
    		case 1:
    			cout<<"[--]";
    			break;
    		case 2:
    			cout<<"[O]";
    			break;
    		case 3:
    			cout<<"[X]";
    			break;
    	    }
		}
		cout<<endl;
	}
//impresion de los tuyos
cout<<"Tu tablero"<<endl;

for(int x=0;x<4;x++)
{
	for(int y=0;y<4;y++)
	{
		cout<<"["<<arregloA[x][y]<<"]";
	}
	cout<<endl;
}



    return 0;
}
