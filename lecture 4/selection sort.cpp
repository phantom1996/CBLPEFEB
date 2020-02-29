// selection sort
#include <iostream>
using namespace std;

int main()
{
	int a[]={3,1,2,5,4};
	// cout<<sizeof(a)<<endl;
	// cout<<sizeof(int);
	int n=sizeof(a)/sizeof(int);
	for(int i=0;i<n-1;i++){
		int minindex=i; //assumption
		for(int j=i+1;j<n;j++){
			if(a[j]<a[minindex]){
				minindex=j;
			}
		}
		//swaping
		// int temp=a[i];
		// a[i]=a[minindex];
		// a[minindex]=temp;
		/*
		a=a+b
		b=a-b
		a=a-b
		//b=(a+b)-(a=b)
		*/
		swap(a[i],a[minindex]);//inbuild func

	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}




	
	return 0;
}