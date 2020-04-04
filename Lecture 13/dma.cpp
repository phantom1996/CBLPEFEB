// dma.cpp
#include <iostream>
using namespace std;

int main()
{
	//synntax
	//pointer type allocated in heap=  new (keyword)  type_of_data

	// int *p=new int;
	// // cout<<p<<endl;
	// // cout<<*p<<endl;
	// *p=10;
	// cout<<*p<<endl;

	// delete p;

	// cout<<*p;
	// int n;cin>>n;
	//array in DM
	// int *a=new int [n];
	// for(int i=0;i<n;i++){
	// 	cin>>a[i];
	// }
	// for(int i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }

	// //delete

	// delete []a;


	//2-d allocation
	int r,c;
	cin>>r>>c;

//array of pointer
	int **a=new int*[r];
	for(int i=0;i<r;i++){
		a[i]=new int[c];
	}


	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
//deletion

	for(int i=0;i<r;i++){
		delete []a[i];
	}
	delete []a;






	return 0;
}