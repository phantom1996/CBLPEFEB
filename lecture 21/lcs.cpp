// lcs
#include <iostream>
#include <cstring>
using namespace std;

int lcs(char* s1,char* s2, int m, int n){
	//base case

	if(m==0 || n==0){
		return 0;
	} 

	if(s1[m-1] == s2[n-1]){
		return 1 + lcs(s1,s2,m-1,n-1); 
	}
	else{
		int op1=lcs(s1,s2,m-1,n);
		int op2=lcs(s1,s2,m,n-1);

		return max(op1,op2);
	}
}
int topdown(char* s1,char* s2, int m, int n,int dp[][100]){
	//base case

	if(m==0 || n==0){
		dp[m][n]=0;
		return 0;
	} 


	if(dp[m][n]!=-1){
		return dp[m][n];
	}

	if(s1[m-1] == s2[n-1]){
		dp[m][n]=1 +  topdown(s1,s2,m-1,n-1,dp);
		return dp[m][n]; 
	}
	else{
		int op1=topdown(s1,s2,m-1,n,dp);
		int op2=topdown(s1,s2,m,n-1,dp);
		dp[m][n]=max(op1,op2);
		return dp[m][n];
	}
}

int bottomup(char *s1,char *s2,int m,int n){
	int dp[100][100]={0};

	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0 || j==0){
				dp[i][j]=0;
			}
			else if(s1[i-1]==s2[j-1]){
				dp[i][j]= 1 + dp[i-1][j-1];
			}
			else{
				dp[i][j]= max( dp[i-1][j] , dp[i][j-1] );
			}
		}
	}
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

	return dp[m][n];
}


int main()
{
	char s1[]="AGGTAB";
	char s2[]="GXTXAYB";
	int dp[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			dp[i][j]=-1;
		}
	}


	int m=strlen(s1);
	int n=strlen(s2);

	cout<<lcs(s1,s2,m,n)<<endl;
	cout<<topdown(s1,s2,m,n,dp)<<endl;
	cout<<bottomup(s1,s2,m,n)<<endl;
	return 0;
}