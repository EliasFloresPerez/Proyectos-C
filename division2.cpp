#include <iostream>
using namespace std;
int main(){
    int a=1, b=1;
    float division=0;	
    cout<<"Dame el primer numero :";
    cin>>a;
    cout<<"Dame el segundo numero :";
    cin>>b;

    while(a>0 && b>0){
        division=a/b;
       	cout<<a<<"/"<<b<<" = "<<division<<endl;
        a=a-1;
        b=b-1;
    }
    return 0;
}
