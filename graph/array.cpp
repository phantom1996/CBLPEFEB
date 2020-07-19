// array
#include <iostream>
using namespace std;

int main()
{
	//sytax
	int a[1000];

	int k;
	cin>>k;
	// int x;
	// cin>>x;

  	// cin>>a[0];
  	// cin >>a[1];
  	// cin>>a[2];

	// int ts = (k*(k+1))/2;

	// int sum = 0;

	for(int i=0 ;i <k;i++){
		cin>>a[i];
		//sum = sum + a[i];
	}
	// int myvalue = ts - sum; 

	// cout<<"The value is "<<myvalue;

	int key;
	cin>>key;


	for(int i=0;i<k-1;i++){
		for(int j=i+1;j<k;j++){
			if(a[i] + a[j] ==  key){
				cout<<a[i]<<" "<<a[j]<<endl;
			}
		}
	}





	return 0;
}