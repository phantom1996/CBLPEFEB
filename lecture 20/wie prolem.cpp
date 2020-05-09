// wie prolem
#include <iostream>
using namespace std;

int wineprice(int* price,int i,int j,int day){

	//base case
	if(i>j){
		return 0;
	}
	int op1=price[i]*day + wineprice(price,i+1,j,day+1);

	int op2=price[j]*day + wineprice(price,i,j-1,day+1);		
	return max(op1,op2);
}
int topdow(int* price,int i,int j,int day,int dp[][100]){

	//base case

	if(i>j){
		dp[i][j]=0;
		return 0;
	}
	if(dp[i][j]!=-1){
		return dp[i][j];
	}

	int op1=price[i]*day + topdow(price,i+1,j,day+1,dp);

	int op2=price[j]*day + topdow(price,i,j-1,day+1,dp);

	dp[i][j]=max(op1,op2);
	return dp[i][j];
}

int Bottomup(int *price,int n){

	int dp[100][100]={0};
	int day=n;

	for(int i=0;i<n;i++){
		dp[i][i]=price[i]*day;
	}

	day--;


	for(int len=2;len<=n;len++){
		int i=0;
		int maxi=n-len;

		while(i<=maxi){
			int j=i+len-1;

			int op1=price[i]*day + dp[i+1][j];
			int op2=price[j]*day + dp[i][j-1];

			dp[i][j]=max(op1,op2);

			i++;
		}

		day--;

	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}


	return dp[0][n-1];

}


int main()
{


	int price[]={2,3,5,1,4};

	int n=sizeof(price)/sizeof(int);
	int dp[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
		dp[i][j]=-1;
		}
	}
	cout<<wineprice(price,0,n-1,1)<<endl;
	cout<<topdow(price,0,n-1,1,dp)<<endl;
	cout<<Bottomup(price,n);
	return 0;
}