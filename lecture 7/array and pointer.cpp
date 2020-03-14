// array and pointer
#include <iostream>
using namespace std;

void printarray(int a[],int n){
	// for(int i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;
	//int b[]== copy a array values
	for(int i=0;i<n;i++){
		a[i]=a[i]*2;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
// 2 4 6 8 10    1 2 3 4 5
// 2 4 6 8 10    2 4 6 8 10

int main()
{
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(int);
	printarray(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}