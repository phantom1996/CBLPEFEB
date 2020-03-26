// mergesort
#include <iostream>
using namespace std;



void merge(int *a,int *x,int *y,int s,int e){
	int mid=(s+e)/2;
	int i=s; //track x array
	int j=mid+1; //track y array
	int k=s; //track a array

	while(i<=mid && j<=e){
		if(x[i]<y[j]){
			a[k]=x[i];
			k++;
			i++;
		}
		else{
			a[k]=y[j];
			k++;
			j++;
		}
	}

	if(i<=mid){
		while(i<=mid){
			a[k]=x[i];
			k++;
			i++;
		}
	}
	if(j<=e){
		while(j<=e){
			a[k]=y[j];
			k++;
			j++;
		}
	}

}





void Mergesort(int a[],int s,int e){

//base case
	if(s>=e){
		return;
	}

	int mid=(s+e)/2;
	//break ek baari mein karuga
	int x[100];
	int y[100];

	//ist partition
	for(int i=s;i<=mid;i++){
		x[i]=a[i];
	}
	//2nd partition
	for(int i=mid+1;i<=e;i++){
		y[i]=a[i];
	}

	//baki ka break recursion karega;
	Mergesort(x,s,mid);
	Mergesort(y,mid+1,e);

	//merge
	merge(a,x,y,s,e);

}

int main()
{
	int a[]={5,4,6,2,3,1};
	int n=sizeof(a)/sizeof(int);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	Mergesort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}





	
	return 0;
}