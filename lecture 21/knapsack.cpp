// knapsack
#include <iostream>
using namespace std;


int MAXProfit(int *price,int *weight,int n,int capacity){
	//ase

	if(capacity==0 || n==0){
		return 0;
	}

	int inc=0,exc=0;

	if(capacity>=weight[n-1]){
		inc = price[n-1] + MAXProfit(price,weight,n-1,capacity-weight[n-1]);  
	}
	exc= 0 + MAXProfit(price,weight,n-1,capacity);

	return max(inc,exc);

}
int topdown(int *price,int *weight,int n,int capacity,int dp[][100]){
	//ase

	if(capacity==0 || n==0){
		dp[n][capacity]=0;
		return 0;
	}

	int inc=0,exc=0;

	if(dp[n][capacity]!=-1){
		return dp[n][capacity];
	}

	if(capacity>=weight[n-1]){
		inc = price[n-1] + topdown(price,weight,n-1,capacity-weight[n-1],dp);  
	}
	exc= 0 + topdown(price,weight,n-1,capacity,dp);

	dp[n][capacity]=max(inc,exc);
	return dp[n][capacity];

}

int bottomup(int *price,int *weight,int N,int capacity){
	int dp[100][100]={0};

	for(int n=0;n<=N;n++){
		for(int c=0;c<=capacity;c++){
			if(n==0 || c==0){
				dp[n][c]=0;
			}
			else{
				int inc=0,exc=0;
				if(c>=weight[n-1]){
					inc = price[n-1] + dp[n-1][c-weight[n-1]];
				}
				exc = 0 + dp[n-1][c];
				dp[n][c]=max(inc,exc);
			}
		}
	}

	for(int i=0;i<=N;i++){
		for(int j=0;j<=capacity;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;

	}
	return dp[N][capacity];

}
int main()
{

	int price[]={10 ,20,10,15};
	int weight[]={2,2,3,1};

	int capacity=5;

	int n=sizeof(price)/sizeof(int);
	int dp[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			dp[i][j]=-1;
		}
	}


	cout<<MAXProfit(price,weight,n,capacity)<<endl;
	cout<<topdown(price,weight,n,capacity,dp)<<endl;
	cout<<bottomup(price,weight,n,capacity)<<endl;
	return 0;
}