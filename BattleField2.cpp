#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
int arregloA[4][4];                      //Arrglo de jugador
int arregloB[4][4];                     //Arreglo de computadora de la nasa :v
int a,b,pc,v=0;                          //Variables del selecionador de aleatoriedad
int n,m,z=0,vuelta=0;                 //variables de elegir posicion
int aux=1;                           //auxiliares
int af,ac,bf,bc,game=0,rot=0,afin,bfin; //variables del ataque (lo se muchas variables y pude reutilizar ;v)
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
 /* //NO mostrar la matriz 4x4  B
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
}*/
cout<<"****************************************************"<<endl;
cout<<endl;
cout<<"------Bienevnido a BATTLE FIELD pero mas barato-----"<<endl;
cout<<endl;
cout<<"****************************************************"<<endl;

cout<<"[---------------------------------------------------------------------------------------]"<<endl;
cout<<"significado de los simbolos :"<<endl;
cout<<"[ - ] simbolo de que ese espacio esta oculto no ha sido revelado y para tu tablero que el espacio esta vacio"<<endl;
cout<<"[ Y ] Simbolo de un barquito a poco no esta perron :v"<<endl;
cout<<"[xXx] simbolo de que una casilla ya ha sido atacada y no se ha encontrado ni un barco"<<endl;
cout<<"[_F_] simbolo de senal de respeto por los barquitos muertos :,v(Barco destruido)"<<endl;
cout<<"[---------------------------------------------------------------------------------------]"<<endl;
cout<<endl;
cout<<"El juego a COMENZADO destruye los 5 barcos enemigos"<<endl;
cout<<endl;
cout<<"Jugador Pc dice: Te ganare manco :v"<<endl;
cout<<endl;
cout<<"[Jugador PC ya puso sus barcos]"<<endl;
cout<<endl;
cout<<endl;
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
cout<<endl;
while (vuelta<5)
{
	cout<<"Debes poner 5 barquitos "<<"dame el #"<<aux<<endl;
	aux++;
	while(z<1)
    {
//Filas
    cout<<"Dame la FILA :(1,2,3,4)"<<endl;
    cin>>n;
    
    	//Proceso de validacion de n
    	if(n==false||n>4||n<0)
    	{
    		cout<<"Porfavor Pon Datos entre 1 y 4"<<endl;
 	        n=1+(rand()%4);
		}
//columnas
    cout<<"Dame la COLUMNA: (1,2,3 y 4)"<<endl;
    cin>>m;
        //proceso de validacion de m
        if(m==false||m>4||m<0)
    	{
    		cout<<"Porfavor Pon Datos entre 1 y 4"<<endl;
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
	//arreglar error cuando se repite no funciona esto ._.--arreglado xd	
	if(arregloA[n][m]==0)
		{
			cout<<"Ya hay un barco en esa posicion intentelo nuevamente"<<endl;
			
			
		}
		if(arregloA[n][m]==1)
		{
		    arregloA[n][m]=0;
			z=1;
			n++;
			m++;
			cout<<"---Pusiste un barquito en la posicion"<<"["<<n<<"]"<<"["<<m<<"]---"<<endl;
		}
		cout<<endl;
		cout<<endl;
	}
	n=0;
	m=0;
	z=0;
	vuelta++;

    
	
	
}
//Impresion de los juegos
cout<<"[--Tablero del PC--]"<<endl;
	 for(int x=0;x<4;x++)
    {
    	for(int y=0;y<4;y++)
    	{
    		switch(arregloB[x][y])
    		{
		
    		case 0:
    			cout<<"[ - ]";
    			break;
    		case 1:
    			cout<<"[ - ]";
    			break;
    		case 2:
    			cout<<"[_F_]";
    			break;
    		case 3:
    			cout<<"[xXx]";
    			break;
    	    }
		}
		cout<<endl;
	}
//impresion de los tuyos
cout<<endl;
cout<<"[----Tu Tablero----]"<<endl;

for(int x=0;x<4;x++)
{
	for(int y=0;y<4;y++)//uwu
	{
		switch(arregloA[x][y])
    		{
		
    		case 0:
    			cout<<"[ Y ]";
    			break;
    		case 1:
    			cout<<"[ - ]";
    			break;
    		case 2:
    			cout<<"[_F_]";
    			break;
    		case 3:
    			cout<<"[xXx]";
    			break;
    	    }
	}
	cout<<endl;
}
cout<<endl;

while(game<16)
{
	//tu ataque
	//1 casilla no revelada (0 tambien ) 2(casilla atacada y exito del ataque) 3 (casilla atacada y fallido)
	cout<<"[----------# Batalla #----------]"<<endl;
	cout<<"FILA DEL ATAQUE(1,2,3 o 4)"<<endl;
	cin>>af;
	if(af==false||af<0||af>4)
	{
		cout<<"No pongas valores ajenas a los dados ._."<<endl;
		af=1+(rand()%4);
		
	}
	cout<<"COLUMNA DE ATAQUE(1,2,3 o 4)"<<endl;
	cin>>ac;
	if(ac==false||ac<0||ac>4)
	{
		cout<<"No pongas valores ajenas a los dados ._."<<endl;
		ac=1+(rand()%4);
	}
	af--;
	ac--;
	cout<<endl;
	cout<<endl;
	cout<<"[----------------------------------------]"<<endl;
	switch(arregloB[af][ac])
	{
	
	case 0:
		arregloB[af][ac]=2;
		af++;
		ac++;
		cout<<"Ataque exitoso en"<<"["<<af<<"]"<<"["<<ac<<"]"<<endl;
		break;
	case 1:
		arregloB[af][ac]=3;
		af++;
		ac++;
		cout<<"Ataque fallido en"<<"["<<af<<"]"<<"["<<ac<<"]"<<endl;
		break;
	case 2:
		cout<<"Esta casilla ya fue atacada"<<endl;
		cout<<"Tu disparo se fue a fondo del mar"<<endl;
		break;
	case 3:
		cout<<"Tu no aprendes verdad? ya atacaste esta casilla"<<endl;
		cout<<"Tu disparo se fue al fondo del mar"<<endl;
		
		break;
    }
   
	//ataque de a Pc sera aleatorio y jamas se repitira 
	cout<<"La Pc atacara :"<<endl;
	rot=0;
	while(rot<1)
	{
		bf=(rand()%4);
		bc=(rand()%4);
		
		if(arregloA[bf][bc]==0)
		{
			arregloA[bf][bc]=2;
			bf++;
			bc++;
			cout<<"Ataque exitoso de Pc en: "<<"["<<bf<<"]"<<"["<<bc<<"]"<<endl;
			rot++;
			bf--;
			bc--;
			
		}
		if(arregloA[bf][bc]==1)
		{
			arregloA[bf][bc]=3;
			bf++;
			bc++;
			cout<<"Ataque fallido de Pc en: "<<"["<<bf<<"]"<<"["<<bc<<"]"<<endl;
			rot++;
			bf--;
			bc--;
		}
		
		
	}
	cout<<"[----------------------------------------]"<<endl;
	cout<<endl;
	
	
//	Impresion de cada jugada
    cout<<"[--Tablero del PC--]"<<endl;
	 for(int x=0;x<4;x++)
    {
    	for(int y=0;y<4;y++)
    	{
    		switch(arregloB[x][y])
    		{
		
    		case 0:
    			cout<<"[ - ]";
    			break;
    		case 1:
    			cout<<"[ - ]";
    			break;
    		case 2:
    			cout<<"[_F_]";
    			break;
    		case 3:
    			cout<<"[xXx]";
    			break;
    	    }
		}
		cout<<endl;
	}
//impresion de los tuyos
    cout<<endl;
    cout<<"[----Tu Tablero----]"<<endl;
for(int x=0;x<4;x++)
{
	for(int y=0;y<4;y++)
	{
		
		switch(arregloA[x][y])
    		{
		
    		case 0:
    			cout<<"[ Y ]";
    			break;
    		case 1:
    			cout<<"[ - ]";
    			break;
    		case 2:
    			cout<<"[_F_]";
    			break;
    		case 3:
    			cout<<"[xXx]";
    			break;
    	    }
	}

	cout<<endl;
}
    cout<<endl;
		
	game++;
	/*Parte donde se valida si te quedan barcos(0) 
	sera de este modo, como debe haber un 0 para seguir jugando, se me ocurrio que si multiplico todos los valores del arreglo debe dar 0 si hay un barco todavia
	en pie, caso contrario ya no queda ningun barco y el juego se terminara a favor del que le quede un barco al menos , la posibilidad de que los dos no tengan
	ni un barco en pie tambien fue dada*/
	// Proceso de a
	afin=((arregloA[0][0]*arregloA[0][1]*arregloA[0][2]*arregloA[0][3]*arregloA[1][0]*arregloA[1][1]*arregloA[1][2]*arregloA[1][3]*arregloA[2][0]*arregloA[2][1]*arregloA[2][2]*arregloA[2][3]*arregloA[3][0]*arregloA[3][1]*arregloA[3][2]*arregloA[3][3])/16);
	bfin=((arregloB[0][0]*arregloB[0][1]*arregloB[0][2]*arregloB[0][3]*arregloB[1][0]*arregloB[1][1]*arregloB[1][2]*arregloB[1][3]*arregloB[2][0]*arregloB[2][1]*arregloB[2][2]*arregloB[2][3]*arregloB[3][0]*arregloB[3][1]*arregloB[3][2]*arregloB[3][3])/16);
	/*cout<<afin<<endl;
	cout<<bfin<<endl;*/
	//empate
	
	if(afin>=1 && bfin>1)
	{
		cout<<"����------ Empate -----????"<<endl;
		cout<<endl;
		cout<<"Jugador Pc dice : Igual ici pizi "<<endl;
		game=game+20;
		afin=1;
		bfin=1;
		
	}
	else
	{
	//Perder
	if(afin==0)
	{
		cout<<"---Todavia quedan barcos en tu tablero---"<<endl;
	}
	else
	{
		 cout<<"###-----Perdiste destruyeron todos tus barcos-----###"<<endl;
		 cout<<endl;
		 cout<<"Jugador Pc dice : Que facil es ganarle a los humanos xDD"<<endl;
		 cout<<endl;
		 game=game+20;
	}
	//Ganar
	if(bfin==0)
	{
		cout<<"Todavia quedan barcos en el tablero de PC"<<endl;
		
	}
	else
	{
		cout<<"###-----Ganaste destruiste todos los barcos del enemigo-----###"<<endl;
		cout<<endl;
		cout<<"Jugador Pc dice: tenia lag..."<<endl;
		cout<<endl;
		game=game+20;
	}
    }
	
	
	//Copyright Elias Perez :)
   //c:
	
	
	
}
cout<<endl;
cout<<"Espero que hayas disfrutado la partida"<<endl;
cout<<endl;
cout<<"Pon cualquier numero o letra para terminar el juego"<<endl;
cin>>aux;

    return 0;
}
