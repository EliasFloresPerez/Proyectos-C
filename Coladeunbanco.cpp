#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std; 


class Queue { 
	int size; 
	int* queue; 
	
	public:
	Queue() { 
		size = 0;
		queue = new int[100];
	}
	void add(int data) { 
		queue[size] = data; 
		size++;
	}
	void remove() { 
		if (size == 0) { 
			cout << "Queue is empty"<<endl; 
			return; 
		} 
		else { 
			for (int i = 0; i < size - 1; i++) { 
				queue[i] = queue[i + 1]; 
			} 
			size--; 
		} 
	} 
	void print() { 
		if (size == 0) { 
			cout << "Queue is empty"<<endl; 
			return; 
		} 
		for (int i = 0; i < size; i++) { 
			cout<<queue[i]<<" <- ";
		} 
		cout << endl;
	}
	Queue operator+(Queue &obj) {
        Queue res;
        for(int i=0;i<this->size;i++) {
            res.add(this->queue[i]);
        }
        for(int i=0;i<obj.size;i++) {
            res.add(obj.queue[i]);
        }
        return res; 
    }
};

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
	Queue<int> q1; 
	q1.add(42); q1.add(2); q1.add(8);  q1.add(1);
	q1.print();
    
	Queue2 q2;
	q2.add("Dave"); q2.add("John"); q2.add("Amy");
	q2.print();

	return 0; 
}
