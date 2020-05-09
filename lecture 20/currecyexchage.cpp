// currecyexchage
#include <iostream>
#include <climits>
using namespace std;


int minreq(int *coins,int n,int amount){

	//base

	if(amount==0){
		return 0;
	}

	int ans=INT_MAX;

	for(int i=0;i<n;i++){
		if(amount-coins[i]>=0){
			int rem=minreq(coins,n,amount-coins[i]);

			ans=min(ans,rem+1);
		}
	}

	return ans;

}
int topdown(int *coins,int n,int amount,int *dp){

	//base

	if(amount==0){
		dp[amount]=0;
		return 0;
	}

	int ans=INT_MAX;

	if(dp[amount]!=-1){
		return dp[amount];
	}

	for(int i=0;i<n;i++){
		if(amount-coins[i]>=0){
			int rem=topdown(coins,n,amount-coins[i],dp);

			ans=min(ans,rem+1);
		}
	}
	dp[amount]=ans;

	return dp[amount];

}

int bottomup(int* coins,int n,int amount){

	int dp[1000];
	for(int i=0;i<1000;i++){
		dp[i]=INT_MAX;
	}

	//i
	dp[0]=0;

	for(int rupay=1;rupay<=amount;rupay++){
		for(int i=0;i<n;i++){
			if(rupay-coins[i]>=0){
				dp[rupay]=min(dp[rupay],1+dp[rupay-coins[i]]);
			}
		}
	}
	for(int i=0;i<=amount;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	return dp[amount];
}



int main()
{

	int coins[]={1,7,10};
	int n=3;

	int amount;
	cin>>amount;

	int dp[1000];
	for(int i=0;i<1000;i++){
		dp[i]=-1;
	}

	cout<<minreq(coins,n,amount)<<endl;
	cout<<topdown(coins,n,amount,dp)<<endl;
	cout<< bottomup(coins,n,amount)<<endl;

	return 0;
}