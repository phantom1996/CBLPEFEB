// 2darray & pointer
#include <iostream>
using namespace std;

int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	// int *p=a;
	// // cout<<a<<endl;
	// // cout<<&a[0]<<endl;
	// 	cout<<&a<<endl;
	// cout<<&a[0]<<endl;
	// cout<<&a+1<<endl;
	// cout<<&a[0]+1<<endl;
	cout<<&a<<endl;
	cout<<&a[0]<<endl;
	cout<<&a[0][0]<<endl<<endl;
	cout<<&a+1<<endl;
	cout<<&a[0]+1<<endl;
	cout<<&a[0][0]+1<<endl;
	return 0;
}