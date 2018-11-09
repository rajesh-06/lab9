//q17e.

//include libraries
#include<iostream>
#include<cstring> 
using namespace std;

//function
int fstrchr(char a[],char o){
    char *p;int n=0;
    p=a;
    while(*p!='\0'){
        if(*p==o)
        n++;
        p++; 
    }
return n;
}

//main function
int main(){
        char a[20],o;
        int g;
        cout<<"enter a string with repeating elements "<<endl;            
        cin>>a;
        cout<<"enter the character you want to find "<<endl;
        cin>>o;
        g = fstrchr(a,o);   
        cout<<"The number of times "<<o<<" repeated in the string = "<<g;
//terminating program
return 0;
}
