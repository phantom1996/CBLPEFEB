// largest
#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int maxi=INT_MIN;
	int n;
	cin>>n;
	int a[100000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>maxi){
			maxi=a[i];
		}
	}
	cout<<maxi;
	
	return 0;
}