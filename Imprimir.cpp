#include <iostream>
using namespace std;
int main()
{
   
   int  b[4][4];
    
    for(int x=0;x<4;x++)
    {
    	for(int y=0;y<4;y++)
    	{
    		b[x][y]=1;
		}
	}
	 for(int x=0;x<4;x++)
    {
    	for(int y=0;y<4;y++)
    	{
    		switch(b[x][y])
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

	
	return 0;
}
