#include<iostream>
int main(){
	int a,b;
    do{
        std::cin>>a; 
        std::cin>>b;
      }while(a<=1600||a>=3000||b<=1600||b>=3600);
    if(a%4==0)
    {
        if(a%100==0)
        {
            if(a%400==0)
            {
                std::cout<<'S' ;
            }else{std::cout<<'N';}
        }else{std::cout<<'S';}
     }else{std::cout<<'N';}
    std::cout<<"\n";
    if(b%4==0)
    {
        if(b%100==0)
        {
            if(b%400==0)
            {
                std::cout<<'S';
            }else{std::cout<<'N';};
        }else{std::cout<<'S';}
     }else{std::cout<<'N';}
 
	return 0;
}
