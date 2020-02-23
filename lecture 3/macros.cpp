// macros
#include <iostream>

//macros
#define pie 3.14 //constant
#define semicolon ;
using namespace std;

int main()
{

	// float radius=5;
	// cout<<pie<<endl;
	// float cir=2*pie*radius semicolon
	// // pie=6.28;
	// cout<<pie<<endl;
	// cout<<cir<<endl;

	// const int x=5;
	
	// cout<<x;


	int grade=77;
	// if(grade>75){
	// 	cout<<"A"<<endl;
	// }
	// if(grade>70 || grade<75){
	// 	cout<<"B"<<endl;
	// }
	if(grade<75 && grade>70){
		cout<<"A"<<endl;
	}
	if(grade<75 || grade>70){
		cout<<"B"<<endl;
	}

	return 0;
}