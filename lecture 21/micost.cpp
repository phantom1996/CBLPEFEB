// micost
#include <iostream>
#include <climits>
using namespace std;


int Mincostpath(int cost[][10],int i,int j){
	
	//base case 1 
	if(i==0 && j==0){
		return cost[i][j];
	}
	//ase case

	if(i<0 || j<0){
		return INT_MAX;
	}
	int op1,op2;
	op1=op2=INT_MAX;

	op1=Mincostpath(cost,i-1,j);
	op2=Mincostpath(cost,i,j-1);

	return min(op1,op2) + cost[i][j];

}
int topdown(){
	//homework
}

int bottomup(int cost[][10],int r,int c){
	int dp[100][100]={0};

	for(int i=0;i<=r;i++){
		for(int j=0;j<=c;j++){
			if(i==0 && j==0){
				dp[i][j]=cost[i][j];
			}
			else if(i==0 && j>0){
				dp[i][j]=dp[i][j-1] + cost[i][j];
			}
			else if(j==0 && i>0){
				dp[i][j] = dp[i-1][j] + cost[i][j];
			}
			else{
				dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + cost[i][j];
			}
		}
	}

	for(int i=0;i<=r;i++){
		for(int j=0;j<=c;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;

	}

	return dp[r][c];
}




int main()
{

	int cost[][10]={

		{1,2,5,1},
		{8,3,6,2},
		{0,1,3,3},
		{4,1,7,4}
	};

	int i,j;
	cin>>i>>j;

	//cout<<Mincostpath(cost,i,j)<<endl;
	cout<<bottomup(cost,i,j)<<endl;
	
	return 0;
}