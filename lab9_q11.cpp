//Q.11. Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables. (Hint: use sizeof)

// include library
#include <iostream>
using namespace std;
//main function
int main(){

//declare the variables and the pointers
int intgr,*i;
char chare,*c;
float flo,*f;
double doubl,*d;
bool boo,*b;

	//defining the variables 
	intgr= 12;
	chare='R';
	flo= 6.78;
	doubl= 6.76997909;
	boo = 0;

	//pointers
	i=&intgr;
	c=&chare;
	f=&flo;
	d=&doubl;
	b=&boo;

//printing the values in terminal
	cout<<"The size of int variable is "<<sizeof(intgr)<<" and its pointer is "<<sizeof(i) <<endl;
	cout<<"The size of character variable is "<<sizeof(chare)<<" and its pointer is "<<sizeof(c) <<endl ;
	cout<<"The size of float pointer variable is "<<sizeof(flo)<<" and its pointer is "<<sizeof(f) <<endl;
	cout<<"The size of double variable is "<<sizeof(doubl)<<" and its pointer is "<<sizeof(d) <<endl;
	cout<<"The size of bool variable is "<<sizeof(boo)<<" and its pointer is "<<sizeof(b) <<endl;

//terminating program
return 0;
}


