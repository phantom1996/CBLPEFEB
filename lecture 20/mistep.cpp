// mistep
#include <iostream>
#include <climits>
using namespace std;

int mistep(int n){
	//base case

	if(n==1){
		return 0;
	}

	int op1,op2,op3;
	op1=op2=op3=INT_MAX;

	op1= 1 + mistep(n-1);
	if(n%2==0){
		op2= 1 +  mistep(n/2);
	}
	if(n%3==0){
		op3= 1 + mistep(n/3);
	}

	return min(op1,min(op2,op3));
}
int topdown(int n,int* dp){
	//base case

	if(n==1){
		dp[n]=0;
		return 0;
	}

	int op1,op2,op3;
	op1=op2=op3=INT_MAX;

	if(dp[n]!=-1){
		return dp[n];
	}

	op1= 1 + topdown(n-1,dp);
	if(n%2==0){
		op2= 1 +  topdown(n/2,dp);
	}
	if(n%3==0){
		op3= 1 + topdown(n/3,dp);
	}

	dp[n]=min(op1,min(op2,op3));

	return dp[n];
}
int bottomup(int n){

	int dp[1000]={0};
	dp[1]=0; //initialization

	for(int i=2;i<=n;i++){
		int op1,op2,op3;
		op1=op2=op3=INT_MAX;

		op1= 1 + dp[i-1];

		if(i%2==0){
			op2= 1+ dp[i/2];
		}

		if(i%3==0){
			op3 = 1+ dp[i/3];
		}

		dp[i]=min(op1,min(op2,op3));

	}
	for(int i=0;i<=n;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;

	return dp[n];
}



int main()
{

	int n;
	cin>>n;
	int dp[1000];
	for(int i=0;i<1000;i++){
		dp[i]=-1;
	}

	//cout<<mistep(n)<<endl;
	//cout<<topdown(n,dp)<<endl;
	cout<<bottomup(n)<<endl;
	return 0;
}