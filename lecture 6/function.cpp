// function
#include <iostream>
using namespace std;
/*//return_type function_name(//parameters){

	//works by function
} */
// void printnumber()//function declaration
void printnumber(){
	//function body
	for(int i=0;i<10;i++){
		cout<<i<<" ";
	}
	cout<<endl;
}

//add two number
// int sum(int m,int n){
// 	int sum=m+n;
// 	return sum;
// }



//declare
int sum(int,int);//function declare
int main()
{
	//printnumber();//function calling
	int a,b;
	cin>>a>>b;
	int ts=sum(a,b);//syntax
	cout<<ts;
	
	return 0;
}
int sum(int m,int n){
	int sum=m+n;
	return sum;
}