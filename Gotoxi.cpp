#include <dos.h>

#include <conio.h>

#include <iostream>

#include <stdio.h>

#include <windows.h>


/*ALICIA CHAVEZ ROMERO

2do CUATRIMESTRE "C"

MECATRONICA

COLORES-SLEEP

*/

int log;

char resp;

int main();
{
d
{
clrscr();
system ("color 05");
gotoxy(25,5);
textcolor(2);
cprintf("%%%%%%%%%U T V M%%%%%%%");
gotoxy(15,6);
textcolor(WHITE);
cprintf("menu de CI");
gotoxy(15,8);
textcolor(7);
cprintf("1.- AND");
gotoxy(15,9);
textcolor(2);
cprintf("2.- OR");
gotoxy(15,10);
textcolor(3);
cprintf("3.- NOT");
gotoxy(15,11);
textcolor(4);
cprintf("4.- XOR");
gotoxy(15,12);
textcolor(5);
cprintf("5.- NAND");
gotoxy(15,13);
textcolor(6);
cprintf("6.- SALIR");
gotoxy(15,14);
textcolor(8);
cprintf("SELECCIONA LA OPCION E INGRESALA....");
cin>>log;
switch(log)
{
case 1:
sleep(1);
gotoxy(15,16);
sleep(1);
cout<<".";
sleep(1);
gotoxy(15,17);
sleep(1);
cout<<"...";
sleep(1);
gotoxy(15,17);
sleep(1);
cout<<".................ESPERE.....";
sleep(2);
clrscr();
textcolor(WHITE);
cout<<"HA SELECCIONADO";
 gotoxy(18,4);
 textcolor(7);
 cprintf(" A N D ");
 gotoxy(15,5);
 textcolor(WHITE);
 cprintf(" A    B  | C");
 gotoxy(15,6);
 textcolor(WHITE);
 cprintf(" 0    0  | 0");
 gotoxy(15,7);
 textcolor(WHITE);
 cprintf(" 0    1  | 0");
 gotoxy(15,8);
 textcolor(WHITE);
cprintf(" 1    0  | 0");
 gotoxy(15,9);
 textcolor(WHITE);
 cprintf(" 1    1  | 1");
 gotoxy(40,5);
textcolor(WHITE);

cout<<"SIMBOLO";

gotoxy(40,6);

 textcolor(WHITE);

 cprintf("       _____  ");

 gotoxy(40,7);

 textcolor(WHITE);

 cprintf(" a----|  |      ");

 gotoxy(40,8);

 textcolor(WHITE);

 cprintf("      |  &  |---s");

 gotoxy(40,9);

 textcolor(WHITE);

 cprintf(" b----|_____|   ");




break;

case 2:

sleep(1);

gotoxy(15,16);

sleep(1);

cout<<".";

sleep(1);

gotoxy(15,17);

sleep(1);

cout<<"...";

sleep(1);

gotoxy(15,17);

sleep(1);

cout<<".................ESPERE.....";

sleep(2);


 clrscr();

 textcolor(WHITE);

cout<<"HA SELECCIONADO";

 gotoxy(19,4);

 textcolor(2);

 cprintf(" OR ");

 gotoxy(15,5);

 textcolor(WHITE);

 cprintf(" A    B  | C");

 gotoxy(15,6);

 textcolor(WHITE);

 cprintf(" 0    0  | 0");

 gotoxy(15,7);

 textcolor(WHITE);

 cprintf(" 0    1  | 1");

 gotoxy(15,8);

 textcolor(WHITE);

 cprintf(" 1    0  | 1");

 gotoxy(15,9);

 textcolor(WHITE);

 cprintf(" 1    1  | 1");

 gotoxy(40,5);

textcolor(WHITE);

cout<<"SIMBOLO";

gotoxy(40,6);

 textcolor(WHITE);

 cprintf("       ________       ");

 gotoxy(40,7);

 textcolor(WHITE);

 cprintf("      |        |      ");

 gotoxy(40,8);

 textcolor(WHITE);

 cprintf(" a----|  |      ");

 gotoxy(40,9);

 textcolor(WHITE);

 cprintf("      |  >= 1  |---s  ");

 gotoxy(40,10);

 textcolor(WHITE);

 cprintf(" b----|  |      ");

 gotoxy(40,11);

 textcolor(WHITE);

 cprintf("      |________|      ");




break;

case 3:

sleep(1);

gotoxy(15,16);

sleep(1);

cout<<".";

sleep(1);

gotoxy(15,17);

sleep(1);

cout<<"...";

sleep(1);

gotoxy(15,17);

sleep(1);

cout<<".................ESPERE.....";

sleep(2);


  clrscr();

cout<<"HA SELECCIONADO";

 gotoxy(19,4);

 textcolor(3);

 cprintf(" NOT ");

 gotoxy(15,5);

  textcolor(WHITE);

 cprintf(" A  |  B");

 gotoxy(15,6);

  textcolor(WHITE);

 cprintf(" 0  |  1");

 gotoxy(15,7);

  textcolor(WHITE);

 cprintf(" 1  |  0");

 gotoxy(40,5);

textcolor(WHITE);

cout<<"SIMBOLO";

  gotoxy(40,6);

 textcolor(WHITE);

 cprintf("      _____");

  gotoxy(40,7);

 textcolor(WHITE);

 cprintf("     |     | ");

  gotoxy(40,8);

 textcolor(WHITE);

 cprintf("a ---|  1  |O-- s");

  gotoxy(40,9);

 textcolor(WHITE);

 cprintf("     |_____| ");

break;


case 4:

sleep(1);

gotoxy(15,16);

sleep(1);

cout<<".";

sleep(1);

gotoxy(15,17);

sleep(1);

cout<<"...";

sleep(1);

gotoxy(15,17);

sleep(1);

cout<<"......";

sleep(1);

gotoxy(15,17);

sleep(1);

cout<<".................ESPERE.....";

sleep(2);


  clrscr();

  textcolor(WHITE);

cout<<"HA SELECCIONADO";

 gotoxy(19,4);

 textcolor(3);

 cprintf(" XOR ");

 gotoxy(15,5);

 textcolor(WHITE);

 cprintf(" A    B  | C");

 gotoxy(15,6);

 textcolor(WHITE);

 cprintf(" 0    0  | 0");

 gotoxy(15,7);

 textcolor(WHITE);

 cprintf(" 0    1  | 1");

 gotoxy(15,8);

 textcolor(WHITE);

 cprintf(" 1    0  | 1");

 gotoxy(15,9);

 textcolor(WHITE);

 cprintf(" 1    1  | 0");

 gotoxy(40,5);

textcolor(WHITE);

cout<<"SIMBOLO";

  gotoxy(40,6);

 textcolor(WHITE);

 cprintf("       ________       ");

 gotoxy(40,7);

 textcolor(WHITE);

 cprintf("      |        |      ");

 gotoxy(40,8);

 textcolor(WHITE);

 cprintf(" a----|  |      ");

 gotoxy(40,9);

 textcolor(WHITE);

 cprintf("      |  = 1   |---s  ");

 gotoxy(40,10);

 textcolor(WHITE);

 cprintf(" b----|  |      ");

 gotoxy(40,11);

 textcolor(WHITE);

 cprintf("      |________|      ");


break;

case 5:

sleep(1);

gotoxy(15,16);

sleep(1);

cout<<".";

sleep(1);

gotoxy(15,17);

sleep(1);

cout<<"...";

sleep(1);

gotoxy(15,17);

sleep(1);

gotoxy(15,17);

sleep(1);

cout<<".................ESPERE.....";

sleep(2);


  clrscr();

  textcolor(WHITE);

cout<<"HA SELECCIONADO";

 gotoxy(19,4);

 textcolor(3);

 cprintf("NAND");

 gotoxy(15,5);

 textcolor(WHITE);

 cprintf(" A    B  | C");

 gotoxy(15,6);

 textcolor(WHITE);

 cprintf(" 0    0  | 1");

 gotoxy(15,7);

 textcolor(WHITE);

 cprintf(" 0    1  | 1");

 gotoxy(15,8);

 textcolor(WHITE);

 cprintf(" 1    0  | 1");

 gotoxy(15,9);

 textcolor(WHITE);

 cprintf(" 1    1  | 0");

 gotoxy(40,5);

textcolor(WHITE);

cout<<"SIMBOLO";

gotoxy(40,6);

 textcolor(WHITE);

  cprintf("       _____  ");

gotoxy(40,7);

 textcolor(WHITE);

 cprintf(" a----|  |      ");

gotoxy(40,8);

 textcolor(WHITE);

 cprintf("      |  &  |O---s");

 gotoxy(40,9);

 textcolor(WHITE);

 cprintf(" b----|_____|   ");




break;

case 6:

 exit(0);

     break;

   clrscr();

     default:

      gotoxy(14,17);

     cout<<"OPCION INVALIDA"<<endl;

        }

 gotoxy(14,18);

 cout<<"DESEA REVISAR OTRA CI    <s=si><n=no>"<<endl;

 cin>>resp;

  if(resp=='s'|| resp=='S')

   {

  sleep(1);

gotoxy(15,20);

sleep(1);

cout<<".";

sleep(1);

gotoxy(15,21);

sleep(1);

cout<<"...";

sleep(1);

gotoxy(15,21);

sleep(1);

cout<<"............ESPERE UN MOMENTO GRACIAS.....";

sleep(2);

}

else

{

exit(0);

}

 }while(resp=='s' || resp=='S');


getche();
 return 0;
}
