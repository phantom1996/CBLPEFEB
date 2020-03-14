// mergesortedarray
#include <iostream>
using namespace std;

void inputarray(int a[],int size){
	for(int i=0;i<size;i++){
		cin>>a[i];
	}
}


 void merge(int a[],int m,int b[],int n){
 	int k=m+n-1; //last index se start
 	int i=m-1;   //last index of m elemebts
 	int j=n-1;   //last index of n elements

 	while(i>=0 && j>=0){
 		if(a[i]>b[j]){
 			a[k]=a[i]; //last index mein greater element lagana h
 			k--;
 			i--;
 		}
 		else{
 			a[k]=b[j];
 			k--;
 			j--;
 		}
 	}
 	// jab dono mein se koi eke array finish ho gya hoga
 	//if i>0 khuch kamm nahi karna 
 	if(j>=0){
 		//copy elemet by element
 		while(j>=0){
 			a[k]=b[j];
 			k--;
 			j--;
 		}
 	}

 }


int main()
{

	int a[10000];
	int b[10000];
	int m,n;
	cin>>m>>n;
	inputarray(a,m);
	inputarray(b,n);
	merge(a,m,b,n);
	for(int i=0;i<m+n;i++){
		cout<<a[i]<<" ";
	}


	
	return 0;
}