/*q12.Write a program to declare two variables a,b and a pointer variable p (all integer type). Try to understand pointers while doing this.
Point p to a. And store the value pointed by p in b. Print the values of a, b and *p.
Assign values a=2 and b = 3. Print the values of a, b and *p.
Now point p to b. Print the values of a, b and *p.*/

//include library
#include<iostream>
using namespace std;

//main function
int main(){
int a,b,*p;

	//intialising the pointer 
	p=0;
	//declaring a and b
	a=2;
	b=3;
	//printint the values before pointing
	cout<<"The initial values are: "<<"a = "<<a<<", b = "<<b<<"and *p = "<<p<<endl;
	//p pointing to b 
	p=&b;
	// then value stored to a
	a=*p;
	//final values
	cout<<"The final values are: "<<"a = "<<a<<", b = "<<b<<"and *p = "<<p<<endl;

//terminating program
return 0;
}
