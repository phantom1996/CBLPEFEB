// array and pointer
#include <iostream>
using namespace std;


//int a[];
void printA(int *a,int n){
	for(int i=0;i<5;i++){
		cout<<*(a+i)<<" ";
	}
}

int main()
{
	// int a[5]={1,2,3,4,5};
	// //printA(a,5);
	// int x=5;
	// int *p=&x;
	// cout<<*p<<" ";
	// int y=10;
	// p=&y;
	// cout<<*p;
	// int b[]={1,2,3};
	// a=b;


// p=p+1;
// a=a+1; 
	int x=5;
	int* p=&x;
	int **ptr=&p;
	int ***pptr=&ptr;
	cout<<x<<endl;
	cout<<*p<<endl;
	cout<<*(*ptr)<<endl;
	cout<<*(*(*pptr))<<endl;









	// int *p=a;
	// cout<<p+2<<endl;
	// cout<<a+2<<endl;
	// cout<<a[2]<<endl;
	// cout<<*(p+2)<<endl;

	// for(int i=0;i<5;i++){
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;
	// for(int i=0;i<5;i++){
	// 	cout<<*(a+i)<<" ";
	// }


















	// cout<<a<<endl;
	// cout<<&a<<endl;
	//  cout<<&a[0]<<endl;
	//  cout<<(&a[0]+2)<<endl;
	// // cout<<&a[1]<<endl;
	// // cout<<*(&a[0])+1<<endl;
	//  cout<<&a[2]<<endl;

	
	return 0;
}