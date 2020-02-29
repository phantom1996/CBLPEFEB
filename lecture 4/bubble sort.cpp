// bubble sort
#include <iostream>
using namespace std;

int main()
{
	int a[]={3,1,2,5,4};
	int n=sizeof(a)/sizeof(int);


	for(int i=0;i<n-1;i++){
		bool kyaswaphua=false;
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				kyaswaphua=true;
			}
		}
		if(kyaswaphua==false){
			break;
		}
		cout<<i<<endl;
		for(int k=0;k<n;k++){
			cout<<a[k]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	
	return 0;
}