#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
		int cedula;
	public:
		Persona(string,int,int);
		virtual void datos();
};

class Cliente : public Persona {
	private:
		int contrasena;
		int dinero;
	public:
		Cliente(string,int,int,int);
		void datos();
		bool combrobar(int);
		void abonar(float);
		void retirar(float);
		void consultar();
};


//Metodos de Persona
Persona::Persona(string _nombre,int _edad,int _cedula){
	nombre = _nombre;
	edad = _edad;
	cedula = _cedula;
}
void Persona::datos(){
	cout<<"\nNombre : "<<nombre<<endl;
	cout<<"Edad :"<<edad<<endl;
	cout<<"Cedula : "<<cedula;
}
//Metodos de Cliente
Cliente::Cliente(string _nombre,int _edad,int _cedula,int _contrasena) : Persona(_nombre,_edad,_contrasena){
	contrasena = _contrasena;
}
void Cliente::datos(){
	Persona::datos();
	cout<<"\nContrasena :"<<contrasena;
}
bool Cliente::combrobar(int _contrasena) {
	if(contrasena == _contrasena){
		return true;
	}else{
		return false;
	}
}
void Cliente::abonar(float _dinero){
	dinero +=_dinero;
}
void Cliente::retirar(float _dinero){
	if(dinero < _dinero){
		cout<<"\nSaldo insuficiente"<<endl;
	}else{
		dinero -= _dinero;
	}
}
void Cliente::consultar(){
	Persona::datos();
	cout<<"\nSu saldo es :"<<dinero<<endl;
}
//Funciones del menu
void menu(){
	cout<<"\n\t\tBienvenido a BancoBanco "<<endl;
	cout<<"\t\t1]Registrarse"<<endl;
	cout<<"\t\t2]Iniciar Secion"<<endl;	
	cout<<"\t\t0]SALIR"<<endl;
}
void menu2(){
	cout<<"\n\t\tBievenido que desea hacer";
	cout<<"\n\t\t1]Datos";
	cout<<"\n\t\t2]Abonar";
	cout<<"\n\t\t3]Retirar";
	cout<<"\n\t\t4]Consultar";
	cout<<"\n\t\t0]Cerrar Secion";
	cout<<"\n\t\tEleccion :";
}

int main(){
	int salir,a=0,z=0,salir2=0;
	float dinero;
	string nombreCliente;
	int edadCliente,cedulaCliente,contrasenaCliente;
	Cliente *vector[3];
	do{
		cin.ignore();
		system("cls");
		menu();
		cout<<"\t\tEleccion : ";
		cin>>salir;
		switch(salir){
			case 0:
				cout<<"Saliendo..."<<endl;
			break;
			case 1:
				cout<<"\n\t\tNombre : ";
				cin>>nombreCliente;
				cout<<"\n\t\tEdad :";
				cin>>edadCliente;
				cout<<"\n\t\tCedula :";
				cin>>cedulaCliente;
				cout<<"\n\t\tContrasena :";
				cin>>contrasenaCliente;
				vector[a]= new Cliente(nombreCliente,edadCliente,cedulaCliente,contrasenaCliente);
				a++;
				cin.ignore();
			break;
			case 2:
				system("cls");
				cout<<"\n\t\tContrasena :";
				cin>>contrasenaCliente;
				cout<<"\n\t\tNumero de usuario? : ";
				cin>>z;
				if(vector[z]->combrobar(contrasenaCliente)){
					do{
						system("cls");
					menu2();
					cin>>salir2;
					switch(salir2){
						case 0:
						cout<<"\n\t\tCerrando Secion";
						break;
						case 1:
							vector[z]->datos();
						break;
						case 2:
							cout<<"\n\t\t\tCuanto dinero va a abonar?:";
							cin>>dinero;
							vector[z]->abonar(dinero);
						break;
						case 3:
							cout<<"\n\t\t\tCuanto dinero va a retirar?:";
							cin>>dinero;
							vector[z]->retirar(dinero);
						break;
						case 4:
							vector[z]->consultar();
						break;
					}
					cout<<endl;
					system("pause");
					}while(salir2 != 0);
				}else{
					cout<<"\n\t\t\tDatos Erroneos";
					cout<<endl;
					system("pause");
				}
			break;	
		}
	}while(salir != 0);
	
	
	system("pause");
	return 0;
}
