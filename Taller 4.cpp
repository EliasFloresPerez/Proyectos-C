#include <iostream>
#include <stdlib.h>
#include <ctime>



using namespace std;

int main(){
	srand(time(0));
	int voto = 0;
	int candidato_1 = 0;
	int candidato_2 = 0;
	int candidato_3 = 0;
	string ganador = "";
	
	
	for(int i = 0; i <250;i++){
		voto = 1+(rand()%3);
		switch(voto){
			case 1:
				candidato_1+=1;
				break;
			case 2:
				candidato_2+=1;
				break;
			case 3:
				candidato_3+=1;
				break;
		}
		
	}

	
	cout<<"\nResultados :";
	cout<<"\nCandidato 1: "<<candidato_1<<" voto/s"<<"  Procentaje :"<<candidato_1*100/250<<"%";
	cout<<"\nCandidato 2: "<<candidato_2<<" voto/s"<<"  Procentaje :"<<candidato_2*100/250<<"%";
	cout<<"\nCandidato 3: "<<candidato_3<<" voto/s"<<"  Procentaje :"<<candidato_3*100/250<<"%";
	cout<<"\ntotal de votos :"<<candidato_1+candidato_2+candidato_3;
	
	
	cout<<"\n\n";
		
	if (candidato_1 > candidato_2 && candidato_1 > candidato_3){
		cout<<"El Candidato 1 es el ganador con "<<candidato_1<<" voto/s";
	}
	if(candidato_2 > candidato_1 && candidato_2 > candidato_3){
		cout<<"El Candidato 2 es el ganador con "<<candidato_2<<" voto/s";
	}
	if (candidato_3 > candidato_2 && candidato_3 > candidato_1){
		cout<<"El Candidato 3 es el ganador con "<<candidato_3<<" voto/s";
	}
	
	
	
	return 0;
}
