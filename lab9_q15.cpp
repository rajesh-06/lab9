//q15.

//include library
#include<iostream>
using namespace std;

//main function
int main(){
	char a[20],*p,*i;
	cout<<"Input a string of length less than 20 characters "<<endl;
	cin>>a;
	i=a;
		//using  while loop
		while(*i!='\0'){
		p=i;
		while(*p!='\0'){
		cout<<" "<<*p;
		p++;
		}
		cout<<endl;
		i++;
		}
//terminating program
return 0;
}
