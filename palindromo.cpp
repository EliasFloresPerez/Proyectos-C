#include <iostream>
#include <string.h>
using namespace std;

bool isPalindrome(char palabra[30]) {
    //completa la función
    char invertida[50];
    int dato=0;
    dato=strlen(palabra);
    for(int i=0;i<dato;i++){
        invertida[i]=palabra[dato-1-i];
       
    }
    
    if(strcmp(palabra,invertida)==0){
        return true;
    }else{
    	return false;
    }
}

int main() {
    char n[30];
    cin.getline(n,30,'\n');
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}
