/*14. [STRING] Create a string and store your name in it. Use a loop to print string character by character using the normal index method as well as the pointer method. */

//including library
#include<iostream>
using namespace std;

//main function
int main(){
	//declare char string and pointer
	char myname[15]={'B',' ','R','a','j','e','s','h',' ','A','c','h','a','r','i'};

	//pointer
	char *x;

	//printing with normal index method 
	cout<<"Print the array elements with normal index method :"<<endl;
	//using loops
	for(int i=0;myname[i]!='\0';i++){
	cout<<myname[i];
	
   	cout<<endl;
  	//printing with pointer method 
	cout<<"Print the array elements with pointer method :"<<endl;
   	//pointer
   	x=myname;
   	for(int i=0;*x!='\0';i++){
	cout<<*x;
	x++;}
}

//terminating program
return 0;
}
