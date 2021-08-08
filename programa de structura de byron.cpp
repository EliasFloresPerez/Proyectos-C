#include<iostream>
#include<conio.h>
#define tam 5 
using namespace std;
struct nota{
	int n1;
	int n2;
	float promedio=0;
};
struct alumno{
	char nombre[30];
	char apellido[30];
	int carnet;
	struct nota n;
}alu[tam],*a=alu;
void pedir( alumno *a);
void mostrar( alumno *a);
void promedio_alu(alumno *a);
void mayor_promedio(alumno *a);
void menor_promedio(alumno *a);
 int i=0,resul=2,mayor=-9999,menor=9999,pos=0,pos1=0;
int main(){
	char edgar;
	int opc;
do{
	cout<<1<<". Ingresar nuevo alumno."<<endl;
    cout<<2<<". Imprimir alumno."<<endl;
	cout<<3<<". Promedio de cada alumno."<<endl;
	cout<<4<<". Alumno con promedio mas alto."<<endl;	
	cout<<5<<". Alumno con el promedio mas bajo"<<endl;	
	cout<<6<<". Salir"<<endl;	
	cout<<"Digite una opcion: ";cin>>opc;
	switch(opc){
		case 1: 	while(resul!=1){
		cout<<i+1<<". Ingrese los datos del estudiante:["<<i+1<<"] "<<endl;
		pedir(a);
		cout<<"\nQuiere contenuar ingresando los datos del alumno 1=no o 2=si: ";cin>>resul; i++;
	}break;	
	case 2: mostrar(a);	break;
	case 3: promedio_alu(a);break;
    case 4: mayor_promedio(a);break;
    case 5: menor_promedio(a);break;
    case 6: cout<<"\nFin del programa."<<endl;break;
	}		cout<<"\nDesea ingresar una  opcion mas (S/N): ";cin>>edgar;
}while((edgar=='s'||edgar=='S'));// por si el usuario se pasa de listo
getch();
return 0;
}
void pedir( alumno *a){
	fflush(stdin);
	cout<<"Digite su nombre: ";cin.getline(a[i].nombre,30,'\n');
	fflush(stdin);
	cout<<"Digite su apellios: ";cin.getline(a[i].apellido,30,'\n');
	cout<<"Digite su carnet: ";cin>>a[i].carnet;
	cout<<"Digite su primera nota: ";cin>>a[i].n.n1;
	cout<<"Digite su segundo nota: ";cin>>a[i].n.n2;
		a[i].n.promedio=a[i].n.n1+a[i].n.n2;
		a[i].n.promedio/=2;	if(a[i].n.promedio>mayor){
		mayor=a[i].n.promedio;
		pos=i;
	}else{
		menor=a[i].n.promedio;pos1=i;
		}	cout<<"\n";
}
void mostrar(alumno *a){
	cout<<"\tMostrando los datos del alumno: "<<endl;
	for(int j=0;j<i;j++){
		cout<<"\n\tAlumno ["<<j+1<<"]"<<endl;
	cout<<"\tSU nombres es: "<<a[j].nombre<<endl;
	cout<<"\tSu apellido es: "<<a[j].apellido<<endl;
	cout<<"\tSu numero de carnet es:"<<a[j].carnet<<endl;
	cout<<"\tSu primera nota es: "<<a[j].n.n1<<endl;
	cout<<"\tSu segunda nota es: "<<a[j].n.n2;cout<<"\n";	
	}
}
void promedio_alu(alumno *a){
	cout<<"\tMostrando los promedio de cada alumno: "<<endl;
	for(int j=0;j<i;j++){
		cout<<"\n\tEl promedio del alumno["<<j+1<<"] es: "<<a[j].n.promedio;cout<<"\n";
	}
}
void mayor_promedio(alumno *a){
	cout<<"\\tnEl alumno con promedio mas alto es: "<<endl;
	cout<<"\tSu nombre es: "<<a[pos].nombre<<endl;
	cout<<"\tSu apellido es: "<<a[pos].apellido<<endl;
	cout<<"\tSu carnet es: "<<a[pos].carnet<<endl;
	cout<<"\tSu promedio es: "<<a[pos].n.promedio<<endl;
}
void menor_promedio(alumno *a){
	cout<<"\n\tEl alumno con promedio mas bajo es: "<<endl;
	cout<<"\tSu nombre es: "<<a[pos1].nombre<<endl;
	cout<<"\tSu apellido es: "<<a[pos1].apellido<<endl;
	cout<<"\tSu carnet es: "<<a[pos1].carnet<<endl;
	cout<<"\tSu promedio es: "<<a[pos1].n.promedio<<endl;
}
