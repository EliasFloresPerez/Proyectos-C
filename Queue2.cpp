#include <iostream>
#include <string.h>
#include <stdlib.h>
class Queue2{
	int size;
	char *p= new char[100];
	int longitud=0;
	int longitudT=0;
  public :
  	void add(char data[]) { 
  	    longitud=strlen(data);
  	    for(int i=0;i<longitud;i++){
  	    	p[i]=data[i];
  	    	longitudT++;
  	    /*	if((i+1)==longitud){
  	    		p[i]="\n";
  	    		longitudT++;
			  }
		  }*/
		  
	}
	void print(){
		for(int i=0;i<longitudT;i++){
			//if(p[i]!="0"){
				cout<<p[i];
		//	}
			/*else{
				cout<<"<-";
			}*/
		}
	}
};

int main() { 
    
	Queue2 q2;
	q2.add("D"); q2.add("J"); q2.add("A");
	q2.print();

	return 0; 
}
