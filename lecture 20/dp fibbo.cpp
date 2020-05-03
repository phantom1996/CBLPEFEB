// dp fibbo
#include <iostream>
using namespace std;


//top down
long long int fibbo(long long int f,long long int *dp){
	if(f==0 || f==1){
		dp[f]=f;
		return f;
	}

	if(dp[f]!=-1){
		return dp[f];
	}

	long long int ans=fibbo(f-1,dp) + fibbo(f-2,dp);
	dp[f]=ans;
	return ans;
}

long long int bottomup(int n){

	long long int dp[1000];

	//intialization

	dp[0]=0;
	dp[1]=1;

	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1] + dp[i-2]; //recurance relation
	}

	return dp[n];

}



int main()
{

	long long int f;
	cin>>f;

	long long int dp[100000];
	for(int i=0;i<1000;i++){
		dp[i]=-1;
	}

	cout<<fibbo(f,dp)<<endl;
	cout<<bottomup(f)<<endl;
	
	return 0;
}