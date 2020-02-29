// array
#include <iostream>
using namespace std;

int main()
{
	//syntax of array
	// data_type name [size];
	int a[10];
	// cout<<a[0]<<endl;
	// cout<<a[1]<<endl;
	// cout<<a[2]<<endl;
	// cout<<a[3]<<endl;
	// cout<<a[4]<<endl;
	// int x;
	// cin>>x;
	// cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
	// cout<<a[0]<<endl;
	// cout<<a[1]<<endl;
	// cout<<a[2]<<endl;
	// cout<<a[3]<<endl;
	// cout<<a[4]<<endl;
	// for(int i=0;i<5;i++){
	// 	cin>>a[i];
	// }
	// for(int i=0;i<5;i++){
	// 	cout<<a[i]<<" ";
	// }

	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	for(int i=9;i>=0;i--){
		cout<<a[i]<<" ";
	}



	
	return 0;
}