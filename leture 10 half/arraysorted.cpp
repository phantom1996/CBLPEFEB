// arraysorted
#include <iostream>
using namespace std;

bool is_sorted(int *a,int n){

	//base case
	if(n==0 || n==1){
		return true;
	}

	//recursive case

	bool kyachootaarraysortedh=is_sorted(a+1,n-1);

	//ans

	if(a[0]<=a[1] && kyachootaarraysortedh==true){
		return true;
	}
	else{
		return false;
	}
}

bool is_sorted2(int a[],int i,int n){

//BASE VASE	
	if(i==n-1){
		return true;
	}


	//recursive case
	bool kyachootaarraysortedh=is_sorted2(a,i+1,n);

	//ans
	if(a[i]<=a[i+1] && kyachootaarraysortedh==true){
		return true;
	}
	else{
		return false;
	}

}
int arraysum(int a[],int i,int n){

	//base case;
	if(i==n-1){
		return a[i];
	}

	int chootearraykans=arraysum(a,i+1,n);

	int finalans=a[i]+chootearraykans;

	return finalans;

}


void print1(int a[],int i,int n){
	//basecase
	if(i==n-1){
		cout<<a[i]<<" ";
		return;
	}

	cout<<a[i]<<" ";

//recursive

	print1(a,i+1,n);

}

void print2(int a[],int i,int n){
	//basecase
	if(i==n-1){
		cout<<a[i]<<" ";
		return;
	}

	

//recursive

	print2(a,i+1,n);
	cout<<a[i]<<" ";

}

int main()
{
	int n;cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//cout<<boolalpha<<is_sorted2(a,0,n);
	//cout<<arraysum(a,0,n);
	print2(a,0,n);
	return 0;
}